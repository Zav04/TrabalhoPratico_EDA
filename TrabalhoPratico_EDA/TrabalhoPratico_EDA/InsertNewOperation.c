#include "Functions.h"

ST_Jobs* InsertNewOperation(ST_Jobs* ST_AddJobsProcess) 
{

	int IN_Machines = -1;
	char CH_NameOfJob[99];
	char CH_NameOfOperation[99];
	int IN_NumberofMachine;
	int IN_TimeToProcess;

	//Part 2 of project
	/*printf("What's the name of the Job?\n");
	printf("R:");
	scanf("%s", &CH_NameOfJob);*/


	printf("What's the name of the Operation?\n");
	printf("R:");
	scanf("%s", &CH_NameOfOperation);


	printf("\nHow many machines you want to Add?\n");
	printf("R:");
	scanf("%d", &IN_Machines);

	if (IN_Machines > 0)
	{
		for (int i = 1; i <= IN_Machines; i++)
		{
			printf("\nNumber of %d Machine :\n", i);
			printf("R:");
			scanf("%d", &IN_NumberofMachine);

			printf("\nTime to process the job of %d Machine:\n", IN_NumberofMachine);
			printf("R:");
			scanf("%d", &IN_TimeToProcess);

			ST_AddJobsProcess = InsertNewOperationToList(ST_AddJobsProcess, CH_NameOfOperation, IN_NumberofMachine, IN_TimeToProcess);

			WriteDataToFile(ST_AddJobsProcess);
			
		}

		system("CLS");
		printf("\nOperation are Saved\n");
		system("PAUSE");
		return(ST_AddJobsProcess);

	}
	else
	{

		printf("Number of machines not Correct Insert the Operation again\n");
		system("PAUSE");

		return(ST_AddJobsProcess);

	}

}



ST_Jobs* InsertNewOperationToList(ST_Jobs* ST_AddJobsProcess, char CH_NameofProcess[99], int IN_MachineNumber, int IN_TimeofProcess) 
{

	ST_Jobs* ST_NewListJob = (ST_Jobs*)malloc(sizeof(ST_Jobs));

	if (ST_NewListJob != NULL) 
	{

		strcpy(ST_NewListJob->CH_NameofJob, "JOB:EDA_PART1");

		strcpy(ST_NewListJob->CH_NameofProcess, CH_NameofProcess);

		ST_NewListJob->IN_NumberofMachine = IN_MachineNumber;

		ST_NewListJob->IN_TimeToProcess = IN_TimeofProcess;

		ST_NewListJob->P_ST_Next = ST_AddJobsProcess;

		return(ST_NewListJob);
	}
	else {

		return(ST_AddJobsProcess);
	}
}




//Part 2
//Missing insert the 3 struct Machine struct, before the implementation just had 2 structs->Job->Operation

//ST_Jobs* InsertNewOperationToList(ST_Jobs* ST_AddJobsProcess, char CH_NameofJob[50], char CH_NameofProcess[50], int IN_MachineNumber, int IN_TimeofProcess) 
// {
//
//	ST_Jobs* ST_AuxAddJobsProcess = (ST_Jobs*)malloc(sizeof(ST_Jobs));
//
//	ST_AuxAddJobsProcess = ST_AddJobsProcess;
//
//	//Create lists to connect
//	ST_Jobs* ST_NewListJob = (ST_Jobs*)malloc(sizeof(ST_Jobs));
//	ST_Operation* ST_NewListOperation = (ST_Operation*)malloc(sizeof(ST_Operation));
//
//
//
//	if (ST_AuxAddJobsProcess != NULL) {
//		while (ST_AuxAddJobsProcess != NULL) {
//
//			if (strcmp(CH_NameofJob, ST_AuxAddJobsProcess->CH_NameofJob) == 0) {
//
//
//				//Verify if list are not NULL
//				if (ST_NewListOperation != NULL) {
//
//					//Send the Data to List
//					strcpy(ST_NewListOperation->CH_NameofOperation, CH_NameofProcess);
//
//					ST_NewListOperation->IN_NumberofMachine = IN_MachineNumber;
//
//					ST_NewListOperation->IN_TimeToProcess = IN_TimeofProcess;
//
//					ST_NewListOperation->P_ST_Next = ST_AddJobsProcess->P_ST_Operation;
//
//					ST_NewListJob = ST_AddJobsProcess;
//
//					ST_NewListJob->P_ST_Operation = ST_NewListOperation;
//
//					return(ST_NewListJob);
//				}
//			}
//			ST_AuxAddJobsProcess = ST_AuxAddJobsProcess->P_ST_Next;
//		}
//
//
//	}
//
//
//	if (ST_NewListJob != NULL) {
//
//
//		ST_NewListJob->P_ST_Operation = ST_NewListOperation;
//
//		strcpy(ST_NewListJob->CH_NameofJob, CH_NameofJob);
//
//		strcpy(ST_NewListJob->P_ST_Operation->CH_NameofOperation, CH_NameofProcess);
//
//		ST_NewListJob->P_ST_Operation->IN_NumberofMachine = IN_MachineNumber;
//
//		ST_NewListJob->P_ST_Operation->IN_TimeToProcess = IN_TimeofProcess;
//
//		ST_NewListJob->P_ST_Operation->P_ST_Next = NULL;
//
//		ST_NewListJob->P_ST_Next = ST_AddJobsProcess;
//
//		return(ST_NewListJob);
//	}
//	else {
//
//		return(ST_AddJobsProcess);
//	}
//}