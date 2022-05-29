#include "Functions.h"


//Verify and Open the Choice by User
ST_Jobs* VerifyJobsOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, int* IN_OptionChoseByUser)
{
	ST_Jobs* ST_AuxNewAddProcess = ST_AddJobToList;

	switch (*IN_OptionChoseByUser)
	{

	case 1:
		ST_AuxNewAddProcess = InsertNewJob(ST_AddJobToList, ST_AddOperationToList, ST_AddmachineToList);
		break;

	case 2:
		ST_AuxNewAddProcess = RemoveParticularJob(ST_AddJobToList, ST_AddOperationToList,ST_AddmachineToList);
		break;

	case 3:
		ST_AuxNewAddProcess = ChangeJob(ST_AddJobToList);
		break;

	case 4:
		ShowJob(ST_AddJobToList, TRUE);
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