#include "Functions.h"



int VerifySameOperation(ST_Operation* ST_AddOperationToList, char CH_NameofOperation[50])
{
	ST_Operation* ST_AuxAddOperationToList = ST_AddOperationToList;

	while (ST_AuxAddOperationToList != NULL)
	{
		if (strcmp(ST_AuxAddOperationToList->CH_NameofOperation, CH_NameofOperation)==0)
		{
			return -1;

		}
		else
		{
			ST_AuxAddOperationToList = ST_AuxAddOperationToList->P_ST_Next;
		}

	}
	return 0;


}

ST_Operation* InsertNewOperation(ST_Operation* ST_AddOperationToList)
{
	ST_Operation* ST_AuxAddOperationToList = ST_AddOperationToList;

	char CH_NameOfOperation[99];
	system("CLS");
	printf("What's the new Operation you want to add?\n");
	printf("R:");
	scanf("%s", CH_NameOfOperation);
	

	if (VerifySameOperation(ST_AddOperationToList, CH_NameOfOperation) == -1)
	{

		system("CLS");
		printf("Duplicated Operation\nProcessAborted");
		system("PAUSE");
		return ST_AddOperationToList;

	}


	
	ST_AddOperationToList = InsertNewOperationToList(ST_AddOperationToList, CH_NameOfOperation);

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
	ST_Operation* ST_AuxNewListOperation = ST_AddOperationToList;
	BOOL B_Created = FALSE;

	while (ST_AuxNewListOperation != NULL)
	{
		if (strcmp(ST_AuxNewListOperation->CH_NameofOperation, CH_NameofOperation) == 0)
		{
			B_Created = TRUE;
			break;
		}
		ST_AuxNewListOperation = ST_AuxNewListOperation->P_ST_Next;

	}

	if (ST_NewListOperation != NULL&& B_Created==FALSE)
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
