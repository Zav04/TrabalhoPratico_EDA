#include "Functions.h"

ST_Operation* InsertNewOperation(ST_Operation* ST_AddOperationToList)
{
	ST_Operation* ST_AuxAddOperationToList = ST_AddOperationToList;

	char CH_NameOfOperation[99];
	system("CLS");
	printf("What's the new Operation you want to add?\n");
	printf("R:");
	scanf("%s", CH_NameOfOperation);

	
	ST_AddOperationToList = InsertNewOperationToList(ST_AddOperationToList, CH_NameOfOperation);

		//WriteDataToFile(ST_AddJobsProcess);

		system("CLS");
		printf("\nOperation are Saved\n");
		system("PAUSE");
		system("CLS");
		return(ST_AddOperationToList);
}

ST_Operation* InsertNewOperationToList(ST_Operation* ST_AddOperationToList, char CH_NameofOperation[50])
{

	ST_Operation* ST_NewListOperation = (ST_Operation*)malloc(sizeof(ST_Operation));

	ST_Machines* ST_CreateAMachineNode = NULL;


	if (ST_NewListOperation != NULL)
	{
		//Job List
		strcpy(ST_NewListOperation->CH_NameofOperation, CH_NameofOperation);
		//Job Adress to Next List
		ST_NewListOperation->P_ST_Machines = ST_CreateAMachineNode;
		ST_NewListOperation->P_ST_Next = ST_AddOperationToList;

		return(ST_NewListOperation);
	}
	else
	{
		return(ST_AddOperationToList);
	}
}
