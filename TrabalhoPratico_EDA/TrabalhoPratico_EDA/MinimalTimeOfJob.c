#include "Functions.h"


int MinimalTimeOfJob(ST_Jobs* ST_MinimalTimeProces)
{
	ShowAllOperation(ST_MinimalTimeProces, FALSE);

	ST_Jobs* ST_MinimalTimeofJob;
	ST_MinimalTimeofJob = ST_MinimalTimeProces;

	char CH_AuxName[50];
	int IN_MinTimeBestTime = 0;
	int IN_MinTimeJob=0;

	if (ST_MinimalTimeofJob != NULL)
	{
		while (ST_MinimalTimeofJob != NULL)
		{

			if (strcmp(CH_AuxName, ST_MinimalTimeofJob->CH_NameofProcess) == 0)
			{
				if (IN_MinTimeBestTime > ST_MinimalTimeofJob->IN_TimeToProcess)
				{
					IN_MinTimeBestTime = ST_MinimalTimeofJob->IN_TimeToProcess;
				}
				ST_MinimalTimeofJob = ST_MinimalTimeofJob->P_ST_Next;

			}
			else if (strcmp(CH_AuxName, ST_MinimalTimeofJob->CH_NameofProcess) != 0)
			{

				strcpy(CH_AuxName, ST_MinimalTimeofJob->CH_NameofProcess);
				IN_MinTimeJob = IN_MinTimeJob + IN_MinTimeBestTime;
				IN_MinTimeBestTime = ST_MinimalTimeofJob->IN_TimeToProcess;

			}

		}

		IN_MinTimeJob = IN_MinTimeJob + IN_MinTimeBestTime;


	}
	printf("The minimum  time the job will take will be: ");
	printf("%d\n", IN_MinTimeJob);
	printf("*****************************************************************************\n");
	system("PAUSE");

}





