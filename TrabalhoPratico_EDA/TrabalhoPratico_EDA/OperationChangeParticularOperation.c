#include "Functions.h"


ST_Operation* ChangeOperation(ST_Operation* ST_ChangeJobToList)
{
	//Show all List to chose a Operation more easy
	ShowOperations(ST_ChangeJobToList, FALSE);
	ST_Operation* ST_AuxChangeJobs = ST_ChangeJobToList;
	int IN_NoOperationFouned = 0;
	int IN_DataChange;
	char CH_JobToChange[50];
	char CH_NewNameofJob[50];


	if (ST_AuxChangeJobs != NULL)
	{
		printf("_____________________________________________________________________________\n");
		printf("\nWhat's the name of the Operation you want to change?\n");
		printf("R: ");
		scanf("%s", &CH_JobToChange);


		while (ST_AuxChangeJobs != NULL)
		{
			if (strcmp(ST_AuxChangeJobs->CH_NameofOperation, CH_JobToChange) == 0)
			{
				printf("_____________________________________________________________________________\n");
				printf("\nWhat's the new name of Operation ?\n");
				printf("R: ");
				scanf("%s", CH_NewNameofJob);


				strcpy(ST_AuxChangeJobs->CH_NameofOperation, CH_NewNameofJob);

				IN_NoOperationFouned = 1;
				printf("\nOperation %s successfully changed!\n", CH_JobToChange);
				printf("\nThe new name is %s !\n", CH_NewNameofJob);
				system("PAUSE");
				system("CLS");
				break;

			}
			ST_AuxChangeJobs = ST_AuxChangeJobs->P_ST_Next;
		}

	}
	else
	{
		printf("NO OPERATIONS FOUNDED TO CHANGE\n");
		system("PAUSE");
		system("CLS");
		return ST_ChangeJobToList;
	}

	if (IN_NoOperationFouned == 0)
	{

		printf("\nOperation %s not found!\n", CH_JobToChange);
		printf("Please insert or verify the correct name of operation\n");
		system("PAUSE");
		system("CLS");

	}

	return(ST_ChangeJobToList);


}