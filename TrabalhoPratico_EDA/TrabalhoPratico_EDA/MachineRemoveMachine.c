#include "Functions.h"

ST_Machines* RemoveParticularMachine(ST_Machines* ST_AddmachineToList)
{

	ShowMachines(ST_AddmachineToList, FALSE);
	ST_Machines* ST_AtualNode = ST_AddmachineToList, * ST_BeforeNode;
	int IN_NoOperationFouned = 0;
	int IN_MachineToRemove;

	if (ST_AddmachineToList != NULL)
	{
		printf("_____________________________________________________________________________\n");
		printf("\nWhat's the number of Machine you want to remove?\n");
		printf("R: ");
		scanf("%s", &IN_MachineToRemove);


		if (ST_AtualNode->IN_NumberofMachine==IN_MachineToRemove)
		{
			ST_AddmachineToList = ST_AtualNode->P_ST_Next;
			free(ST_AtualNode);
			//free(ST_AtualNode->P_ST_Operation->P_ST_Machines);
			//free(ST_AtualNode->P_ST_Operation);
			IN_NoOperationFouned = 1;
			printf("\Machine number %d successfully removed!\n", IN_MachineToRemove);
			system("PAUSE");

		}
		else
		{
			ST_BeforeNode = ST_AtualNode;
			while ((ST_AtualNode != NULL) && ST_AtualNode->IN_NumberofMachine==IN_MachineToRemove)
			{
				ST_BeforeNode = ST_AtualNode;
				ST_AtualNode = ST_AtualNode->P_ST_Next;
			}
			if (ST_AtualNode != NULL)
			{
				ST_BeforeNode->P_ST_Next = ST_AtualNode->P_ST_Next;
				


				///ELIMINAR MAQUINAS TAMBEM SENÃO FUDEU



				free(ST_AtualNode);
				//free(ST_AtualNode->P_ST_Operation->P_ST_Machines);
				//free(ST_AtualNode->P_ST_Operation);
				IN_NoOperationFouned = 1;
				printf("\Machine number %d successfully removed!\n", IN_MachineToRemove);
				system("PAUSE");

			}

		}
	}
	else
	{

		printf("NO MACHINES FOUNDED TO REMOVE\n");
		system("PAUSE");
		system("CLS");
		return ST_AddmachineToList;

	}

	if (IN_NoOperationFouned == 0)
	{

		printf("\Machine %d not found!\n", IN_MachineToRemove);
		printf("Please insert or verify the correct name of Machine\n");
		system("PAUSE");
		system("CLS");

	}

	//WriteDataToFile(ST_RemoveJobToList);
	return(ST_AddmachineToList);
}
