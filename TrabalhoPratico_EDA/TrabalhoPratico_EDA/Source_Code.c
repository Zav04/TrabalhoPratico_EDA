#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "Functions.h"

struct Jobs {

	int IN_Process;
	int IN_NumberofMachine;
	int IN_TimeToProcess;
	


}*Jobs;

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


