#include "Functions.h"


void WriteDataToFile(ST_Jobs* ST_WriteJobsProcess)
{

	remove("Jobs.txt");

	ST_Jobs* ST_WriteJobProcess = ST_WriteJobsProcess;


	FILE* FileToWrite = fopen("Jobs.txt", "a");


	while (ST_WriteJobProcess != NULL)
	{
		fprintf(FileToWrite, "%s;", ST_WriteJobProcess->CH_NameofProcess);
		fprintf(FileToWrite, "%d;", ST_WriteJobProcess->IN_NumberofMachine);
		fprintf(FileToWrite, "%d;", ST_WriteJobProcess->IN_TimeToProcess);
		fprintf(FileToWrite, "\n");
		ST_WriteJobProcess = ST_WriteJobProcess->P_ST_Next;
	}

	fclose(FileToWrite);

}


ST_Jobs* ReadDataOfFile(ST_Jobs* ST_AddJobsProcess) {

	//Read file Function
	FILE* FileToRead = fopen("Jobs.txt", "r");

	//Auxiliar Variables
	char CH_TextFromFile[99];
	char* P_CH_Token;
	char CH_NameOfOperation[50];
	int IN_NumberOfMachine;
	int IN_TimeToProcess;


	//Verify if file contains elements
	if (FileToRead != NULL) {

		//Get a Line of txt
		while (fgets(CH_TextFromFile, sizeof(CH_TextFromFile), FileToRead)) {

			//Demiliter with strtok function
			//This funtion split a string(a line of txt), when founds the delimiter
			P_CH_Token = strtok(CH_TextFromFile, ";");
			while (P_CH_Token != NULL) {

					//Verify its a end of line, if its the end break no the next line (just a protection)
					if (strcmp(P_CH_Token, "\n") == 0) {
						P_CH_Token = strtok(NULL, ";");
						break;
					}
					//Get String of Job Name
					strcpy(CH_NameOfOperation, P_CH_Token);
					P_CH_Token = strtok(NULL, ";");

					//Get Number of Machine
					IN_NumberOfMachine = atoi(P_CH_Token);
					P_CH_Token = strtok(NULL, ";");

					//Get Time to process of machine
					IN_TimeToProcess = atoi(P_CH_Token);
					P_CH_Token = strtok(NULL, ";");

					//Insert a new operation to List
					ST_AddJobsProcess = InsertNewOperationToList(ST_AddJobsProcess, CH_NameOfOperation, IN_NumberOfMachine, IN_TimeToProcess);

			}

		}

	}
	fclose(FileToRead);
	//Return the List 
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
