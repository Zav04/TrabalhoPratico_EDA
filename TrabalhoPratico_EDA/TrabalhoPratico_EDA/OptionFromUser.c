#include "Functions.h"


int GetOptionFromUser(int* IN_OptionFromUser)
{

	scanf("%d", IN_OptionFromUser);

	return(IN_OptionFromUser);

}


//Verify and Open the Choice by User
ST_Jobs* VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess , ST_Operation* ST_AddOperationProcess , ST_Machines* ST_AddMachineProcess, int* IN_OptionChoseByUser)
{

	ST_Jobs* ST_AuxNewAddProcess = ST_AddJobsProcess;

	switch (*IN_OptionChoseByUser)
	{

	case 1:
		ST_AuxNewAddProcess = MainFromJobs(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess);
		break;

	case 2:
		ST_AuxNewAddProcess = MainFromOperation(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess);

	case 3:
		//ST_AuxNewAddProcess = MainFromJobs(ST_AddJobsProcess);

	case 4:
		ShowAllProgram(ST_AddJobsProcess, TRUE);
		break;

	case 0:
		exit(0);

	default:
		system("CLS");
		printf("\t\t\t\t\tInvalid Operation insert a new one!\n\n\n");
		system("Pause");
		IN_OptionChoseByUser = -1;
		break;
	}

	return(ST_AuxNewAddProcess);

}