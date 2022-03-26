#include "Functions.h"


int GetOptionFromUser(int *IN_OptionFromUser) {

	scanf("%d", IN_OptionFromUser);

	return(IN_OptionFromUser);

}

void VerifyOptionFromUser(int *IN_OptionChoseByUser) {

	switch (*IN_OptionChoseByUser)
	{
	case 1:
		system("CLS");
		InsertNewOperation();
		break;
	case 2:
		RemoveParticularOperation();
		break;
	case 3:
		ShowAllOperation();
		break;
	case 4:
		MinimalTimeOfJob();
		break;
	case 5:
		MaximalTimeOfJob();
		break;
	case 6:
		AverageTimeOfJob();
		break;
	case 7:
		exit(0);

	default:
		system("CLS");
		Menu();
		break;
	}
}