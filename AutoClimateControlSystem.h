#include "ITemparatureRegulator.h"
#include "ITempCalculator.h"
#include "ILogWriter.h"

class AutoClimateControlSystem 
{
	//Has- a Relationship (Dynamic)
	ITempCalculator *tempCalcObj;
	ITemparatureRegulator *regulatorObj;
	ILogWriter *logPtr;
 
public:
//Injecting Dependency using Constructor Injection
 AutoClimateControlSystem(ITempCalculator *calcObjectAddress,
 ITemparatureRegulator *regulatorAddress,
 ILogWriter* loggerAddress){
	this->tempCalcObj=calcObjectAddress;
	this->regulatorObj=regulatorAddress;
	this->logPtr=loggerAddress;
 }
int init();
void On();
 
void Off();

 
};
 