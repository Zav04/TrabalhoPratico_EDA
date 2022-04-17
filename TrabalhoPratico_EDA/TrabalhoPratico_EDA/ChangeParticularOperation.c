#include "Struct_Jobs.h"


ST_Jobs* ChangeParticularOperation(ST_Jobs* ST_ChangeJobsProcess)
{
	//Show all List to chose a Operation more easy
	ShowAllOperation(ST_ChangeJobsProcess, FALSE);
	ST_Jobs* ST_AuxChangeJobs = ST_ChangeJobsProcess;
	int IN_NoOperationFouned = 0;
	int IN_DataChange;
	char CH_OperationToRemove[50];


	printf("_____________________________________________________________________________\n");
	printf("\nWhat's the name of the Operation you want to change?\n");
	printf("R: ");
	scanf("%s", &CH_OperationToRemove);

	if (ST_AuxChangeJobs != NULL)
	{
		while (ST_AuxChangeJobs != NULL)
		{
			if (strcmp(ST_AuxChangeJobs->CH_NameofProcess, CH_OperationToRemove) == 0)
			{
				printf("_____________________________________________________________________________\n");
				printf("\nWhat's the new number of the Machine?\n");
				printf("R: ");
				scanf("%d", &IN_DataChange);

				ST_AuxChangeJobs->IN_NumberofMachine = IN_DataChange;

				printf("_____________________________________________________________________________\n");
				printf("\nWhat's the new time of the Machine?\n");
				printf("R: ");
				scanf("%d", &IN_DataChange);

				ST_AuxChangeJobs->IN_TimeToProcess = IN_DataChange;


				IN_NoOperationFouned = 1;
				printf("\nOperation %s successfully changed!\n", CH_OperationToRemove);
				system("PAUSE");
				system("CLS");
				break;

			}
			ST_AuxChangeJobs = ST_AuxChangeJobs->P_ST_Next;
		}

	}
	else
	{
		printf("*****************************************************************************\n");
		printf("NO OPERATIONS FOUNDED\n");
		printf("*****************************************************************************\n");
	}

	if (IN_NoOperationFouned == 0)
	{

		printf("\nOperation %s not found!\n", CH_OperationToRemove);
		printf("Please insert or verify the correct name of operation\n");
		system("PAUSE");

	}


	WriteDataToFile(ST_ChangeJobsProcess);
	return(ST_ChangeJobsProcess);


}