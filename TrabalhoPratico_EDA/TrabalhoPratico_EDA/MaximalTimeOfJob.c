#include "Functions.h"

void MaximalTimeOfJob(ST_Jobs* ST_MaximalTimeProces)
{
	ShowAllOperation(ST_MaximalTimeProces, FALSE);


	ST_Jobs* ST_MaximalTimeofJob;
	ST_MaximalTimeofJob = ST_MaximalTimeProces;

	char CH_AuxName[50];
	int IN_MaxTimeBestTime = 0;
	int IN_AuxMaxTimeBestTime = 0;
	int IN_MaxTimeJob = 0;

	if (ST_MaximalTimeofJob != NULL)
	{
		while (ST_MaximalTimeofJob != NULL)
		{

			if (strcmp(CH_AuxName, ST_MaximalTimeofJob->CH_NameofProcess) == 0)
			{
				if (IN_MaxTimeBestTime < ST_MaximalTimeofJob->IN_TimeToProcess)
				{
					IN_MaxTimeBestTime = ST_MaximalTimeofJob->IN_TimeToProcess;

				}
				ST_MaximalTimeofJob = ST_MaximalTimeofJob->P_ST_Next;

			}
			else if (strcmp(CH_AuxName, ST_MaximalTimeofJob->CH_NameofProcess) != 0)
			{

				strcpy(CH_AuxName, ST_MaximalTimeofJob->CH_NameofProcess);
				IN_MaxTimeJob = IN_MaxTimeJob + IN_MaxTimeBestTime;
				IN_MaxTimeBestTime = 0;

			}


		}
		IN_MaxTimeJob = IN_MaxTimeJob + IN_MaxTimeBestTime;


	}
	printf("The maximum time the job will take will be: ");
	printf("%d\n", IN_MaxTimeJob);
	printf("*****************************************************************************\n");



	system("PAUSE");
	system("CLS");

}

