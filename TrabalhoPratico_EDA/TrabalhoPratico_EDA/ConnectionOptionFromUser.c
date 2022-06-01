#include "Functions.h"


//Verify and Open the Choice by User
ST_LoadAllTypes* VerifyConnectionOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList,
										ST_LoadAllTypes *ST_SaveData, int* IN_OptionChoseByUser)
{
	ST_Operation* ST_AuxOperation = ST_AddOperationToList;
	ST_Jobs* ST_AuxJob = ST_AddJobToList;

	switch (*IN_OptionChoseByUser)
	{

	case 1:
		ST_AuxJob = OperationToJob(ST_AddJobToList, ST_AddOperationToList);
		ST_SaveData->P_ST_Jobs = ST_AuxJob;
		ST_SaveData->P_ST_Operation = ST_AddOperationToList;
		ST_SaveData->P_ST_Machines = ST_AddmachineToList;
		break;

	case 2:
		ST_AuxOperation = MachineToOperation(ST_AddOperationToList, ST_AddmachineToList);
		ST_SaveData->P_ST_Jobs = ST_AddJobToList;
		ST_SaveData->P_ST_Operation = ST_AuxOperation;
		ST_SaveData->P_ST_Machines = ST_AddmachineToList;
		break;

	case 3:
		ST_AuxJob=DisassociateOperationInJob(ST_AddJobToList, ST_AddOperationToList);
		ST_SaveData->P_ST_Jobs = ST_AuxJob;
		ST_SaveData->P_ST_Operation = ST_AddOperationToList;
		ST_SaveData->P_ST_Machines = ST_AddmachineToList;
		break;

	case 4:
		ST_AuxOperation = DisassociateMachineInOperation(ST_AddOperationToList, ST_AddmachineToList);
		ST_SaveData->P_ST_Jobs = ST_AddJobToList;
		ST_SaveData->P_ST_Operation = ST_AuxOperation;
		ST_SaveData->P_ST_Machines = ST_AddmachineToList;
		break;

	case 5:
		Menu(ST_AddJobToList, ST_AddOperationToList, ST_AddmachineToList);
		break;

	default:
		system("CLS");
		printf("\t\t\t\t\tInvalid Operation insert a new one!\n\n\n");
		break;
	}

	return(ST_SaveData);

}