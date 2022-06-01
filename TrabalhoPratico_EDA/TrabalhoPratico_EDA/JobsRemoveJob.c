#include "Functions.h"

ST_Jobs* RemoveParticularJob(ST_Jobs* ST_RemoveJobToList)
{
	//FAZER SHOW JOBS
	ShowJobs(ST_RemoveJobToList,FALSE);
	ST_Jobs* ST_AtualNode = ST_RemoveJobToList, * ST_BeforeNode;
	int IN_NoOperationFouned = 0;
	char CH_OperationToRemove[50];

	if (ST_RemoveJobToList != NULL)
	{
		printf("_____________________________________________________________________________\n");
		printf("\nWhat's the name of the Job you want to remove?\n");
		printf("R: ");
		scanf("%s", &CH_OperationToRemove);


		if (strcmp(ST_AtualNode->CH_NameofJob, CH_OperationToRemove) == 0)
		{
			ST_RemoveJobToList = ST_AtualNode->P_ST_Next;
			free(ST_AtualNode->P_ST_Operation->P_ST_Machines);
			free(ST_AtualNode->P_ST_Operation);
			free(ST_AtualNode);
			IN_NoOperationFouned = 1;
			printf("\Job %s successfully removed!\n", CH_OperationToRemove);
			system("PAUSE");

		}
		else
		{
			ST_BeforeNode = ST_RemoveJobToList;
			while ((ST_AtualNode != NULL) && (strcmp(ST_AtualNode->CH_NameofJob, CH_OperationToRemove) != 0))
			{
				ST_BeforeNode = ST_AtualNode;
				ST_AtualNode = ST_AtualNode->P_ST_Next;
			}
			if (ST_AtualNode != NULL)
			{
				ST_BeforeNode->P_ST_Next = ST_AtualNode->P_ST_Next;
				free(ST_AtualNode->P_ST_Operation->P_ST_Machines);
				free(ST_AtualNode->P_ST_Operation);
				free(ST_AtualNode);
				IN_NoOperationFouned = 1;
				printf("\Job %s successfully removed!\n", CH_OperationToRemove);
				system("PAUSE");
			}

		}
	}
	else
	{

		printf("NO Job FOUNDED TO REMOVE\n");
		system("PAUSE");
		system("CLS");
		return ST_RemoveJobToList;

	}

	if (IN_NoOperationFouned == 0)
	{

		printf("\Job %s not found!\n", CH_OperationToRemove);
		printf("Please insert or verify the correct name of Job\n", CH_OperationToRemove);
		system("PAUSE");
		system("CLS");

	}

	return(ST_RemoveJobToList);
}
