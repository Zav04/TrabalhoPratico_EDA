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

	unsigned int IN_NumberofMachine;
	unsigned int IN_TimeToProcess;
	char IN_NameofProcess[50]; 
	struct Jobs* P_ST_Next;
	struct Jobs* P_ST_Before;

}ST_Jobs;


////typedef struct Operation {
////
////	char IN_NameofOperation[50];
////	struct Jobs* ST_Job;
////	struct Operation* P_ST_Next;
////	struct Operation* P_ST_Before;
////
////}*ST_Operation;



