#include "AutoClimateControlSystem.h"
void AutoClimateControlSystem::On()
{
	this->logPtr->write("AutoClimateControlSystem :: On");
	int currentTemp = tempCalcObj->getTemparature();
	currentTemp++;
	regulatorObj->regulate(currentTemp);
}
 
void AutoClimateControlSystem:: Off()
{
 	this->logPtr->write("AutoClimateControlSystem :: Off");
	int currentTemp = tempCalcObj->getTemparature();
	regulatorObj->regulate(currentTemp);
 
}

int AutoClimateControlSystem::init(){
	this->logPtr->write("AutoClimateControlSystem :: Init");
	return 100;
}
