#include "Functions.h"


int VerifySameMachine(ST_Machines* ST_AddmachineToList, int IN_NumberOfMachine)
{
	ST_Machines* ST_AuxAddmachineToList = ST_AddmachineToList;

	while (ST_AuxAddmachineToList!=NULL)
	{
		if (ST_AuxAddmachineToList->IN_NumberofMachine == IN_NumberOfMachine)
		{
			return -1;

		}
		else
		{
			ST_AuxAddmachineToList = ST_AuxAddmachineToList->P_ST_Next;
		}

	}
	return 0;


}

ST_Machines* InsertNewMachine(ST_Machines* ST_AddmachineToList)
{
	ST_Machines* ST_AuxAddMAchineToList = ST_AddmachineToList;

	int IN_NumberOfMachine;
	int IN_TimeOfMachine;

	system("CLS");
	printf("What's the number of new Machine you want to add?\n");
	printf("R:");
	scanf("%d", &IN_NumberOfMachine);

	if (VerifySameMachine(ST_AddmachineToList, IN_NumberOfMachine) == -1)
	{

		system("CLS");
		printf("Duplicated Machine\nProcessAborted");
		system("PAUSE");
		return ST_AddmachineToList;

	}
		

	printf("What's time of process?\n");
	printf("R:");
	scanf("%d", &IN_TimeOfMachine);

	
	ST_AuxAddMAchineToList = InsertNewMachineToList(ST_AuxAddMAchineToList, IN_NumberOfMachine, IN_TimeOfMachine);

		system("CLS");
		printf("\Machine are Saved\n");
		system("PAUSE");
		system("CLS");
		return(ST_AuxAddMAchineToList);
}


ST_Machines* InsertNewMachineToList(ST_Machines* ST_AddMachineToList, int IN_NumberOfMachine, int IN_TimeOfMachine)
{

	ST_Machines* ST_NewListMachines = (ST_Machines*)malloc(sizeof(ST_Machines));


	if (ST_NewListMachines != NULL)
	{

		ST_NewListMachines->IN_NumberofMachine = IN_NumberOfMachine;
		ST_NewListMachines->IN_TimeToProcess = IN_TimeOfMachine;
		ST_NewListMachines->P_ST_Next = ST_AddMachineToList;

		return(ST_NewListMachines);
	}
	else
	{
		return(ST_AddMachineToList);
	}
}
