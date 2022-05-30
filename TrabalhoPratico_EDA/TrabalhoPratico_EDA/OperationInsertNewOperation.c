#include "Functions.h"

ST_Jobs* InsertNewOperation(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList)
{
	ST_Jobs* ST_AuxAddJobToList = ST_AddJobToList;
	int IN_Machines = -1;
	int IN_NameFound = 0;
	char CH_NameOfJob[99];
	char CH_NameOfOperation[99];
	int IN_NumberofMachine;
	int IN_TimeToProcess;

	system("CLS");
	ShowAllProgram(ST_AddJobToList, FALSE);

	printf("What's the name of Job you want add a new Operation?\n");
	printf("R:");
	scanf("%s", CH_NameOfJob);

	if (ST_AuxAddJobToList != NULL)
	{
		while (ST_AuxAddJobToList != NULL)
		{
			if (strcmp(ST_AuxAddJobToList->CH_NameofJob, CH_NameOfJob) == 0)
			{
				IN_NameFound = 1;
				break;
			}
			ST_AuxAddJobToList = ST_AuxAddJobToList->P_ST_Next;
		}
	}
	if (IN_NameFound == 1)
	{

		printf("What's the name of the new Operation?\n");
		printf("R:");
		scanf("%s", &CH_NameOfOperation);

		printf("\nNumber of Machine :\n");
		printf("R:");
		scanf("%d", &IN_NumberofMachine);

		printf("\nTime to process the job of Machine:\n");
		printf("R:");
		scanf("%d", &IN_TimeToProcess);

		ST_AddJobToList = InsertNewOperationToList(ST_AddJobToList, ST_AddOperationToList, ST_AddmachineToList, CH_NameOfJob, CH_NameOfOperation, IN_NumberofMachine, IN_TimeToProcess);

		//WriteDataToFile(ST_AddJobsProcess);

		system("CLS");
		printf("\nJob are Saved\n");
		system("PAUSE");
		system("CLS");
		return(ST_AddJobToList);


	}
	else
	{
		system("CLS");
		printf("\t\t\t\tNot Founded The name of that Job, Add Operation Aborted\n");
		system("PAUSE");
		system("CLS");
		return(ST_AddJobToList);

	}

}


ST_Operation* InsertNewOperationToList(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, char CH_NameofPJob[99],
								  char CH_NameofOperation[99], int IN_MachineNumber, int IN_TimeofProcess)

{

	ST_Jobs* ST_NewListJob = ST_AddJobToList;
	ST_Operation* ST_NewListOperation = (ST_Operation*)malloc(sizeof(ST_Operation));
	ST_Machines* ST_NewListMachines = (ST_Machines*)malloc(sizeof(ST_Machines));


	if (ST_NewListJob != NULL)
	{
		while (ST_NewListJob != NULL)
		{

			if (strcmp(ST_NewListJob->CH_NameofJob, CH_NameofPJob) == 0)
			{
				//Operation List
				strcpy(ST_NewListOperation->CH_NameofOperation, CH_NameofOperation);
				ST_NewListOperation->P_ST_Next = ST_NewListJob->P_ST_Operation;


				//Machine List
				ST_NewListMachines->IN_NumberofMachine = IN_MachineNumber;
				ST_NewListMachines->IN_TimeToProcess = IN_TimeofProcess;
				//Machine Adress to Next List
				ST_NewListMachines->P_ST_Next = NULL;


				//Connect List
				ST_NewListOperation->P_ST_Machines = ST_NewListMachines;

				return(ST_NewListOperation);

			}

			ST_NewListJob = ST_NewListJob->P_ST_Next;

		}
	}
	else
	{
		return(ST_AddJobToList);
	}
}

// Função para Criar um Novo Registo de uma Nova Operação
ST_Operation* inserirOperacao(ST_Jobs* job ,ST_Operation* operacao, char CH_NameofPJob, char nomedoOperation[], int nrmaquina, int tempo)
{
	ST_Operation* nova = (ST_Operation*)malloc(sizeof(ST_Operation));
	ST_Machines* novasmachines = (ST_Machines*)malloc(sizeof(ST_Machines));


	while (job != NULL)
	{

		if (strcmp(job->CH_NameofJob, CH_NameofPJob) == 0)
		{

			if (nova != NULL)
			{
				ST_Operation* opAux = operacao;
				ST_Operation* opAux2 = operacao;
				while (opAux != NULL)
				{
					opAux2 = opAux;
					opAux = opAux->P_ST_Next;
				}
				strcpy(nova->CH_NameofOperation, nomedoOperation);
				novasmachines->IN_NumberofMachine = nrmaquina;
				novasmachines->IN_TimeToProcess = tempo;
				novasmachines->P_ST_Next = NULL;
				nova->P_ST_Next = NULL;

				if (opAux2 != NULL)
				{
					opAux2->P_ST_Next = nova;
					return (operacao);
				}
				else
				{
					return (nova);
				}
			}
			else
			{
				return(operacao);
			}
		}

		job->P_ST_Next = job;
	}
}
