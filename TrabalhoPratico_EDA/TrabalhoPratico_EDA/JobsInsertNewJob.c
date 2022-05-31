#include "Functions.h"

ST_Jobs* InsertNewJob(ST_Jobs* ST_AddJobToList)
{

	int IN_Machines = -1;
	char CH_NameOfJob[99];


	system("CLS");
	printf("What's the name of the new Job?\n");
	printf("R:");
	scanf("%s", &CH_NameOfJob);


	ST_AddJobToList = InsertNewJobToList(ST_AddJobToList, CH_NameOfJob);

	//WriteDataToFile(ST_AddJobsProcess);

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


	if (ST_NewListJob != NULL)
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
