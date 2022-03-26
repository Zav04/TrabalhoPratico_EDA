#include "Functions.h"

ST_Jobs ST_AddProcess = NULL;


int InsertNewOperation() {

	int IN_Machines = -1;
	char CH_NameOfOperation[99];
	int IN_NumberofMachine;
	int IN_TimeToProcess;



	printf("Whats the name of new operation?\n");
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

			ST_AddProcess = InsertNewOperationToList(ST_AddProcess, CH_NameOfOperation, IN_NumberofMachine, IN_TimeToProcess);

		}


	}
	else {

		system("CLS");
		printf("You insert a wrong number, please insert a new one\n");
		InsertNewOperation();

	}


}


ST_Jobs InsertNewOperationToList(ST_Jobs ST_AddDataToStruct, char IN_NameofProcess[99], int IN_MachineNumber, int IN_TimeofProcess) {

	int teste = sizeof(struct Jobs);
	ST_Jobs ST_NewListJob = (ST_Jobs)malloc(sizeof(struct Jobs));
	strcpy(ST_NewListJob->IN_NameofProcess, IN_NameofProcess);
	ST_NewListJob->IN_NumberofMachine= IN_MachineNumber;
	ST_NewListJob->IN_TimeToProcess= IN_TimeofProcess;

	ST_NewListJob->P_ST_Next = ST_AddDataToStruct;
	ST_NewListJob->P_ST_Before = NULL;

	if (ST_AddDataToStruct != NULL)
	{

		ST_AddDataToStruct->P_ST_Before = ST_NewListJob;

	}

	return(ST_NewListJob);
}



int ShowAllOperation() {

	system("CLS");
	setlocale(LC_ALL, "Portuguese");
	while (ST_AddProcess != NULL)
	{
		printf("___________________________________\n");
		printf("Nome: %s\n", ST_AddProcess->IN_NameofProcess);
		printf("Numero: %d\n", ST_AddProcess->IN_NumberofMachine);
		printf("Entrada: %d\n",ST_AddProcess->IN_TimeToProcess);
		ST_AddProcess = ST_AddProcess->P_ST_Next;
	}

}