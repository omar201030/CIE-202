
#include <iostream>
#include <sstream>
#include <cmath>

#include "ApplicationManager.h"

int main()
{

	ActionType ActType;
	ApplicationManager AppManager;

	do
	{		
		ActType = AppManager.GetUserAction();
		AppManager.ExecuteAction(ActType);
		AppManager.();
	

	}while(ActType != EXIT);
		
	return 0;
}

