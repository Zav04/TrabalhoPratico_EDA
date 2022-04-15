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



typedef struct Jobs {

	char CH_NameofJob[50];
	char CH_NameofProcess[50];
	unsigned int IN_NumberofMachine;
	unsigned int IN_TimeToProcess;
	struct Jobs* P_ST_Next;

}ST_Jobs;



/*//Part 2

typedef struct Jobs {

	char CH_NameofJob[50];
	struct Operation P_ST_Operation;
	struct Jobs* P_ST_Next;

}ST_Jobs;


typedef struct Operation {

	char CH_NameofOperation[50];
	struct Machines* P_ST_Machines;
	struct Operation* P_ST_Next;


}ST_Operation;*/


/*typedef struct Machines {

	unsigned int IN_NumberofMachine;
	unsigned int IN_TimeToProcess;
	struct Machines* P_ST_Next;


}ST_Operation; */





