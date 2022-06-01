#include "Functions.h"

int VerifySameJob(ST_Jobs* ST_AddJobToList, char CH_NameofPJob[50])
{
	ST_Jobs* ST_AuxAddJobToList = ST_AddJobToList;

	while (ST_AuxAddJobToList != NULL)
	{
		if (strcmp(ST_AuxAddJobToList->CH_NameofJob, CH_NameofPJob)==0)
		{
			return -1;

		}
		else
		{
			ST_AuxAddJobToList = ST_AuxAddJobToList->P_ST_Next;
		}

	}
	return 0;


}


ST_Jobs* InsertNewJob(ST_Jobs* ST_AddJobToList)
{

	int IN_Machines = -1;
	char CH_NameOfJob[99];


	system("CLS");
	printf("What's the name of the new Job?\n");
	printf("R:");
	scanf("%s", &CH_NameOfJob);

	if (VerifySameJob(ST_AddJobToList, CH_NameOfJob) == -1)
	{

		system("CLS");
		printf("Duplicated Job\nProcessAborted");
		system("PAUSE");
		return ST_AddJobToList;

	}


	ST_AddJobToList = InsertNewJobToList(ST_AddJobToList, CH_NameOfJob);

	system("CLS");
	printf("\nJob are Saved\n");
	system("PAUSE");
	system("CLS");
	return(ST_AddJobToList);

}


ST_Jobs* InsertNewJobToList(ST_Jobs* ST_AddJobToList, char CH_NameofPJob[50])
{
	ST_Jobs* ST_NewListJob = (ST_Jobs*)malloc(sizeof(ST_Jobs));
	ST_Operation* ST_AuxAddOperationNode = NULL;
	ST_Jobs* ST_AuxNewListJob = ST_AddJobToList;
	BOOL B_Created=FALSE;

	while (ST_AuxNewListJob!=NULL)
	{
		if (strcmp(ST_AuxNewListJob->CH_NameofJob, CH_NameofPJob) == 0)
		{
			B_Created = TRUE;
			break;
		}
		ST_AuxNewListJob = ST_AuxNewListJob->P_ST_Next;

	}

	if (ST_NewListJob != NULL && B_Created==FALSE)
	{
		//Job List
		strcpy(ST_NewListJob->CH_NameofJob, CH_NameofPJob);
		//Job Adress to Next List
		ST_NewListJob->P_ST_Operation = ST_AuxAddOperationNode;
		ST_NewListJob->P_ST_Next = ST_AddJobToList;


		return(ST_NewListJob);
	}
	else
	{
		return(ST_AddJobToList);
	}
}
