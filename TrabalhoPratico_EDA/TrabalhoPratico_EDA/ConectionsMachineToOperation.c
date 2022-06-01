#include "Functions.h"

ST_Operation* MachineToOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc)
{

	char CH_NameofOperation[50];
	int IN_NumberOfMachine=0;
	
	ShowOperations(ST_OperationToAloc, FALSE);
	printf("What operation you want add a machine?");
	scanf("%s", CH_NameofOperation);

	printf("\n\n");

	ShowMachines(ST_MachinetoAloc,FALSE);
	printf("What number of Machine you want add to %s?", CH_NameofOperation);
	scanf("%d", &IN_NumberOfMachine);


	ST_OperationToAloc = ConnectMachineToOperation(ST_OperationToAloc, ST_MachinetoAloc, CH_NameofOperation, IN_NumberOfMachine);

	return(ST_OperationToAloc);

}



ST_Operation* ConnectMachineToOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc, char CH_NameofOperation[50], int IN_NumberOfMachine)
 {

	ST_Operation* ST_OperationActualNode = ST_OperationToAloc;
	ST_Operation* ST_OperationBeforeNode;


	ST_Machines* ST_Machine = ST_MachinetoAloc;

	int IN_FoundOperation = -99;
	int IN_FoundMachine = -99;



	//Operation Node

	while (ST_OperationActualNode != NULL && strcmp(ST_OperationActualNode->CH_NameofOperation, CH_NameofOperation) != 0)
	{
		ST_OperationBeforeNode = ST_OperationActualNode;
		ST_OperationActualNode = ST_OperationActualNode->P_ST_Next;


	}
	if (ST_OperationActualNode != NULL && strcmp(ST_OperationActualNode->CH_NameofOperation, CH_NameofOperation) == 0)
	{
		IN_FoundOperation = 1;

	}


	//MAchine Node
	while (ST_Machine != NULL && ST_Machine->IN_NumberofMachine != IN_NumberOfMachine)
	{

		ST_Machine = ST_Machine->P_ST_Next;


	}
	if (ST_Machine != NULL && ST_Machine->IN_NumberofMachine == IN_NumberOfMachine)
	{
		IN_FoundMachine = 1;

	}


	if (IN_FoundOperation == 1 && IN_FoundMachine == 1)
	{

		if (ST_OperationActualNode != NULL && ST_Machine != NULL)
		{
			ST_Machines* ST_AuxNewMachine = (ST_Machines*)malloc(sizeof(ST_Machines));
			ST_AuxNewMachine->IN_NumberofMachine = ST_Machine->IN_NumberofMachine;
			ST_AuxNewMachine->IN_TimeToProcess = ST_Machine->IN_TimeToProcess;
		
			ST_AuxNewMachine->P_ST_Next = ST_OperationActualNode->P_ST_Machines;

			ST_OperationActualNode->P_ST_Machines = ST_AuxNewMachine;



		}

	}
	else
	{
		system("CLS");
		printf("Dont exist the Values Typed");
		system("PAUSE");
	}

	return(ST_OperationToAloc);


}
