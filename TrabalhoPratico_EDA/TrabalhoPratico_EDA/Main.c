#include "Functions.h"

int main() {
	//Set language in English orthography
	setlocale(LC_ALL, "English");

	//Create the starting structs
	ST_Jobs* ST_AddJobsProcess = NULL;
	ST_Operation* ST_AddOperationsProcess = NULL;
	ST_Machines* ST_AddMachinesProcess = NULL;


	char* Name = "Job1";
	char* OP = "OP1";
	char* Name_ = "Job2";
	char* OP_ = "OP2";


	ST_AddJobsProcess = InsertNewJobToList(ST_AddJobsProcess, ST_AddOperationsProcess, ST_AddMachinesProcess, Name, OP, 1, 1);
	ST_AddJobsProcess = InsertNewJobToList(ST_AddJobsProcess, ST_AddOperationsProcess, ST_AddMachinesProcess, Name_, OP_, 2, 2);
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
		ST_AddJobsProcess=VerifyOptionFromUser(ST_AddJobsProcess, ST_AddOperationProcess, ST_AddMachineProcess,&IN_OptionFromUser);

	} while (true);


}










