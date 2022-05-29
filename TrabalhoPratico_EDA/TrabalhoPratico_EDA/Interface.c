#include "Functions.h"

//Function to Draw the Menu in CMD and Center in text in the middle of CMD
void WriteCenterTextMenu()
{

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
	const char* STR_Menu = "**********************************************MENU**********************************************";
	const char* STR_Job = "1-JOBS";
	const char* STR_Operation = "2-OPERATION";
	const char* STR_Machine = "3-MACHINES";
	const char* STR_Exit = "0-Exit: ";
	const char* STR_OperationRes = "OPERATION: ";

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
			STR_ConstStringToDraw = STR_Job;
			IN_StringLengh = strlen(STR_Job);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 3:
			STR_ConstStringToDraw = STR_Operation;
			IN_StringLengh = strlen(STR_Operation);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 4:
			STR_ConstStringToDraw = STR_Machine;
			IN_StringLengh = strlen(STR_Machine);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;


		case 5:
			STR_ConstStringToDraw = STR_Exit;
			IN_StringLengh = strlen(STR_Exit);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 6:
			STR_ConstStringToDraw = STR_OperationRes;
			IN_StringLengh = strlen(STR_OperationRes);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;
		}


	} while (IN_Iterator <= 6);
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

