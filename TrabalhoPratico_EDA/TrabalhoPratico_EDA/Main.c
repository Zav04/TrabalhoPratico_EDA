#include "Functions.h"


int main() {

	//Set language in English orthography
	setlocale(LC_ALL, "English");


	//Create the starting structs
	ST_Jobs* ST_AddJobsProcess = NULL;
	ST_Operation* ST_AddOperationsProcess = NULL;
	ST_Machines* ST_AddMachinesProcess = NULL;


	char Name[99] = "Job1";
	char OP[99] = "OP1";
	char Name_[99] = "Job2";
	char OP_[99] = "OP2";
	char Name_1[99] = "Job3";
	char OP_1[99] = "OP3";
	int m1 = 1;
	int t1 = 10;
	int m2 = 2;
	int t2 = 20;
	int m3 = 3;
	int t3 = 30;



	ST_AddJobsProcess = InsertNewJobToList(ST_AddJobsProcess,  Name);
	ST_AddJobsProcess = InsertNewJobToList(ST_AddJobsProcess,  Name_);
	ST_AddJobsProcess = InsertNewJobToList(ST_AddJobsProcess, Name_1);

	ST_AddOperationsProcess = InsertNewOperationToList(ST_AddOperationsProcess, OP);
	ST_AddOperationsProcess = InsertNewOperationToList(ST_AddOperationsProcess, OP_);
	ST_AddOperationsProcess = InsertNewOperationToList(ST_AddOperationsProcess, OP_1);

	ST_AddMachinesProcess = InsertNewMachineToList(ST_AddMachinesProcess, m1, t1);
	ST_AddMachinesProcess = InsertNewMachineToList(ST_AddMachinesProcess, m2, t2);
	ST_AddMachinesProcess = InsertNewMachineToList(ST_AddMachinesProcess, m3, t3);


	ST_AddOperationsProcess = ConnectMachineToOperation(ST_AddOperationsProcess, ST_AddMachinesProcess, OP_1, m3);
	ST_AddOperationsProcess = ConnectMachineToOperation(ST_AddOperationsProcess, ST_AddMachinesProcess, OP, m1);
	ST_AddOperationsProcess = ConnectMachineToOperation(ST_AddOperationsProcess, ST_AddMachinesProcess, OP_1, m3);



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










