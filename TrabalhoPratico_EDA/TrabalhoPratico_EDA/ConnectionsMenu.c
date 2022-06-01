#include "Functions.h"

//Function to Draw the Menu in CMD and Center in text in the middle of CMD
void WriteConnectionsMenuInCenter()
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
	//Menu Machines
	const char* STR_Machines = "***********************Connections***********************";
	const char* STR_INM = "1-Connect Operation to Job";
	const char* STR_RPM = "2-Connect Machine to Operation";
	const char* STR_MBack = "5-Back";
	const char* STR_OperationRes = "OPERATION: ";

	do
	{
		switch (IN_Iterator)
		{
		case 1:
			STR_ConstStringToDraw = STR_Machines;
			IN_StringLengh = strlen(STR_Machines);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 2:
			STR_ConstStringToDraw = STR_INM;
			IN_StringLengh = strlen(STR_INM);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 3:
			STR_ConstStringToDraw = STR_RPM;
			IN_StringLengh = strlen(STR_RPM);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 4:
			STR_ConstStringToDraw = STR_MBack;
			IN_StringLengh = strlen(STR_MBack);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;

		case 5:
			STR_ConstStringToDraw = STR_OperationRes;
			IN_StringLengh = strlen(STR_OperationRes);
			IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
			printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
			IN_Iterator++;
			break;
		}

	} while (IN_Iterator <= 5);
}