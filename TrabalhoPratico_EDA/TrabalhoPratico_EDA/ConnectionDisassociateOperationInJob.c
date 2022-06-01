#include "Functions.h"


ST_Jobs* DisassociateOperationInJob(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc)
{

	char CH_NameofJob[50];
	char CH_NameofOperation[50];


	ShowJobs(ST_JobToAloc, FALSE);
	printf("What Job you want desassociate a operation?\n");
	printf("R:");
	scanf("%s", CH_NameofJob);

	printf("\n\n");

	ShowOperationInJobs(ST_JobToAloc, CH_NameofJob, FALSE);
	printf("What Operation you want desassociate on %s?\n", CH_NameofJob);
	printf("R:");
	scanf("%s", CH_NameofOperation);


	ST_JobToAloc = DisassociateJobToOperation(ST_JobToAloc, ST_OperationtoAloc, CH_NameofJob, CH_NameofOperation);

	return(ST_JobToAloc);

}

ST_Jobs* DisassociateJobToOperation(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc, char CH_NameofJob[50], char CH_NameOffOperation[50])
{

	ST_Jobs* ST_JobActualNode = ST_JobToAloc;
	ST_Jobs* ST_JobBeforeNode;


	ST_Operation* ST_AuxOperation = ST_OperationtoAloc;

	int IN_FoundJob = -99;
	int IN_FoundOperation = -99;



	//Job Node
	while (ST_JobActualNode != NULL && strcmp(ST_JobActualNode->CH_NameofJob, CH_NameofJob) != 0)
	{
		ST_JobBeforeNode = ST_JobActualNode;
		ST_JobActualNode = ST_JobActualNode->P_ST_Next;


	}
	if (ST_JobActualNode != NULL && strcmp(ST_JobActualNode->CH_NameofJob, CH_NameofJob) == 0)
	{
		IN_FoundJob = 1;

	}


	//Operation  Node
	while (ST_AuxOperation != NULL && strcmp(ST_AuxOperation->CH_NameofOperation, CH_NameOffOperation) != 0)
	{

		ST_AuxOperation = ST_AuxOperation->P_ST_Next;


	}
	if (ST_AuxOperation != NULL && strcmp(ST_AuxOperation->CH_NameofOperation, CH_NameOffOperation) == 0)
	{
		IN_FoundOperation = 1;

	}


	if (IN_FoundJob == 1 && IN_FoundOperation == 1)
	{

		if (ST_JobActualNode != NULL && ST_AuxOperation != NULL)
		{
			while (strcmp(ST_JobActualNode->P_ST_Operation->CH_NameofOperation, CH_NameOffOperation) != 0 )
			{
				ST_JobActualNode->P_ST_Operation = ST_JobActualNode->P_ST_Operation->P_ST_Next;
			}
			free(ST_JobActualNode->P_ST_Operation);
		}

	}
	else
	{
		system("CLS");
		printf("Dont exist the Values Typed");
		system("PAUSE");
	}


	return(ST_JobToAloc);


}
