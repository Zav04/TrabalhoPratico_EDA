#include "Functions.h"

int ShowAllOperation(ST_Jobs* ST_ShowReadProcess, BOOL B_Pause) 
{

	system("CLS");

	if (ST_ShowReadProcess != NULL) {

		printf("**********************************JOBS***************************************\n");
		printf("%s\n", ST_ShowReadProcess->CH_NameofJob);

		while (ST_ShowReadProcess != NULL)
		{
			printf("\tOperation: %s\n", ST_ShowReadProcess->CH_NameofProcess);
			printf("\t\tNumber Of Machine: %d \t\t", ST_ShowReadProcess->IN_NumberofMachine);
			printf("Time to Process: %d\n", ST_ShowReadProcess->IN_TimeToProcess);

			ST_ShowReadProcess = ST_ShowReadProcess->P_ST_Next;

		}
		printf("*****************************************************************************\n");

	}
	else
	{
		printf("*****************************************************************************\n");
		printf("NO JOBS FOUNDED\n");
		printf("*****************************************************************************\n");

	}


	if (B_Pause) 
	{
		system("PAUSE");

	}



}