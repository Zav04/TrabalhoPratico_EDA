#include "Functions.h"

int main() {
	//Set language in English orthography
	setlocale(LC_ALL, "English");

	//Call function Menu, to start draw the menu
	Menu();

	return 0;

}


//Function Menu to start draw the functions
void Menu() {

	//Create the starting struct
	ST_Jobs *ST_AddJobsProcess = NULL;

	//Load Data to Lists from File
	ST_AddJobsProcess = ReadDataOfFile(ST_AddJobsProcess);


	//Infinit Loop to MENU
	do
	{
		int IN_OptionFromUser = -1;
		//Write Menu in the center of CMD
		WriteCenterTextMenu();
		//Get The option from User
		GetOptionFromUser(&IN_OptionFromUser);
		//Verify and Open the Choice by User
		ST_AddJobsProcess=VerifyOptionFromUser(ST_AddJobsProcess,&IN_OptionFromUser);

	} while (true);


}










