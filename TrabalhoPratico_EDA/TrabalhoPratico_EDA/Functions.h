#include "Struct_Jobs.h"

/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////
void Menu();
void WriteCenterTextMenu();
int GetColumnWidth();
int GetOptionFromUser(int *IN_OptionFromUser);
ST_Jobs *InsertNewOperationToList(ST_Jobs *ST_AddJobsProcess, char IN_NameofProcess[99], int IN_MachineNumber, int IN_TimeofProcess);
void WriteDataToFile(ST_Jobs *ST_WriteJobsProcess);
ST_Jobs *ReadDataOfFile(ST_Jobs *ST_ReadJobsProcess);
ST_Jobs *VerifyOptionFromUser(ST_Jobs *ST_AddJobsProcess,int *IN_OptionChoseByUser);
ST_Jobs *InsertNewOperation(ST_Jobs *ST_AddJobsProcess);
ST_Jobs *RemoveParticularOperation(ST_Jobs *ST_RemoveProcess);
ST_Jobs *ChangeParticularOperation(ST_Jobs *ST_ChangeJobsProcess);
void ShowAllOperation(ST_Jobs *ST_ShowReadProcess,BOOL B_Pause);
void MinimalTimeOfJob(ST_Jobs* ST_MinimalTimeProces);
void MaximalTimeOfJob(ST_Jobs* ST_MaximalTimeProces);
void AverageTimeOfJob(ST_Jobs* ST_AverageTimeProces);

/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////

