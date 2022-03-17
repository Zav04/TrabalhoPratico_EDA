#pragma once
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

typedef struct Jobs {

	char IN_NameofProcess[9999];
	int IN_SizeOfName;
	int IN_NumberofMachine[9999];
	int IN_TimeToProcess[9999];
	struct Jobs* P_ST_Next;
	struct Jobs* P_ST_Before;

}*ST_Jobs;

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
ST_Jobs* InsertNewOperationToList(ST_Jobs* ST_AddToNextStruct, ST_Jobs* ST_StructBefore, int* IN_NumberOfMachines, char* IN_NameofProcess, int* IN_MachineNumber, int* IN_TimeofProcess);
