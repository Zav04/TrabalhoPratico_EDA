#include "Functions.h"

int main() {
	//ST_Jobs* ST_AddProcess = NULL;
	//Set language in Portuguese orthography
	setlocale(LC_ALL, "portuguese");

	//Call function Menu, to start draw the menu
	Menu();

	return 0;

}


//Function Menu to start draw the functions
void Menu() {

	//Create the starting struct
	ST_Jobs ST_AddJobsProcess = NULL;

	//Load Data from File
	ST_AddJobsProcess = ReadDataOfFile(ST_AddJobsProcess);


	do
	{
		int IN_OptionFromUser = -1;
		WriteCenterTextMenu();
		GetOptionFromUser(&IN_OptionFromUser);
		ST_AddJobsProcess=VerifyOptionFromUser(ST_AddJobsProcess,&IN_OptionFromUser);

	} while (true);


}

//Function to Draw the Menu in CMD and Center in text in the middle of CMD
void WriteCenterTextMenu() {

	//Get Size in X of CMD
	const int CI_GetXOfCMD = GetColumnWidth();
	//Iterator Value to increment to Write a Text in CMD
	int IN_Iterator = 1;
	//Variable to calculate how many spaces need to fill in to get the center
	int IN_Fill_Width;
	//Variable to get the lengh of String to calculate center of CMD
	int IN_StringLengh = 0;

	//Strings of Menu
	system("CLS");
	char* STR_ConstStringToDraw;
	const char* STR_Menu = "***********************OPERATION MENU***********************";
	const char* STR_Option1 = "1-Insertion of a New Operation";
	const char* STR_Option2 = "2-Removal of a particular operation";
	const char* STR_Option3 = "3-Show all operations";
	const char* STR_Option4 = "4-Minimum  time to complete a job";
	const char* STR_Option5 = "5-Maximum time to complete a job";
	const char* STR_Option6 = "6-Average time to complete a job";
	const char* STR_Option7 = "7-Exit";
	const char* STR_Operation = "OPERATION: ";
	const char* STR_ErrorHandle = "SOMETHING GOES WRONG WITH THE ITERATOR";


	do
	{
		switch (IN_Iterator)
		{
		case 1:
			STR_ConstStringToDraw = STR_Menu;
			IN_StringLengh = strlen(STR_Menu);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 2:
			STR_ConstStringToDraw = STR_Option1;
			IN_StringLengh = strlen(STR_Option1);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 3:
			STR_ConstStringToDraw = STR_Option2;
			IN_StringLengh = strlen(STR_Option2);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 4:
			STR_ConstStringToDraw = STR_Option3;
			IN_StringLengh = strlen(STR_Option3);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 5:
			STR_ConstStringToDraw = STR_Option4;
			IN_StringLengh = strlen(STR_Option4);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 6:
			STR_ConstStringToDraw = STR_Option5;
			IN_StringLengh = strlen(STR_Option5);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 7:
			STR_ConstStringToDraw = STR_Option6;
			IN_StringLengh = strlen(STR_Option6);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 8:
			STR_ConstStringToDraw = STR_Option7;
			IN_StringLengh = strlen(STR_Option7);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 9:
			STR_ConstStringToDraw = STR_Operation;
			IN_StringLengh = strlen(STR_Operation);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		default:
			system("CLS");
			STR_ConstStringToDraw = STR_ErrorHandle;
			IN_StringLengh = strlen(STR_ErrorHandle);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator = 1;
			Menu();
			break;
		}


	} while (IN_Iterator < 10);

}


//Function to get the size in X of CMD 
//This is for Center Text in CMD, because C dont have a function to center a String
int GetColumnWidth()
{
	CONSOLE_SCREEN_BUFFER_INFO ScreenInfo;
	HANDLE OutPut;

	if (!(OutPut = GetStdHandle(STD_OUTPUT_HANDLE)) ||
		!GetConsoleScreenBufferInfo(OutPut, &ScreenInfo))
		return 80;
	return ScreenInfo.dwSize.X;
}

int GetOptionFromUser(int* IN_OptionFromUser) {

	scanf("%d", IN_OptionFromUser);

	return(IN_OptionFromUser);

}

ST_Jobs VerifyOptionFromUser(ST_Jobs ST_AddJobsProcess ,int* IN_OptionChoseByUser) {

	ST_Jobs ST_NewAddJobsProcess = ST_AddJobsProcess;


	switch (*IN_OptionChoseByUser)
	{
	case 1:
		system("CLS");
		return(InsertNewOperation(ST_NewAddJobsProcess));
	case 2:
		//RemoveParticularOperation();
		break;
	case 3:
		ShowAllOperation(ST_NewAddJobsProcess);
		return(ST_NewAddJobsProcess);
	case 4:
		MinimalTimeOfJob();
		break;
	case 5:
		MaximalTimeOfJob();
		break;
	case 6:
		AverageTimeOfJob();
		break;
	case 7:
		exit(0);
		return(ST_NewAddJobsProcess);
	default:
		Menu();
		return(ST_NewAddJobsProcess);
	}
}

