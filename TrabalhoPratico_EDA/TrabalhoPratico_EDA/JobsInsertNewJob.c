#include "Functions.h"

ST_Jobs* InsertNewJob(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList)
{

	int IN_Machines = -1;
	char CH_NameOfJob[99];
	char CH_NameOfOperation[99];
	int IN_NumberofMachine;
	int IN_TimeToProcess;

	system("CLS");
	printf("What's the name of the new Job?\n");
	printf("R:");
	scanf("%s", &CH_NameOfJob);

	printf("What's the name of the Operation?\n");
	printf("R:");
	scanf("%s", &CH_NameOfOperation);

	printf("\nNumber of Machine :\n");
	printf("R:");
	scanf("%d", &IN_NumberofMachine);

	printf("\nTime to process the job of Machine:\n");
	printf("R:");
	scanf("%d", &IN_TimeToProcess);

	ST_Jobs* job, ST_Operation* operacao, char CH_NameofPJob, char nomedoOperation[], int nrmaquina, int tempo);

	ST_AddJobToList = InsertNewJobToList(ST_AddJobToList, ST_AddOperationToList, ST_AddmachineToList, CH_NameOfJob, CH_NameOfOperation, IN_NumberofMachine, IN_TimeToProcess);

	//WriteDataToFile(ST_AddJobsProcess);

	system("CLS");
	printf("\nJob are Saved\n");
	system("PAUSE");
	system("CLS");
	return(ST_AddJobToList);

}


ST_Jobs* InsertNewJobToList(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, char CH_NameofPJob[99],
							char CH_NameofOperation[99], int IN_MachineNumber, int IN_TimeofProcess)

{

	ST_Jobs* ST_NewListJob = (ST_Jobs*)malloc(sizeof(ST_Jobs));
	ST_Operation* ST_NewListOperation = (ST_Operation*)malloc(sizeof(ST_Operation));
	ST_Machines* ST_NewListMachines = (ST_Machines*)malloc(sizeof(ST_Machines));


	if (ST_NewListJob != NULL)
	{
		//Job List
		strcpy(ST_NewListJob->CH_NameofJob, CH_NameofPJob);
		//Job Adress to Next List
		ST_NewListJob->P_ST_Next = ST_AddJobToList;


		//Operation List
		strcpy(ST_NewListOperation->CH_NameofOperation, CH_NameofOperation);
		//Operation Adress to Next List
		ST_NewListOperation->P_ST_Next = ST_AddOperationToList;


		//Machine List
		ST_NewListMachines->IN_NumberofMachine = IN_MachineNumber;
		ST_NewListMachines->IN_TimeToProcess = IN_TimeofProcess;
		//Machine Adress to Next List
		ST_NewListMachines->P_ST_Next = ST_AddmachineToList;


		//Connect List
		ST_NewListOperation->P_ST_Machines = ST_NewListMachines;
		ST_NewListJob->P_ST_Operation = ST_NewListOperation;

		return(ST_NewListJob);
	}
	else
	{
		return(ST_AddJobToList);
	}
}
