#include "Struct_Jobs.h"

/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////
void Menu(ST_Jobs* ST_AddJobsProcess, ST_Operation* ST_AddOperationProcess, ST_Machines* ST_AddMachineProcess);
void WriteCenterTextMenu();
int GetColumnWidth();
int GetOptionFromUser(int *IN_OptionFromUser);
//void *InsertNewOperationToList(ST_Jobs *ST_AddJobsProcess, char IN_NameofProcess[99], int IN_MachineNumber, int IN_TimeofProcess);
//void WriteDataToFile(ST_Jobs *ST_WriteJobsProcess);
//ST_Jobs *ReadDataOfFile(ST_Jobs *ST_ReadJobsProcess);
void VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess, ST_Operation* ST_AddOperationProcess, ST_Machines* ST_AddMachineProcess, int* IN_OptionChoseByUser);
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
ST_Jobs* InsertNewJobToList(ST_Jobs* ST_AddJobToList,char CH_NameofPJob[50]);
ST_Jobs* InsertNewJob(ST_Jobs* ST_AddJobToList);
ST_Jobs* RemoveParticularJob(ST_Jobs* ST_RemoveJobToList);
ST_Jobs* ChangeJob(ST_Jobs* ST_ChangeJobToList);
void ShowJobs(ST_Jobs* ST_ShowJobToList, BOOL B_Pause);
///////////////////////////////////////////////////////////////////////////////// JOB FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////// OPERATION FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WriteOperationMenuInCenter();
ST_Operation* MainFromOperation(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList);
ST_Operation* VerifyOperationOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, int* IN_OptionChoseByUser);
ST_Operation* InsertNewOperationToList(ST_Operation* ST_AddOperationToList,char CH_NameofOperation[50]);
ST_Operation* InsertNewOperation(ST_Operation* ST_AddOperationToList);
ST_Operation* RemoveParticularOperation(ST_Operation* ST_RemoveOperationToList);
ST_Operation* ChangeOperation(ST_Operation* ST_ChangeJobToList);
void ShowOperations(ST_Operation* ST_ShowJobToList, BOOL B_Pause);
///////////////////////////////////////////////////////////////////////////////// OPERATION FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




///////////////////////////////////////////////////////////////////////////////// MACHINE FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WriteMachineMenuInCenter();
ST_Machines* MainFromMachines(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList);
ST_Machines* VerifyMachineOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, int* IN_OptionChoseByUser);
ST_Machines* InsertNewMachineToList(ST_Machines* ST_AddMachineToList, int IN_NumberOfMachine, int IN_TimeOfMachine);
ST_Machines* InsertNewMachine(ST_Machines* ST_AddmachineToList);
ST_Machines* RemoveParticularMachine(ST_Machines* ST_AddmachineToList);
ST_Machines* ChangeMachine(ST_Machines* ST_AddmachineToList);
void ShowMachines(ST_Machines* ST_AddmachineToList, BOOL B_Pause);
///////////////////////////////////////////////////////////////////////////////// MACHINE FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////// CONNECTIONS FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ST_Operation* ConnectMachineToOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc, char CH_NameofOperation[50], int NumberOfMachine);
ST_Jobs* ConnectJobToOperation(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc, char CH_NameofJob[50], char CH_NameOffOperation[50]);

///////////////////////////////////////////////////////////////////////////////// CONNECTIONS FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//Machines Menu
ST_Jobs* WriteMachinesMenuInCenter();



ST_Operation* inserirOperacao(ST_Jobs* job, ST_Operation* operacao, char CH_NameofPJob, char nomedoOperation[], int nrmaquina, int tempo);


/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////

