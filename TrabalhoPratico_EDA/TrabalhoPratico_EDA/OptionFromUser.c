#include "Functions.h"


int GetOptionFromUser(int* IN_OptionFromUser)
{

	scanf("%d", IN_OptionFromUser);

	return(IN_OptionFromUser);

}


//Verify and Open the Choice by User
ST_Jobs* VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess, int* IN_OptionChoseByUser)
{
	ST_Jobs* ST_NewAddProcess = ST_AddJobsProcess;

	switch (*IN_OptionChoseByUser)
	{

	case 1:
		ST_NewAddProcess=MainFromJobs(ST_AddJobsProcess);

	case 2:
		ST_NewAddProcess=WriteOperationMenuInCenter(ST_AddJobsProcess);

	case 3:
		ST_NewAddProcess=WriteMachinesMenuInCenter(ST_AddJobsProcess);

	case 0:
		exit(0);

	default:
		system("CLS");
		printf("\t\t\t\t\tInvalid Operation insert a new one!\n\n\n");
		break;
	}

}