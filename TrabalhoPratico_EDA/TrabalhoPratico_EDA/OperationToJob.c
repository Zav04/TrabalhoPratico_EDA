#include "Functions.h"


//ST_Jobs* ConnectMachineToOperation(ST_Operation* ST_OperationToAloc, char* CH_NameOfOperation, int NumberOfMachine)
//{
//
//	ST_Operation* ST_OperationActualNode = ST_OperationToAloc;
//	ST_Operation* ST_OperationBeforeNode = ST_OperationToAloc;
//
//
//	while (ST_OperationActualNode != NULL && strcmp(ST_OperationActualNode->CH_NameofOperation, CH_NameOfOperation))
//	{
//		ST_OperationBeforeNode = ST_OperationActualNode;
//		ST_OperationActualNode = ST_OperationActualNode->P_ST_Next;
//
//
//	}
//
//	if (ST_OperationActualNode != NULL)
//	{
//		ST_Machines* ST_AuxNewMachine = (ST_Machines*)malloc(sizeof(ST_Machines));
//		ST_AuxNewMachine->IN_NumberofMachine = NumberOfMachine;
//		ST_AuxNewMachine->IN_TimeToProcess = NumberOfMachine;
//		ST_AuxNewMachine->P_ST_Next = ST_OperationActualNode->P_ST_Machines;
//
//
//		ST_OperationActualNode->P_ST_Machines = ST_AuxNewMachine;
//
//
//	}
//
//	return(ST_OperationToAloc);
//
//
//}