ST_Jobs InsertNewOperation(ST_Jobs ST_AddJobsProcess) {

	int IN_Machines = -1;
	char CH_NameOfJob[99];
	char CH_NameOfOperation[99];
	int IN_NumberofMachine;
	int IN_TimeToProcess;

	/*printf("What's the name of the Job?\n");
	printf("R:");
	scanf("%s", &CH_NameOfJob);*/


	printf("What's the name of the Operation?\n");
	printf("R:");
	scanf("%s", &CH_NameOfOperation);


	printf("\nHow many machines you want to Add?\n");
	printf("R:");
	scanf("%d", &IN_Machines);

	if (IN_Machines > 0)
	{
		for (int i = 1; i <= IN_Machines; i++)
		{
			printf("\nNumber of %d Machine :\n", i);
			printf("R:");
			scanf("%d", &IN_NumberofMachine);

			printf("\nTime to process the job of %d Machine:\n", IN_NumberofMachine);
			printf("R:");
			scanf("%d", &IN_TimeToProcess);

			ST_AddJobsProcess = InsertNewOperationToList(ST_AddJobsProcess,CH_NameOfOperation, IN_NumberofMachine, IN_TimeToProcess);

			WriteDataToFile(ST_AddJobsProcess);
			return(ST_AddJobsProcess);
		}

		printf("Operation Saved\n");
		system("PAUSE");

	}
	else
	{

		printf("Number of machines not Correct Insert the Operation again\n");
		InsertNewOperation(ST_AddJobsProcess);


	}

}



ST_Jobs InsertNewOperationToList(ST_Jobs ST_AddJobsProcess, char IN_NameofProcess[99], int IN_MachineNumber, int IN_TimeofProcess) {

	ST_Jobs ST_NewListJob = (ST_Jobs)malloc(sizeof(ST_Jobs));

	if (ST_NewListJob != NULL) {
		
		strcpy(ST_NewListJob->IN_NameofProcess, IN_NameofProcess);

		ST_NewListJob->IN_NumberofMachine = IN_MachineNumber;

		ST_NewListJob->IN_TimeToProcess = IN_TimeofProcess;

		ST_NewListJob->P_ST_Next = ST_AddJobsProcess;

		ST_NewListJob->P_ST_Before = NULL;

		return(ST_NewListJob);
	}
	else {

		return(ST_AddJobsProcess);
	}
}



int ShowAllOperation(ST_Jobs ST_AddReadProcess) {

	system("CLS");


	char Name[99]="";
	int Number1=0, Number2=0;


	while (ST_AddReadProcess != NULL)
	{
		strcpy(Name, ST_AddReadProcess->IN_NameofProcess);
		Number1 = ST_AddReadProcess->IN_NumberofMachine;
		Number2 = ST_AddReadProcess->IN_TimeToProcess;

		printf("\t\t________________JOBS___________________\n");
		printf("Name of Process: %s\n", Name);
		printf("Number Of Machine: %d\n", Number1);
		printf("Time to Process: %d\n", Number2);
		printf("___________________________________\n");
		ST_AddReadProcess = ST_AddReadProcess->P_ST_Next;

	}

	system("PAUSE");

}


//ST_Jobs RemoveParticularOperation(ST_Jobs ST_RemoveProcess, char NumeroDaOperaçãoARemover) {
//
//	ST_Jobs ST_Aux;
//	int IN_RemovedMemory = 0;
//	
//	while (ST_RemoveProcess !=NULL)
//	{
//		ST_Aux = ST_RemoveProcess;
//		if (strcmp(ST_RemoveProcess->IN_NameofProcess,NumeroDaOperaçãoARemover)==0) {
//
//			free(ST_Aux);
//			IN_RemovedMemory = 1;
//
//		}
//
//		ST_RemoveProcess = ST_RemoveProcess->P_ST_Next;
//
//	}
//
//	if (IN_RemovedMemory == 0) 
//		printf("Any Job with that %s name", NumeroDaOperaçãoARemover);
// 
//	return(ST_RemoveProcess);
//
//}



int MinimalTimeOfJob() {



}

int MaximalTimeOfJob() {




}

int AverageTimeOfJob() {



}



int WriteDataToFile(ST_Jobs ST_AddJobsProcess) {

	FILE* FileToWrite = fopen("Jobs.txt", "a");

	if (FileToWrite != NULL) {

		fprintf(FileToWrite, "%s;", ST_AddJobsProcess->IN_NameofProcess);
		fprintf(FileToWrite, "%d;", ST_AddJobsProcess->IN_NumberofMachine);
		fprintf(FileToWrite, "%d;", ST_AddJobsProcess->IN_TimeToProcess);
		fprintf(FileToWrite, "\n");
		fclose(FileToWrite);

	}
	else
	{

		printf("Error! Could not open file\n");

	}

}


ST_Jobs ReadDataOfFile(ST_Jobs ST_AddJobsProcess) {

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
			while (P_CH_Token!= NULL){
				switch (IN_Iterator)
				{
				case 0:

					if (strcmp(P_CH_Token, "\n")==0) {
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
					IN_Iterator=0;
					break;

				default:
					break;
				}

			}

		}

	}
	return ST_AddJobsProcess;
}


//Operações* RemoverOperação(Operações NOMEDaEstrutura, int NumeroDaOperaçãoARemover) {
//
//	Estrutura Auxiliar;
//	
//	while (NOMEDaEstrutura !=NULL)
//	{
//		Auxiliar = NOMEDaEstrutura;
//		if (NOMEDaEstrutura->NumeroDaOperação == NumeroDaOperaçãoARemover) {
//
//			free(Auxiliar);
//		}
//
//		NOMEDaEstrutura = NOMEDaEstrutura->seguinte;
//
//	}
// 
// return(NOMEDaEstrutura);
//
//}




