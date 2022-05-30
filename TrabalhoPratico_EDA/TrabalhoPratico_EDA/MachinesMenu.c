#include "Functions.h"

//Function to Draw the Menu in CMD and Center in text in the middle of CMD
ST_Jobs* WriteMachinesMenuInCenter(int IN_TypeOfMenu)
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

	//Menu Machines
	const char* STR_Machines = "***********************Machines***********************";
	const char* STR_INM = "1-Insertion of a New Machines";
	const char* STR_RPM = "2-Remove a particular Machines";
	const char* STR_CPM = "3-Change a particular Machines";
	const char* STR_SAM = "4-Show all Machines";
	const char* STR_MBack = "5-Back";
	const char* STR_OperationRes = "OPERATION: ";

	switch (IN_TypeOfMenu)
	{
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
				STR_ConstStringToDraw = STR_CPM;
				IN_StringLengh = strlen(STR_CPM);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 5:
				STR_ConstStringToDraw = STR_SAM;
				IN_StringLengh = strlen(STR_SAM);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 6:
				STR_ConstStringToDraw = STR_MBack;
				IN_StringLengh = strlen(STR_MBack);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 7:
				STR_ConstStringToDraw = STR_OperationRes;
				IN_StringLengh = strlen(STR_OperationRes);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;
			}

		} while (IN_Iterator <= 7);
	}
}