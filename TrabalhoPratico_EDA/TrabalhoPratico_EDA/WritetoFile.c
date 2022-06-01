#include "Functions.h"

void WriteDataToFile(ST_Jobs* ST_WriteJobsProcess)
{
	remove("Jobs.txt");

	ST_Jobs* ST_WriteJobProcess = ST_WriteJobsProcess;


	FILE* FileToWrite = fopen("Jobs.txt", "w");


	while (ST_WriteJobProcess != NULL)
	{


		if (ST_WriteJobProcess->P_ST_Operation != NULL && ST_WriteJobProcess->P_ST_Operation->P_ST_Machines != NULL)
		{
			fprintf(FileToWrite, "%s;", ST_WriteJobProcess->CH_NameofJob);
			fprintf(FileToWrite, "%s;", ST_WriteJobProcess->P_ST_Operation->CH_NameofOperation);
		}
		if (ST_WriteJobProcess->P_ST_Operation->P_ST_Machines != NULL)
		{
			fprintf(FileToWrite, "%d;", ST_WriteJobProcess->P_ST_Operation->P_ST_Machines->IN_NumberofMachine);
			fprintf(FileToWrite, "%d;", ST_WriteJobProcess->P_ST_Operation->P_ST_Machines->IN_TimeToProcess);
		}


		if (ST_WriteJobProcess->P_ST_Operation->P_ST_Machines != NULL){

			ST_WriteJobProcess->P_ST_Operation->P_ST_Machines = ST_WriteJobProcess->P_ST_Operation->P_ST_Machines->P_ST_Next;
			fprintf(FileToWrite, "\n");

		}
		else
		{
			ST_WriteJobProcess->P_ST_Operation= ST_WriteJobProcess->P_ST_Operation->P_ST_Next;
		}


		if (ST_WriteJobProcess->P_ST_Operation == NULL)
		{
			ST_WriteJobProcess = ST_WriteJobProcess->P_ST_Next;
		}




	}

	system("CLS");
	printf("File Saved");
	system("PAUSE");

	fclose(FileToWrite);

}