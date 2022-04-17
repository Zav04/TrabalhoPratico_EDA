#include "Functions.h"


int GetOptionFromUser(int* IN_OptionFromUser)
{

	scanf("%d", IN_OptionFromUser);

	return(IN_OptionFromUser);

}


//Verify and Open the Choice by User
ST_Jobs* VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess, int* IN_OptionChoseByUser)
{

	ST_Jobs* ST_NewAddJobsProcess = ST_AddJobsProcess;

	switch (*IN_OptionChoseByUser)
	{
	case 1:
		return(InsertNewOperation(ST_NewAddJobsProcess));


	case 2:
		return(RemoveParticularOperation(ST_NewAddJobsProcess));


	case 3:
		return(ChangeParticularOperation(ST_NewAddJobsProcess));


	case 4:
		ShowAllOperation(ST_NewAddJobsProcess, TRUE);
		return(ST_NewAddJobsProcess);


	case 5:
		MinimalTimeOfJob(ST_NewAddJobsProcess);
		return(ST_NewAddJobsProcess);


	case 6:
		MaximalTimeOfJob(ST_NewAddJobsProcess);
		return(ST_NewAddJobsProcess);


	case 7:
		AverageTimeOfJob(ST_NewAddJobsProcess);
		return(ST_NewAddJobsProcess);


	case 8:
		exit(0);


	default:
		system("CLS");
		printf("\t\t\t\t\tInvalid Operation insert a new one!\n\n\n");
		break;
	}
}