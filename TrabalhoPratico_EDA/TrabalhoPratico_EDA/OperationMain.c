#include "Functions.h"

ST_Operation* MainFromOperation(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList)
{

	ST_Operation* ST_AuxAddOperationToList = ST_AddOperationToList;

	int IN_GetOptionByUserJobs;
	do
	{
		IN_GetOptionByUserJobs = -1;
		//Write Menu in the center of CMD
		WriteOperationMenuInCenter();

		//Get The option from User
		GetOptionFromUser(&IN_GetOptionByUserJobs);

		//Verify and Open the Choice by User
		ST_AuxAddOperationToList = VerifyOperationOption(ST_AddJobToList, ST_AuxAddOperationToList, ST_AddmachineToList, &IN_GetOptionByUserJobs);

	} while (IN_GetOptionByUserJobs != 5);

	return(ST_AuxAddOperationToList);
}