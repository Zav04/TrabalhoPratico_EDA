#include "Functions.h"

void MaximalTimeOfJob(ST_Jobs* ST_MaximalTimeProces)
{
	ShowAllProgram(ST_MaximalTimeProces, FALSE);


	ST_Jobs* ST_MaximalTimeofJob;
	ST_MaximalTimeofJob = ST_MaximalTimeProces;
	ST_Operation* ST_AuxAddOperationToList = NULL;
	ST_Machines* ST_AuxAddmachineToList = NULL;

	int IN_NumberOfOPerations = 0;
	int IN_ArrayofResults[99];
	int IN_SaveHigherValue=0;
	int IN_IndexOfArray=0;
	int IN_MaxTimeJob = 0;


	if(ST_MaximalTimeProces !=NULL){

	while (ST_MaximalTimeofJob!=NULL)
	{
		ST_AuxAddOperationToList = ST_MaximalTimeofJob->P_ST_Operation;
	while (ST_AuxAddOperationToList != NULL)
	{
		IN_NumberOfOPerations++;
		ST_AuxAddOperationToList= ST_AuxAddOperationToList->P_ST_Next;
	}

	ST_AuxAddOperationToList = ST_MaximalTimeofJob->P_ST_Operation;

	while (ST_AuxAddOperationToList != NULL)
	{
		ST_AuxAddmachineToList = ST_AuxAddOperationToList->P_ST_Machines;
		while (ST_AuxAddmachineToList != NULL)
		{
			if (IN_SaveHigherValue <= ST_AuxAddmachineToList->IN_TimeToProcess)
			{
				IN_SaveHigherValue = ST_AuxAddmachineToList->IN_TimeToProcess;

			}

			ST_AuxAddmachineToList = ST_AuxAddmachineToList->P_ST_Next;

		}

		IN_ArrayofResults[IN_IndexOfArray] = IN_SaveHigherValue;
		IN_IndexOfArray++;
		IN_SaveHigherValue = 0;
		ST_AuxAddOperationToList = ST_AuxAddOperationToList->P_ST_Next;

	}


	for (int i = 0; i < IN_IndexOfArray; i++)
	{
		IN_MaxTimeJob = IN_MaxTimeJob+ IN_ArrayofResults[i];
	}

	printf("The maximum time the %s will take will be: ", ST_MaximalTimeofJob->CH_NameofJob);
	printf("%d\n", IN_MaxTimeJob);
	printf("*****************************************************************************\n");
	ST_MaximalTimeofJob = ST_MaximalTimeofJob->P_ST_Next;

	IN_NumberOfOPerations = 0;
	IN_IndexOfArray = 0; 
	IN_SaveHigherValue = 0;
	IN_MaxTimeJob = 0;


	}

	}
	else
	{
		printf("NO OPERATIONS FOUNDED TO CALCULATE THE MAXIMAL TIME\n");
		system("PAUSE");
		system("CLS");
	}
	
	system("PAUSE");

}

