#include "Functions.h"

ST_Operation* RemoveParticularOperation(ST_Operation* ST_RemoveJobToList)
{

	ShowOperations(ST_RemoveJobToList, FALSE);
	ST_Operation* ST_AtualNode = ST_RemoveJobToList, * ST_BeforeNode;
	int IN_NoOperationFouned = 0;
	char CH_OperationToRemove[50];

	if (ST_RemoveJobToList != NULL)
	{
		printf("_____________________________________________________________________________\n");
		printf("\nWhat's the name of the Operation you want to remove?\n");
		printf("R: ");
		scanf("%s", &CH_OperationToRemove);


		if (strcmp(ST_AtualNode->CH_NameofOperation, CH_OperationToRemove) == 0)
		{
			ST_RemoveJobToList = ST_AtualNode->P_ST_Next;
			free(ST_AtualNode);
			//free(ST_AtualNode->P_ST_Operation->P_ST_Machines);
			//free(ST_AtualNode->P_ST_Operation);
			IN_NoOperationFouned = 1;
			printf("\nOperation %s successfully removed!\n", CH_OperationToRemove);
			system("PAUSE");

		}
		else
		{
			ST_BeforeNode = ST_RemoveJobToList;
			while ((ST_AtualNode != NULL) && (strcmp(ST_AtualNode->CH_NameofOperation, CH_OperationToRemove) != 0))
			{
				ST_BeforeNode = ST_AtualNode;
				ST_AtualNode = ST_AtualNode->P_ST_Next;
			}
			if (ST_AtualNode != NULL)
			{
				ST_BeforeNode->P_ST_Next = ST_AtualNode->P_ST_Next;
				


				///ELIMINAR MAQUINAS TAMBEM SENÃO FUDEU



				free(ST_AtualNode);
				//free(ST_AtualNode->P_ST_Operation->P_ST_Machines);
				//free(ST_AtualNode->P_ST_Operation);
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
		return ST_RemoveJobToList;

	}

	if (IN_NoOperationFouned == 0)
	{

		printf("\nOperation %s not found!\n", CH_OperationToRemove);
		printf("Please insert or verify the correct name of operation\n", CH_OperationToRemove);
		system("PAUSE");
		system("CLS");

	}

	//WriteDataToFile(ST_RemoveJobToList);
	return(ST_RemoveJobToList);
}
