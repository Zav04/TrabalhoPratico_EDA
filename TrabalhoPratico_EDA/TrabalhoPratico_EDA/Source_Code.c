#include "Functions.h"

int main() {
	//ST_Jobs* ST_AddProcess = NULL;
	//Set language in Portuguese orthography
	setlocale(LC_ALL, "portuguese");

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


//Verify and Open the Choice by User
ST_Jobs *VerifyOptionFromUser(ST_Jobs *ST_AddJobsProcess ,int* IN_OptionChoseByUser) {

	ST_Jobs *ST_NewAddJobsProcess = ST_AddJobsProcess;

	switch (*IN_OptionChoseByUser)
	{
	case 1:
		system("CLS");
		return(InsertNewOperation(ST_NewAddJobsProcess));
	case 2:
		RemoveParticularOperation(ST_NewAddJobsProcess);
		break;
	case 3:
		return(ChangeParticularOperation(ST_NewAddJobsProcess));
	case 4:
		ShowAllOperation(ST_NewAddJobsProcess, TRUE);
		return(ST_NewAddJobsProcess);
	case 5:
		MinimalTimeOfJob(ST_NewAddJobsProcess);
		return(ST_NewAddJobsProcess);
		break;
	case 6:
		MaximalTimeOfJob(ST_NewAddJobsProcess);
		return(ST_NewAddJobsProcess);
		break;
	case 7:
		AverageTimeOfJob(ST_NewAddJobsProcess);
		return(ST_NewAddJobsProcess);
		break;
	case 8:
		exit(0);
	default:
		Menu();
	}
}








