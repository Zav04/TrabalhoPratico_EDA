#include "Functions.h"

ST_Jobs* ConnectJobToOperation(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc, char CH_NameofJob[50], char CH_NameOffOperation[50])
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
		IN_FoundOperation = 1;

	}


	//Operation  Node
	while (ST_AuxOperation != NULL && strcmp(ST_AuxOperation->CH_NameofOperation,CH_NameOffOperation) != 0)
	{

		ST_AuxOperation = ST_AuxOperation->P_ST_Next;


	}
	if (ST_AuxOperation != NULL && strcmp(ST_AuxOperation->CH_NameofOperation, CH_NameOffOperation) == 0)
	{
		IN_FoundOperation = 1;

	}


	if (IN_FoundOperation == 1 && IN_FoundOperation == 1)
	{

		if (ST_JobActualNode != NULL && ST_AuxOperation != NULL)
		{
			//ST_Operation* ST_AuxNewOperation = (ST_Operation*)malloc(sizeof(ST_Operation));
			ST_JobActualNode->P_ST_Operation = ST_AuxOperation;
		}

	}
	else
	{
		system("CLS");
		printf("PARTIU");
		system("PAUSE");
	}

	return(ST_JobToAloc);


}
