#include "Functions.h"


int AverageTimeOfJob(ST_Jobs* ST_AverageTimeProces)
{
	ShowAllOperation(ST_AverageTimeProces, FALSE);

	ST_Jobs* ST_AverageTimeofJob;
	ST_AverageTimeofJob = ST_AverageTimeProces;

	float IN_Counter=0;
	float IN_Total=0;
	float FLT_AverageTimeJob;


	if (ST_AverageTimeofJob != NULL)
	{
		while (ST_AverageTimeofJob != NULL)
		{

			IN_Total = IN_Total + ST_AverageTimeofJob->IN_TimeToProcess;
			IN_Counter++;
			ST_AverageTimeofJob = ST_AverageTimeofJob->P_ST_Next;

		}

		FLT_AverageTimeJob = IN_Total/IN_Counter;

	}
	printf("The average time the job will take will be: ");
	printf("%f\n", FLT_AverageTimeJob);
	printf("*****************************************************************************\n");
	system("PAUSE");

}





