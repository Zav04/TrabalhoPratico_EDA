#include "Functions.h"

void ShowAllProgram(ST_Jobs* ST_ShowReadProcess, BOOL B_Pause)
{
	system("CLS");


	ST_Jobs* ST_AuxAddJobToList = ST_ShowReadProcess;
	ST_Operation* ST_AuxAddOperationToList;
	ST_Machines* ST_AuxAddmachineToList;
	char CH_NameOfJob[99];

	if (ST_ShowReadProcess != NULL)
	{

		printf("**********************************PROGRAMS AVAILABLE*******************************************\n");
		//printf("%s\n", ST_AuxAddJobToList->CH_NameofJob);
		printf("NameOfJob:");
		printf("\t\t\tOperations:");
		printf("\t\tMachine:");
		printf("\t\tTimeToProcess:\n");

		while (ST_AuxAddJobToList != NULL)
		{
			printf("%s", ST_AuxAddJobToList->CH_NameofJob);
			ST_AuxAddOperationToList = ST_AuxAddJobToList->P_ST_Operation;
			ST_AuxAddmachineToList = ST_AuxAddJobToList->P_ST_Operation->P_ST_Machines;

			strcpy(CH_NameOfJob, ST_AuxAddJobToList->CH_NameofJob);

			//Count how many Operation and machines are in Job are in job
			while (ST_AuxAddOperationToList != NULL)
			{
				//Show name of Job
				printf("\t\t\t\t%s", ST_AuxAddOperationToList->CH_NameofOperation);

				//Show Machine and Data Time
				while (ST_AuxAddmachineToList != NULL)
				{

					printf("\t\t\t%d", ST_AuxAddmachineToList->IN_NumberofMachine);
					printf("\t\t\t%d\n", ST_AuxAddmachineToList->IN_TimeToProcess);

					//Next machine
					ST_AuxAddmachineToList = ST_AuxAddmachineToList->P_ST_Next;
				}
				//Next Operation
				ST_AuxAddOperationToList = ST_AuxAddOperationToList->P_ST_Next;

			}
			//Next Job
			ST_AuxAddJobToList = ST_AuxAddJobToList->P_ST_Next;
		}
		printf("***********************************************************************************************\n");

	}
	else
	{
		printf("***************************************************************************************\n");
		printf("\t\tNO JOBS AND OPERATIONS FOUNDED\n");
		printf("***************************************************************************************\n");

	}


	if (B_Pause)
	{
		system("PAUSE");
		system("CLS");

	}




}