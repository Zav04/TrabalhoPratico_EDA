#include "Functions.h"

ST_Jobs* MainFromJobs(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList)
{
	ST_Jobs* ST_AuxAddJobToList = ST_AddJobToList;


	int IN_GetOptionByUserJobs;
	do{
		IN_GetOptionByUserJobs = -1;
		//Write Menu in the center of CMD
		WriteJobMenuInCenter();

		//Get The option from User
		GetOptionFromUser(&IN_GetOptionByUserJobs);

		//Verify and Open the Choice by User
		ST_AuxAddJobToList=VerifyJobsOption(ST_AuxAddJobToList, ST_AddOperationToList, ST_AddmachineToList, &IN_GetOptionByUserJobs);
		
	} while (IN_GetOptionByUserJobs != 5);


	return(ST_AuxAddJobToList);
		

}