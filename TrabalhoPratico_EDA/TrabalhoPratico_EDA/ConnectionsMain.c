#include "Functions.h"

ST_LoadAllTypes* MainFromConections(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, ST_LoadAllTypes* AuxSaveData)
{
	int IN_GetOptionByUserJobs;
	do
	{
		IN_GetOptionByUserJobs = -1;
		//Write Menu in the center of CMD
		WriteConnectionsMenuInCenter();

		//Get The option from User
		GetOptionFromUser(&IN_GetOptionByUserJobs);

		//Verify and Open the Choice by User
		AuxSaveData = VerifyConnectionOption(ST_AddJobToList, ST_AddOperationToList, ST_AddmachineToList, AuxSaveData, &IN_GetOptionByUserJobs);

		ST_AddJobToList = AuxSaveData->P_ST_Jobs;
		ST_AddOperationToList = AuxSaveData->P_ST_Operation;
		ST_AddmachineToList = AuxSaveData->P_ST_Machines;


	} while (IN_GetOptionByUserJobs != 5);

	return(AuxSaveData);
}