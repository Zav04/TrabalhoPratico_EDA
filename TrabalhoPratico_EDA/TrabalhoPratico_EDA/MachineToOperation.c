#include "Functions.h"

ST_Operation* ConnectMachineToOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc, char CH_NameofOperation[50], int NumberOfMachine)
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
	while (ST_Machine != NULL && ST_Machine->IN_NumberofMachine != NumberOfMachine)
	{

		ST_Machine = ST_Machine->P_ST_Next;


	}
	if (ST_Machine != NULL && ST_Machine->IN_NumberofMachine == NumberOfMachine)
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
		printf("PARTIU");
		system("PAUSE");
	}

	return(ST_OperationToAloc);


}
