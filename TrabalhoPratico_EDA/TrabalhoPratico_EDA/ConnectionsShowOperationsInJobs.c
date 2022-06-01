#include "Functions.h"

void ShowOperationInJobs(ST_Jobs* ST_ShowJobToList, char CH_NameofJob[50],  BOOL B_Pause)
{
	system("CLS");
	ST_Jobs* ST_AuxShowJobList = ST_ShowJobToList;
	ST_Operation* ST_AuxShowOperationList = ST_ShowJobToList->P_ST_Operation;



	if (ST_AuxShowJobList != NULL)
	{

		while (ST_AuxShowJobList != NULL)
		{
		if (strcmp(ST_AuxShowJobList->CH_NameofJob, CH_NameofJob)==0)
		{
			ST_AuxShowOperationList = ST_AuxShowJobList->P_ST_Operation;
		printf("**********************************OPERATION AVAILABLE*******************************************\n");

		while (ST_AuxShowOperationList != NULL)
		{
			printf("%s\n", ST_AuxShowOperationList->CH_NameofOperation);

			//Next Job
			ST_AuxShowOperationList = ST_AuxShowOperationList->P_ST_Next;
		}
		printf("***********************************************************************************************\n");
		}

		ST_AuxShowJobList = ST_AuxShowJobList->P_ST_Next;

		}

	}
	else
	{
		printf("***************************************************************************************\n");
		printf("\t\tNO OPERATIONS FOUNDED\n");
		printf("***************************************************************************************\n");

	}


	if (B_Pause)
	{
		system("PAUSE");
		system("CLS");

	}




}