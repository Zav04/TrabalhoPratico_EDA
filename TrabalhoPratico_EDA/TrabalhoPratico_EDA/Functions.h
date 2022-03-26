#include "Struct_Jobs.h"




void Menu();
void WriteCenterTextMenu();
int GetColumnWidth();
int GetOptionFromUser(int IN_OptionFromUser);
void VerifyOptionFromUser(int IN_OptionChoseByUser);
int InsertNewOperation();
int RemoveParticularOperation();
int ShowAllOperation();
int MinimalTimeOfJob();
int MaximalTimeOfJob();
int AverageTimeOfJob();
ST_Jobs InsertNewOperationToList(ST_Jobs ST_AddDataToStruct, char IN_NameofProcess, int IN_MachineNumber, int IN_TimeofProcess);