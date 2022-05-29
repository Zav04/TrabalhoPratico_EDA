#include "Functions.h"



void ShowJob(ST_Jobs* ST_AddJobToList,BOOL B_Pause)
{
	system("CLS");


	ST_Jobs* ST_AuxAddJobToList = ST_AddJobToList;
	ST_Operation* ST_AuxAddOperationToList;
	ST_Machines* ST_AuxAddmachineToList;


	char CH_NameOfJob[99];
	int IN_CounterOfOperation=0;
	int IN_CounterOfMachines=0;

	if (ST_AddJobToList != NULL)
	{

		printf("**********************************JOBS AVAILABLE***************************************\n");
		//printf("%s\n", ST_AuxAddJobToList->CH_NameofJob);
		while (ST_AuxAddJobToList != NULL)
		{
			ST_AuxAddOperationToList = ST_AddJobToList->P_ST_Operation;
			ST_AuxAddmachineToList = ST_AddJobToList->P_ST_Operation->P_ST_Machines;
			
			strcpy(CH_NameOfJob, ST_AuxAddJobToList->CH_NameofJob);

			//Count how many Operation and machines are in Job are in job
			while (ST_AuxAddOperationToList !=NULL)
			{
				//Counter of machines
				while (ST_AuxAddmachineToList != NULL)
				{
					IN_CounterOfMachines++;
					ST_AuxAddmachineToList = ST_AuxAddmachineToList->P_ST_Next;
				}

				//Counter of Operations
				IN_CounterOfOperation++;
				ST_AuxAddOperationToList= ST_AuxAddOperationToList->P_ST_Next;

			}

			printf("%s", CH_NameOfJob);
			printf("\t\tNumber Of Operations: %d \t\t", IN_CounterOfOperation);
			printf("\tNumber Of Machines: %d\n", IN_CounterOfMachines);

			ST_AuxAddJobToList = ST_AuxAddJobToList->P_ST_Next;
			IN_CounterOfOperation = 0;
			IN_CounterOfMachines = 0;



		}
		printf("***************************************************************************************\n");

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