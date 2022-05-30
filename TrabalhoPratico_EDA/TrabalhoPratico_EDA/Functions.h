#include "Struct_Jobs.h"

/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////
void Menu(ST_Jobs* ST_AddJobsProcess, ST_Operation* ST_AddOperationProcess, ST_Machines* ST_AddMachineProcess);
void WriteCenterTextMenu();
int GetColumnWidth();
int GetOptionFromUser(int *IN_OptionFromUser);
//void *InsertNewOperationToList(ST_Jobs *ST_AddJobsProcess, char IN_NameofProcess[99], int IN_MachineNumber, int IN_TimeofProcess);
//void WriteDataToFile(ST_Jobs *ST_WriteJobsProcess);
//ST_Jobs *ReadDataOfFile(ST_Jobs *ST_ReadJobsProcess);
ST_Jobs* VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess, ST_Operation* ST_AddOperationProcess, ST_Machines* ST_AddMachineProcess, int* IN_OptionChoseByUser);
//ST_Jobs *InsertNewOperation(ST_Jobs *ST_AddJobsProcess);
//ST_Jobs *RemoveParticularOperation(ST_Jobs *ST_RemoveProcess);
//ST_Jobs *ChangeParticularOperation(ST_Jobs *ST_ChangeJobsProcess);
void ShowAllProgram(ST_Jobs *ST_ShowReadProcess,BOOL B_Pause);
//void MinimalTimeOfJob(ST_Jobs* ST_MinimalTimeProces);
//void MaximalTimeOfJob(ST_Jobs* ST_MaximalTimeProces);
//void AverageTimeOfJob(ST_Jobs* ST_AverageTimeProces);


///////////////////////////////////////////////////////////////////////////////// JOB FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WriteJobMenuInCenter();
ST_Jobs* MainFromJobs(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList);
ST_Jobs* VerifyJobsOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, int* IN_OptionChoseByUser);
ST_Jobs* InsertNewJobToList(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList,char CH_NameofPJob[99], char CH_NameofOperation[99], int IN_MachineNumber, int IN_TimeofProcess);
ST_Jobs* InsertNewJob(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList);
ST_Jobs* RemoveParticularJob(ST_Jobs* ST_RemoveJobToList, ST_Operation* ST_RemoveOperationToList, ST_Machines* ST_RemoveMachineToList);
ST_Jobs* ChangeJob(ST_Jobs* ST_ChangeJobToList);
///////////////////////////////////////////////////////////////////////////////// JOB FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////// OPERATION FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WriteOperationMenuInCenter();
ST_Jobs* MainFromOperation(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList);
ST_Jobs* VerifyOperationOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, int* IN_OptionChoseByUser);
ST_Operation* InsertNewOperationToList(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, char CH_NameofPJob[99], char CH_NameofOperation[99], int IN_MachineNumber, int IN_TimeofProcess);
ST_Jobs* InsertNewOperation(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList);
ST_Jobs* RemoveParticularOperation(ST_Jobs* ST_RemoveJobToList, ST_Operation* ST_RemoveOperationToList, ST_Machines* ST_RemoveMachineToList);
ST_Jobs* ChangeOperation(ST_Jobs* ST_ChangeJobToList);
///////////////////////////////////////////////////////////////////////////////// OPERATION FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Machines Menu
ST_Jobs* WriteMachinesMenuInCenter();



ST_Operation* inserirOperacao(ST_Jobs* job, ST_Operation* operacao, char CH_NameofPJob, char nomedoOperation[], int nrmaquina, int tempo);


/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////

