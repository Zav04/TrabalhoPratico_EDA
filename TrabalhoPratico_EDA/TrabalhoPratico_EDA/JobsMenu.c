#include "Functions.h"

//Function to Draw the Menu in CMD and Center in text in the middle of CMD
void WriteJobMenuInCenter()
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
	char* STR_ConstStringToDraw;

	system("CLS");
	//Menu Jobs
	const char* STR_MenuJobs = "***********************Jobs***********************";
	const char* STR_INJ = "1-Insertion of a New Job";
	const char* STR_RPJ = "2-Remove a particular Job";
	const char* STR_CPJ = "3-Change a particular Job";
	const char* STR_SAJ = "4-Show all Jobs";
	const char* STR_JBack = "5-Back";
	const char* STR_OperationRes = "OPERATION:";
	const char* STR_ErrorHandle = "SOMETHING GOES WRONG WITH THE ITERATOR";

	do
	{
		switch (IN_Iterator)
		{
		case 1:
			STR_ConstStringToDraw = STR_MenuJobs;
			IN_StringLengh = strlen(STR_MenuJobs);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 2:
			STR_ConstStringToDraw = STR_INJ;
			IN_StringLengh = strlen(STR_INJ);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 3:
			STR_ConstStringToDraw = STR_RPJ;
			IN_StringLengh = strlen(STR_RPJ);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 4:
			STR_ConstStringToDraw = STR_CPJ;
			IN_StringLengh = strlen(STR_CPJ);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 5:
			STR_ConstStringToDraw = STR_SAJ;
			IN_StringLengh = strlen(STR_SAJ);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 6:
			STR_ConstStringToDraw = STR_JBack;
			IN_StringLengh = strlen(STR_JBack);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 7:
			STR_ConstStringToDraw = STR_OperationRes;
			IN_StringLengh = strlen(STR_OperationRes);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s ", IN_Fill_Width, STR_ConstStringToDraw);
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


	} while (IN_Iterator <= 7);


}


