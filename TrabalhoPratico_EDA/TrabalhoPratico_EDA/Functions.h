#include "Struct_Jobs.h"

/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////
void Menu();
void WriteCenterTextMenu();
int GetColumnWidth();
int GetOptionFromUser(int *IN_OptionFromUser);
ST_Jobs *VerifyOptionFromUser(ST_Jobs* ST_AddJobsProcess,int *IN_OptionChoseByUser);
ST_Jobs *InsertNewOperation(ST_Jobs* ST_AddJobsProcess);
ST_Jobs*RemoveParticularOperation();
void ShowAllOperation(ST_Jobs* ST_AddReadProcess, bool B_Pause);
int MinimalTimeOfJob();
int MaximalTimeOfJob();
int AverageTimeOfJob();
ST_Jobs *InsertNewOperationToList(ST_Jobs* ST_AddJobsProcess,char IN_NameofProcess[99], int IN_MachineNumber, int IN_TimeofProcess);
int WriteDataToFile(ST_Jobs* ST_AddJobsProcess);
ST_Jobs *ReadDataOfFile(ST_Jobs* ST_AddJobsProcess);
//int CountNumberOfLinesInTxt(ST_Jobs* ST_AddJobsProcessFILE* FileToCount);
/////////////////////////////////////////////////////////////////////////////////Functions Declarations/////////////////////////////////////////////////////////////////////////////////

