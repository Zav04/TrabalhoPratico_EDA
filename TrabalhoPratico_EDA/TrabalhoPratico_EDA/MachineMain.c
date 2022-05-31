#include "Functions.h"

ST_Machines* MainFromMachines(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList)
{

	ST_Machines* ST_AuxAddMachineToList = ST_AddmachineToList;

	int IN_GetOptionByUserJobs;
	do
	{
		IN_GetOptionByUserJobs = -1;
		//Write Menu in the center of CMD
		WriteMachineMenuInCenter();

		//Get The option from User
		GetOptionFromUser(&IN_GetOptionByUserJobs);

		//Verify and Open the Choice by User
		ST_AuxAddMachineToList = VerifyMachineOption(ST_AddJobToList, ST_AddOperationToList, ST_AuxAddMachineToList, &IN_GetOptionByUserJobs);

	} while (IN_GetOptionByUserJobs != 5);

	return(ST_AuxAddMachineToList);
}