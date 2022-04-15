#include "Functions.h"


int WriteDataToFile(ST_Jobs* ST_AddJobsProcess) 
{

	ST_Jobs* ST_WriteJob = (ST_Jobs*)malloc(sizeof(ST_Jobs));

	ST_WriteJob = ST_AddJobsProcess;
	//int testedel;
	//testedel=remove("Jobs.txt");

	////realpath("Jobs.txt");
	//
	//if (testedel == 0) 
	//{
	FILE* FileToWrite = fopen("Jobs.txt", "a");
	//FILE* FileToWrite = fopen("Jobs.txt", "a");
		if (FileToWrite != NULL) 
		{
		/*	while (ST_WriteJob != NULL) 
			{	*/
			fprintf(FileToWrite, "%s;", ST_WriteJob->CH_NameofProcess);
			fprintf(FileToWrite, "%d;", ST_WriteJob->IN_NumberofMachine);
			fprintf(FileToWrite, "%d;", ST_WriteJob->IN_TimeToProcess);
			fprintf(FileToWrite, "\n");
			ST_WriteJob = ST_WriteJob->P_ST_Next;

		/*	}*/
		fclose(FileToWrite);
		}
	//}
	else
	{
		printf("Error! Could not open file\n");
	}

}


ST_Jobs* ReadDataOfFile(ST_Jobs* ST_AddJobsProcess) {

	FILE* FileToRead = fopen("Jobs.txt", "r");

	char CH_TextFromFile[99];
	int IN_Iterator = 0;
	char* P_CH_Token;
	char CH_NameOfJob[99];
	int IN_NumberOfMachine;
	int IN_TimeToProcess;


	if (FileToRead != NULL) {

		while (fgets(CH_TextFromFile, sizeof(CH_TextFromFile), FileToRead)) {

			P_CH_Token = strtok(CH_TextFromFile, ";");
			while (P_CH_Token != NULL) {
				switch (IN_Iterator)
				{
				case 0:

					if (strcmp(P_CH_Token, "\n") == 0) {
						P_CH_Token = strtok(NULL, ";");
						IN_Iterator = 0;
						break;
					}
					strcpy(CH_NameOfJob, P_CH_Token);
					P_CH_Token = strtok(NULL, ";");
					IN_Iterator++;
					break;

				case 1:
					IN_NumberOfMachine = atoi(P_CH_Token);
					P_CH_Token = strtok(NULL, ";");
					IN_Iterator++;
					break;

				case 2:
					IN_TimeToProcess = atoi(P_CH_Token);
					P_CH_Token = strtok(NULL, ";");
					IN_Iterator++;
					break;

				case 3:
					ST_AddJobsProcess = InsertNewOperationToList(ST_AddJobsProcess, CH_NameOfJob, IN_NumberOfMachine, IN_TimeToProcess);
					IN_Iterator = 0;
					break;

				default:
					break;
				}

			}

		}

	}
	return ST_AddJobsProcess;
}



///Part 2
//ST_Jobs* ReadDataOfFile(ST_Jobs* ST_AddJobsProcess) {
//
//	FILE* FileToRead = fopen("Jobs.txt", "r");
//
//	char CH_TextFromFile[999];
//	int IN_Iterator = 0;
//	char* P_CH_Token;
//	char CH_NameOfJob[50];
//	char CH_NameOfOperation[50];
//	int IN_NumberOfMachine = -1;
//	int IN_TimeToProcess = -1;
//
//
//	while (!feof(FileToRead)) {
//
//		fscanf(FileToRead, "%s", &CH_TextFromFile);
//
//		//ST_AddJobsProcess = InsertNewOperationToList(ST_AddJobsProcess, CH_NameOfJob, IN_NumberOfMachine, IN_TimeToProcess);
//
//		P_CH_Token = strtok(CH_TextFromFile, ";");
//		while (P_CH_Token != NULL) {
//			switch (IN_Iterator)
//			{
//			case 0:
//
//				if (strcmp(P_CH_Token, "\n") == 0) {
//					P_CH_Token = strtok(NULL, ";");
//					IN_Iterator = 0;
//					break;
//				}
//				strcpy(CH_NameOfJob, P_CH_Token);
//				P_CH_Token = strtok(NULL, ";");
//				IN_Iterator++;
//				break;
//
//			case 1:
//
//				if (strcmp(P_CH_Token, "\n") == 0) {
//					P_CH_Token = strtok(NULL, ";");
//					IN_Iterator = 0;
//					break;
//				}
//				strcpy(CH_NameOfOperation, P_CH_Token);
//				P_CH_Token = strtok(NULL, ";");
//				IN_Iterator++;
//				break;
//
//			case 2:
//				IN_NumberOfMachine = atoi(P_CH_Token);
//				P_CH_Token = strtok(NULL, ";");
//				IN_Iterator++;
//				break;
//
//			case 3:
//				IN_TimeToProcess = atoi(P_CH_Token);
//				P_CH_Token = strtok(NULL, ";");
//				IN_Iterator = 0;
//
//
//				ST_AddJobsProcess = InsertNewOperationToList(ST_AddJobsProcess, CH_NameOfJob, CH_NameOfOperation, IN_NumberOfMachine, IN_TimeToProcess);
//				break;
//
//			default:
//				break;
//			}
//
//		}
//	}
//
//	fclose(FileToRead);
//	return ST_AddJobsProcess;
//}
