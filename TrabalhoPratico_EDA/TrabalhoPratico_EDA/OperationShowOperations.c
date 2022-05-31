#include "Functions.h"

void ShowOperations(ST_Operation* ST_ShowJobToList, BOOL B_Pause)
{
	system("CLS");
	ST_Operation* ST_AuxShowJobList = ST_ShowJobToList;


	if (ST_AuxShowJobList != NULL)
	{

		printf("**********************************OPERATIONS AVAILABLE*******************************************\n");
		printf("NameOfOperation:\n");

		while (ST_AuxShowJobList != NULL)
		{
			printf("%s\n", ST_AuxShowJobList->CH_NameofOperation);

			//Next Job
			ST_AuxShowJobList = ST_AuxShowJobList->P_ST_Next;
		}
		printf("***********************************************************************************************\n");

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