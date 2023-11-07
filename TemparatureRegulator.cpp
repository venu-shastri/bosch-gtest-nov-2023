#include "TemparatureRegulator.h"

void TemparatureRegulator::regulate(int currentTemp)
{
	initial_temp = 0;
	if (currentTemp > initial_temp )
	{
		increase();
	}
	else
	{
		decrease();
	}
}
