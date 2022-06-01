#include "Functions.h"


int GetOptionFromUser(int* IN_OptionFromUser)
{

	scanf("%d", IN_OptionFromUser);

	return(IN_OptionFromUser);

}


//Verify and Open the Choice by User
void VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess , ST_Operation* ST_AddOperationProcess , ST_Machines* ST_AddMachineProcess, int* IN_OptionChoseByUser)
{
	ST_LoadAllTypes* ST_AuxMemory = (ST_LoadAllTypes*)malloc(sizeof(ST_LoadAllTypes));

	switch (*IN_OptionChoseByUser)
	{

	case 1:
		ST_AddJobsProcess = MainFromJobs(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess);
		break;

	case 2:
		ST_AddOperationProcess = MainFromOperation(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess);
		break;

	case 3:
		ST_AddMachineProcess = MainFromMachines(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess);
		break;

	case 4:
		ShowAllProgram(ST_AddJobsProcess, TRUE);
		break;

	case 5:
		ST_AuxMemory=MainFromConections(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess, ST_AuxMemory);
		ST_AddJobsProcess = ST_AuxMemory->P_ST_Jobs;
		ST_AddOperationProcess = ST_AuxMemory->P_ST_Operation;
		ST_AddMachineProcess = ST_AuxMemory->P_ST_Machines;
		free(ST_AuxMemory);
		break;

	case 6:
		WriteDataToFile(ST_AddJobsProcess);;
		break;

	case 7:
		MaximalTimeOfJob(ST_AddJobsProcess);;
		break;
	case 8:

		MinimalTimeOfJob(ST_AddJobsProcess);;
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

}