#include "Functions.h"

void ShowMachinesInOperation(ST_Operation* ST_ShowOperationToList, char CH_NameofOpertation[50], BOOL B_Pause)
{
	system("CLS");
	ST_Operation* ST_AuxShowOperationList = ST_ShowOperationToList;
	ST_Machines* ST_AuxShowMachineList = ST_ShowOperationToList->P_ST_Machines;



	if (ST_AuxShowOperationList != NULL)
	{

		while (ST_AuxShowOperationList != NULL)
		{
			if (strcmp(ST_AuxShowOperationList->CH_NameofOperation, CH_NameofOpertation) == 0)
			{
				ST_AuxShowMachineList = ST_AuxShowOperationList->P_ST_Machines;
				printf("**********************************OPERATION AVAILABLE*******************************************\n");

				while (ST_AuxShowMachineList != NULL)
				{
					printf("%s\n", ST_AuxShowMachineList->IN_NumberofMachine);

					//Next Job
					ST_AuxShowMachineList = ST_AuxShowMachineList->P_ST_Next;
				}
				printf("***********************************************************************************************\n");
			}

			ST_AuxShowOperationList = ST_AuxShowOperationList->P_ST_Next;

		}

	}
	else
	{
		printf("***************************************************************************************\n");
		printf("\t\tNO OPERATIONS FOUNDED\n");
		printf("***************************************************************************************\n");

	}


	if (B_Pause)
	{
		system("PAUSE");
		system("CLS");

	}




}