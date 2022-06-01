#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <wchar.h>
#include <string.h>
#include <Windows.h>
#include <stdbool.h>


//Dinamic List of Jobs
typedef struct LoadAllTypes
{
	struct Jobs* P_ST_Jobs;
	struct Operation* P_ST_Operation;
	struct Machines* P_ST_Machines;

}ST_LoadAllTypes;


//Dinamic List of Jobs
typedef struct Jobs {

	char CH_NameofJob[50];
	struct Operation *P_ST_Operation;
	struct Jobs *P_ST_Next;

}ST_Jobs;

//Dinamic List of Operations
typedef struct Operation {

	char CH_NameofOperation[50];
	struct Machines *P_ST_Machines;
	struct Operation *P_ST_Next;

}ST_Operation;


//Dinamic List of Machines
typedef struct Machines {

	unsigned int IN_NumberofMachine;
	unsigned int IN_TimeToProcess;
	struct Machines *P_ST_Next;


}ST_Machines;





