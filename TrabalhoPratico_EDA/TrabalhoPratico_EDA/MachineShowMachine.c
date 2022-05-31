#include "Functions.h"

void ShowMachines(ST_Machines* ST_ShowMachineToList, BOOL B_Pause)
{
	system("CLS");
	ST_Machines* ST_AuxShowMachineList = ST_ShowMachineToList;


	if (ST_AuxShowMachineList != NULL)
	{

		printf("**********************************MACHINES AVAILABLE*******************************************\n");
		printf("Number of Machine:");
		printf("\t\t\tTime to process:\n");


		while (ST_AuxShowMachineList != NULL)
		{
			printf("%d", ST_AuxShowMachineList->IN_NumberofMachine);
			printf("\t\t\t\t\t%d\n", ST_AuxShowMachineList->IN_TimeToProcess);

			//Next Job
			ST_AuxShowMachineList = ST_AuxShowMachineList->P_ST_Next;
		}
		printf("***********************************************************************************************\n");

	}
	else
	{
		printf("***************************************************************************************\n");
		printf("\t\tNO MACHINES FOUNDED\n");
		printf("***************************************************************************************\n");

	}


	if (B_Pause)
	{
		system("PAUSE");
		system("CLS");

	}




}