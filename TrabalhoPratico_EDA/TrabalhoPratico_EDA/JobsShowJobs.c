#include "Functions.h"

void ShowJobs(ST_Jobs* ST_ShowJobToList, BOOL B_Pause)
{
	system("CLS");
	ST_Jobs* ST_AuxShowJobList = ST_ShowJobToList;


	if (ST_AuxShowJobList != NULL)
	{

		printf("**********************************JOBS AVAILABLE*******************************************\n");
		printf("NameOfJob:\n");

		while (ST_AuxShowJobList != NULL)
		{
			printf("%s\n", ST_AuxShowJobList->CH_NameofJob);

			//Next Job
			ST_AuxShowJobList = ST_AuxShowJobList->P_ST_Next;
		}
		printf("***********************************************************************************************\n");

	}
	else
	{
		printf("***************************************************************************************\n");
		printf("\t\tNO JOBS FOUNDED\n");
		printf("***************************************************************************************\n");

	}


	if (B_Pause)
	{
		system("PAUSE");
		system("CLS");

	}




}