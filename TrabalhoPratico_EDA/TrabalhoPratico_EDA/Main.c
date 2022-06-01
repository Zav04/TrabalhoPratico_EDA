#include "Functions.h"


int main() {

	//Set language in English orthography
	setlocale(LC_ALL, "English");


	//Create the starting structs
	ST_Jobs* ST_AddJobsProcess = NULL;
	ST_Operation* ST_AddOperationsProcess = NULL;
	ST_Machines* ST_AddMachinesProcess = NULL;
	ST_LoadAllTypes* ST_LoadFile = NULL;


	ST_LoadFile=ReadDataOfFile(ST_AddJobsProcess, ST_AddOperationsProcess, ST_AddMachinesProcess);

	ST_AddJobsProcess = ST_LoadFile->P_ST_Jobs;
	ST_AddOperationsProcess = ST_LoadFile->P_ST_Operation;
	ST_AddMachinesProcess = ST_LoadFile->P_ST_Machines;

	free(ST_LoadFile);

	

	//Call function Menu, to start draw the menu
	Menu(ST_AddJobsProcess, ST_AddOperationsProcess, ST_AddMachinesProcess);

	return 0;

}


//Function Menu to start draw the functions
void Menu(ST_Jobs* ST_AddJobsProcess, ST_Operation* ST_AddOperationProcess, ST_Machines* ST_AddMachineProcess)
{

	//Load Data to Lists from File
	//ST_AddJobsProcess = ReadDataOfFile(ST_AddJobsProcess);

	//Variable to get option from user
	//Infinit Loop to MENU
	do
	{

		int IN_OptionFromUser = -1;
		//Write Menu in the center of CMD
		WriteCenterTextMenu();
		//Get The option from User
		GetOptionFromUser(&IN_OptionFromUser);
		//Verify and Open the Choice by User
		VerifyOptionFromUser(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess, &IN_OptionFromUser);


	} while (true);


}










