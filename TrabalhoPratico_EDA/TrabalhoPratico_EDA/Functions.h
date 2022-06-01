#include "Struct_Jobs.h"

/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////General Functions/////////////////////////////////////////////////////////////////////////////////

void Menu(ST_Jobs* ST_AddJobsProcess, ST_Operation* ST_AddOperationProcess, ST_Machines* ST_AddMachineProcess);
void WriteCenterTextMenu();
int GetColumnWidth();
int GetOptionFromUser(int *IN_OptionFromUser);
void VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess, ST_Operation* ST_AddOperationProcess, ST_Machines* ST_AddMachineProcess, int* IN_OptionChoseByUser);
void ShowAllProgram(ST_Jobs *ST_ShowReadProcess,BOOL B_Pause);
void MinimalTimeOfJob(ST_Jobs* ST_MinimalTimeProces);
void MaximalTimeOfJob(ST_Jobs* ST_MaximalTimeProces);
void AverageTimeOfJob(ST_Jobs* ST_AverageTimeProces);
ST_LoadAllTypes* ReadDataOfFile(ST_Jobs* ST_JobLoad, ST_Operation* ST_OperationLoad, ST_Machines* ST_MachineLoad);
void WriteDataToFile(ST_Jobs* ST_WriteJobsProcess);
/////////////////////////////////////////////////////////////////////////////////General Functions/////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////// JOB FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WriteJobMenuInCenter();
ST_Jobs* MainFromJobs(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList);
ST_Jobs* VerifyJobsOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, int* IN_OptionChoseByUser);
ST_Jobs* InsertNewJobToList(ST_Jobs* ST_AddJobToList,char CH_NameofPJob[50]);
ST_Jobs* InsertNewJob(ST_Jobs* ST_AddJobToList);
ST_Jobs* RemoveParticularJob(ST_Jobs* ST_RemoveJobToList);
ST_Jobs* ChangeJob(ST_Jobs* ST_ChangeJobToList);
void ShowJobs(ST_Jobs* ST_ShowJobToList, BOOL B_Pause);
int VerifySameJob(ST_Jobs* ST_AddJobToList, char CH_NameofPJob[50]);
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
int VerifySameOperation(ST_Operation* ST_AddOperationToList, char CH_NameofOperation[50]);

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
int VerifySameMachine(ST_Machines* ST_AddmachineToList, int IN_NumberOfMachine);
///////////////////////////////////////////////////////////////////////////////// MACHINE FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////// CONNECTIONS FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WriteConnectionsMenuInCenter();
ST_Operation* ConnectMachineToOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc, char CH_NameofOperation[50], int IN_NumberOfMachine);
ST_Jobs* ConnectJobToOperation(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc, char CH_NameofJob[50], char CH_NameOffOperation[50]);
ST_LoadAllTypes* MainFromConections(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, ST_LoadAllTypes* AuxSaveData);
ST_Jobs* OperationToJob(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc);
ST_Operation* MachineToOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc);
ST_LoadAllTypes* VerifyConnectionOption(ST_Jobs* ST_AddJobToList, ST_Operation* ST_AddOperationToList, ST_Machines* ST_AddmachineToList, ST_LoadAllTypes* ST_SaveData, int* IN_OptionChoseByUser);
ST_Jobs* DisassociateOperationInJob(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc);
ST_Operation* DisassociateMachineInOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc);
ST_Jobs* DisassociateJobToOperation(ST_Jobs* ST_JobToAloc, ST_Operation* ST_OperationtoAloc, char CH_NameofJob[50], char CH_NameOffOperation[50]);
ST_Operation* DisassociateMachineToOperation(ST_Operation* ST_OperationToAloc, ST_Machines* ST_MachinetoAloc, char CH_NameofOperation[50], int IN_NumberOfMachine);
void ShowOperationInJobs(ST_Jobs* ST_ShowJobToList, char CH_NameofOperation[50], BOOL B_Pause);
void ShowMachinesInOperation(ST_Operation* ST_ShowOperationToList, char CH_NameofOpertation[50], BOOL B_Pause);
///////////////////////////////////////////////////////////////////////////////// CONNECTIONS FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////

