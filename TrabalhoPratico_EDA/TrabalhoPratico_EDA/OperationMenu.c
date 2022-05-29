#include "Functions.h"

ST_Jobs* WriteOperationMenuInCenter()
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

	//Menu Operations
	const char* STR_MenuOperations = "***********************Operations***********************";
	const char* STR_INO = "1-Insertion of a New Operation";
	const char* STR_RPO = "2-Remove a particular Operation";
	const char* STR_CPO = "3-Change a particular Operation";
	const char* STR_SAO = "4-Show all Operation";
	const char* STR_OBack = "5-Back";
	const char* STR_OperationRes = "OPERATION: ";

		do
		{
			switch (IN_Iterator)
			{
			case 1:
				STR_ConstStringToDraw = STR_MenuOperations;
				IN_StringLengh = strlen(STR_MenuOperations);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 2:
				STR_ConstStringToDraw = STR_INO;
				IN_StringLengh = strlen(STR_INO);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 3:
				STR_ConstStringToDraw = STR_RPO;
				IN_StringLengh = strlen(STR_RPO);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 4:
				STR_ConstStringToDraw = STR_CPO;
				IN_StringLengh = strlen(STR_CPO);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 5:
				STR_ConstStringToDraw = STR_SAO;
				IN_StringLengh = strlen(STR_SAO);
				IN_Fill_Width = (CI_GetXOfCMD - IN_StringLengh) / 2 + IN_StringLengh;
				printf("%*s\n", IN_Fill_Width, STR_ConstStringToDraw);
				IN_Iterator++;
				break;

			case 6:
				STR_ConstStringToDraw = STR_OBack;
				IN_StringLengh = strlen(STR_OBack);
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
