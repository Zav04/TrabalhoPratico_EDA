#include "Functions.h"


ST_Jobs* RemoveParticularOperation(ST_Jobs* ST_RemoveProcess)
{

	ShowAllOperation(ST_RemoveProcess, FALSE);
	ST_Jobs* ST_AtualNode = ST_RemoveProcess, *ST_BeforeNode;
	int IN_NoOperationFouned = 0;
	char CH_OperationToRemove[50];

	if (ST_RemoveProcess != NULL)
	{
	printf("_____________________________________________________________________________\n");
	printf("\nWhat's the name of the Operation you want to remove?\n");
	printf("R: ");
	scanf("%s", &CH_OperationToRemove);


		if (strcmp(ST_AtualNode->CH_NameofProcess, CH_OperationToRemove) == 0)
		{
			ST_RemoveProcess = ST_AtualNode->P_ST_Next;
			free(ST_AtualNode);
			IN_NoOperationFouned = 1;
			printf("\nOperation %s successfully removed!\n", CH_OperationToRemove);
			system("PAUSE");

		}
		else
		{
			ST_BeforeNode = ST_RemoveProcess;
			while ((ST_AtualNode != NULL) && (strcmp(ST_AtualNode->CH_NameofProcess, CH_OperationToRemove) != 0))
			{
				ST_BeforeNode = ST_AtualNode;
				ST_AtualNode = ST_AtualNode->P_ST_Next;
			}
			if (ST_AtualNode != NULL)
			{
				ST_BeforeNode->P_ST_Next = ST_AtualNode->P_ST_Next;
				free(ST_AtualNode);
				IN_NoOperationFouned = 1;
				printf("\nOperation %s successfully removed!\n", CH_OperationToRemove);
				system("PAUSE");
			}

		}
	}
	else
	{
		
		printf("NO OPERATIONS FOUNDED TO REMOVE\n");
		system("PAUSE");
		system("CLS");
		return ST_RemoveProcess;

	}

	if (IN_NoOperationFouned == 0)
	{

		printf("\nOperation %s not found!\n", CH_OperationToRemove);
		printf("Please insert or verify the correct name of operation\n", CH_OperationToRemove);
		system("PAUSE");
		system("CLS");

	}
	
	WriteDataToFile(ST_RemoveProcess);
	return(ST_RemoveProcess);
}
