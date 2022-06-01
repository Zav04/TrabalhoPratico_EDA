#include "Functions.h"


ST_Machines* ChangeMachine(ST_Machines* ST_AddmachineToList)
{
	//Show all List to chose a Operation more easy
	ShowMachines(ST_AddmachineToList, FALSE);
	ST_Machines* ST_AuxChangeMachine = ST_AddmachineToList;
	int IN_NoOperationFouned = 0;
	int IN_MachineNumber;
	int IN_NewMachineNumber;

	int IN_MachineTime;


	if (ST_AuxChangeMachine != NULL)
	{
		printf("_____________________________________________________________________________\n");
		printf("\nWhat's the number of the Machine you want to change?\n");
		printf("R: ");
		scanf("%d", &IN_MachineNumber);

		printf("_____________________________________________________________________________\n");
		printf("\nWhat's the new number of the Machine?\n");
		printf("R: ");
		scanf("%d", &IN_NewMachineNumber);

		printf("_____________________________________________________________________________\n");
		printf("\nWhat's the new Time?\n");
		printf("R: ");
		scanf("%s", &IN_MachineTime);



		while (ST_AuxChangeMachine != NULL)
		{
			if (ST_AuxChangeMachine->IN_NumberofMachine == IN_MachineNumber)
			{
				ST_AuxChangeMachine->IN_NumberofMachine = IN_NewMachineNumber;

				ST_AuxChangeMachine->IN_TimeToProcess = IN_MachineTime;

				IN_NoOperationFouned = 1;

				printf("\Machine number %d successfully changed!\n", IN_MachineNumber);
				printf("\nThe new mumber is %d !\n", IN_NewMachineNumber);
				system("PAUSE");
				system("CLS");
				break;

			}
			ST_AuxChangeMachine = ST_AuxChangeMachine->P_ST_Next;
		}

	}
	else
	{
		printf("NO MACHINES FOUNDED TO CHANGE\n");
		system("PAUSE");
		system("CLS");
		return ST_AuxChangeMachine;
	}

	if (IN_NoOperationFouned == 0)
	{

		printf("\nMachine number %d not found!\n", IN_MachineNumber);
		printf("Please insert or verify the correct number of Machine\n");
		system("PAUSE");
		system("CLS");

	}

	return(ST_AuxChangeMachine);


}