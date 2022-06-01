#include "Functions.h"

ST_LoadAllTypes *ReadDataOfFile(ST_Jobs* ST_JobLoad, ST_Operation* ST_OperationLoad, ST_Machines* ST_MachineLoad)
{
	ST_LoadAllTypes* ST_AuxLoadFile = (ST_LoadAllTypes*)malloc(sizeof(ST_LoadAllTypes));


	//Read file Function
	FILE* FileToRead = fopen("Jobs.txt", "r");

	//Auxiliar Variables
	char CH_TextFromFile[99];
	char* P_CH_Token;
	char CH_NameOfJob[50];
	char CH_NameOfOperation[50];
	int IN_NumberOfMachine;
	int IN_TimeToProcess;
	BOOL IN_ExistOperationToJob = FALSE;
	BOOL IN_ExistMachineToOperation = FALSE;



	//Verify if file contains elements
	if (FileToRead != NULL)
	{

		//Get a Line of txt
		while (fgets(CH_TextFromFile, sizeof(CH_TextFromFile), FileToRead))
		{

			//Demiliter with strtok function
			//This funtion split a string(a line of txt), when founds the delimiter
			P_CH_Token = strtok(CH_TextFromFile, ";");
			while (P_CH_Token != NULL)
			{

				//Verify its a end of line, if its the end break no the next line (just a protection)
				if (strcmp(P_CH_Token, "\n") == 0)
				{
					P_CH_Token = strtok(NULL, ";");
					break;
				}

				//Get String of Job Name
				strcpy(CH_NameOfJob, P_CH_Token);
				P_CH_Token = strtok(NULL, ";");

				//Create the Job
				ST_JobLoad=InsertNewJobToList(ST_JobLoad, CH_NameOfJob);


				if (strcmp(P_CH_Token, "\n") != 0 && P_CH_Token != NULL)
				{
					//Get String of Operation Name
					strcpy(CH_NameOfOperation, P_CH_Token);
					P_CH_Token = strtok(NULL, ";");
					ST_OperationLoad=InsertNewOperationToList(ST_OperationLoad, CH_NameOfOperation);
					IN_ExistOperationToJob = TRUE;
				}

				if (strcmp(P_CH_Token, "\n") != 0 && P_CH_Token != NULL)
				{
					//Get Number of Machine
					IN_NumberOfMachine = atoi(P_CH_Token);
					P_CH_Token = strtok(NULL, ";");

					IN_TimeToProcess = atoi(P_CH_Token);
					P_CH_Token = strtok(NULL, ";");

					ST_MachineLoad=InsertNewMachineToList(ST_MachineLoad, IN_NumberOfMachine, IN_TimeToProcess);
					IN_ExistMachineToOperation = TRUE;
				}

				if (IN_ExistMachineToOperation == TRUE)
				{
					ConnectMachineToOperation(ST_OperationLoad, ST_MachineLoad, CH_NameOfOperation, IN_NumberOfMachine);
					IN_ExistMachineToOperation = FALSE;
				}

				if (IN_ExistOperationToJob == TRUE)
				{
					ConnectJobToOperation(ST_JobLoad, ST_OperationLoad, CH_NameOfJob, CH_NameOfOperation);
					IN_ExistOperationToJob = FALSE;
				}

			}

		}
		ST_AuxLoadFile->P_ST_Jobs = ST_JobLoad;
		ST_AuxLoadFile->P_ST_Machines = ST_MachineLoad;
		ST_AuxLoadFile->P_ST_Operation= ST_OperationLoad;
		fclose(FileToRead);

		return(ST_AuxLoadFile);


	}
	else
	{
		system("CLS");
		printf("\t\t\t\tATTENTION! WAS NO FILE TO READ DATA! FILE TO SAVE DATA IS CREATED\n\n\n");

		//Create a NewFile to Write Data
		FILE* CreateFile = fopen("Jobs.txt", "w");
		fclose(CreateFile);



	}

}
