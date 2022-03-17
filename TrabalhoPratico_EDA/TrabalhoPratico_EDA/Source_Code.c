#include "Functions.h"



//Main Function
int main() {

	
	//Set language in Portuguese orthography
	setlocale(LC_ALL, "portuguese");

	//Call function Menu, to start draw the menu
	Menu();


	return 0;

}

//Function Menu to start draw the functions
void Menu(){

	int IN_OptionFromUser=-1;
	WriteCenterTextMenu();
	VerifyOptionFromUser(GetOptionFromUser(IN_OptionFromUser));
	



}

//Function to Draw the Menu in CMD and Center in text in the middle of CMD
void WriteCenterTextMenu() {

	//Get Size in X of CMD
	const int CI_GetXOfCMD = GetColumnWidth();
	//Iterator Value to increment to Write a Text in CMD
	int IN_Iterator=1;
	//Variable to calculate how many spaces need to fill in to get the center
	int IN_Fill_Width;
	//Variable to get the lengh of String to calculate center of CMD
	int IN_StringLengh = 0;

	//Strings of Menu
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
			IN_Iterator=1;
			Menu();
			break;
		}



	} while (IN_Iterator < 10);

}


//Function to get the size in X of CMD 
//This is for Center Text in CMD, because C dont have a function to center a String
#ifdef _WIN32
int GetColumnWidth()
{
	CONSOLE_SCREEN_BUFFER_INFO ScreenInfo;
	HANDLE OutPut;

	if (!(OutPut = GetStdHandle(STD_OUTPUT_HANDLE)) ||
		!GetConsoleScreenBufferInfo(OutPut, &ScreenInfo))
		return 80;
	return ScreenInfo.dwSize.X;
}//GetColumnWidth
#else
int GetColumnWidth() { return 80; }
#endif


int GetOptionFromUser(int IN_OptionFromUser){


	return(scanf("%d", &IN_OptionFromUser));

}


void VerifyOptionFromUser(int IN_OptionChoseByUser){

		switch (IN_OptionChoseByUser)
		{
		case 1:
			InsertNewOperation();

		case 2:
			RemoveParticularOperation();

		case 3:
			ShowAllOperation();

		case 4:
			MinimalTimeOfJob();

		case 5:
			MaximalTimeOfJob();

		case 6:
			AverageTimeOfJob();
		case 7:
			exit(0);

		default:
			system("CLS");
			Menu();
			break;
		}
}




int InsertNewOperation() {
	
	int IN_Machines=-1;
	char CH_NameOfOperation[99999];
	int IN_NumberofMachine[99999];
	int IN_TimeToProcess[99999];

	//Apontador para a primeira lista ligada.
	ST_Jobs* ST_AddJobsNext = NULL;
	ST_Jobs* ST_AddJobsBefore = NULL;

	system("CLS");
	printf("Whats the name of new operation?\n");
	printf("R:");
	scanf("%s", &CH_NameOfOperation);




	printf("\nHow machines you want to Add?\n");
	printf("R:");
	scanf("%d", &IN_Machines);

	if (IN_Machines > 0)
	{
		for (int i = 1; i <= IN_Machines; i++)
		{
			printf("\nNumber of %d Machine :\n", i);
			printf("R:");
			scanf("%d", &IN_NumberofMachine[i-1]);

			printf("\nTime to process the job of %d :\n", IN_NumberofMachine[i-1]);
			printf("R:");
			scanf("%d", &IN_TimeToProcess[i-1]);

		}

		InsertNewOperationToList(&ST_AddJobsNext, &ST_AddJobsBefore, &IN_Machines, &CH_NameOfOperation,&IN_NumberofMachine,&IN_TimeToProcess);



	}
	else {

		system("CLS");
		printf("You insert a wrong number, please insert a new one\n");
		InsertNewOperation();

	}





}

ST_Jobs* InsertNewOperationToList(ST_Jobs* ST_AddToNextStruct, ST_Jobs* ST_StructBefore, int* IN_NumberOfMachines, char* IN_NameofProcess, int* IN_MachineNumber, int* IN_TimeofProcess) {


	ST_Jobs ST_NewListJob;
	ST_NewListJob = (ST_Jobs)malloc(sizeof(ST_Jobs));

	//ST_NewListJob->PST_Next = ST_AddToNextStruct;
	//ST_NewListJob->PST_Before = NULL;

	if (ST_NewListJob != NULL) {

		ST_NewListJob->IN_SizeOfName = strlen(IN_NameofProcess);
		strcpy(ST_NewListJob->IN_NameofProcess, IN_NameofProcess);

		for (int i = 0; i < IN_NumberOfMachines; i++)
		{

			ST_NewListJob->IN_NumberofMachine[i] = IN_NumberOfMachines[i];
			ST_NewListJob->IN_TimeToProcess[i] = IN_TimeofProcess[i];

	
		}

		if(ST_NewListJob != NULL)(*ST_AddToNextStruct)->P_ST_Before = ST_NewListJob;
		if (ST_NewListJob == NULL) *ST_StructBefore = ST_NewListJob;

	}
	else
	{

		return(ST_NewListJob);

	}


}



int RemoveParticularOperation() {



}
int ShowAllOperation() {



}
int MinimalTimeOfJob() {





}
int MaximalTimeOfJob() {




}

int AverageTimeOfJob() {



}


