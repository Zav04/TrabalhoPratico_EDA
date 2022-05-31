#include "Functions.h"


//Verify and Open the Choice by User
ST_Operation* VerifyOperationOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, int* IN_OptionChoseByUser)
{
	ST_Operation* ST_AuxNewAddProcess = ST_AddOperationToList;

	switch (*IN_OptionChoseByUser)
	{

	case 1:
		ST_AuxNewAddProcess = InsertNewOperation(ST_AddOperationToList);
		break;

	case 2:
		ST_AuxNewAddProcess = RemoveParticularOperation(ST_AddOperationToList);
		break;

	case 3:
		ST_AuxNewAddProcess = ChangeOperation(ST_AddOperationToList);
		break;

	case 4:
		ShowOperations(ST_AddOperationToList, TRUE);
		break;

	case 5:
		Menu(ST_AddJobToList, ST_AddOperationToList, ST_AddmachineToList);
		break;

	default:
		system("CLS");
		printf("\t\t\t\t\tInvalid Operation insert a new one!\n\n\n");
		break;
	}

	return(ST_AuxNewAddProcess);

}