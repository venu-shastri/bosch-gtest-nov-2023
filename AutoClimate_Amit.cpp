class OutsideTempSensor
{
	int mOutsideTemp;
	public:
	int getOutsideTemperature()
	{
		// read sensor value and return
		return mOutsideTemp;
	}
};
 
 
class OccupancySensor
{
	int mOccupancyTemp;
	public:
	int getOccupancyTemperature()
	{
		// read sensor value and return
		return mOccupancyTemp;
	}
};
 
// Temperature Calculator
class TemperatureCalculator
{
	OutsideTempSensor mOutsideTemp;
	OccupancySensor mOccupancyTemp;
	public:
	int getTemperature()
	{
		// get outside and occupancy temperatures
		int OutsideTemp = mOutsideTemp.getOutsideTemperature();
		int OccupancyTemp = mOccupancyTemp.getOccupancyTemperature();
		//calculates current temperature
		...
		//returns current temperature
		return currentTemperature;
	}
};
 
// Temperature Regulator
class TemperatureRegulator
{
	int initialTemperatureValue;
public:
 
// regulateCurrentTemperature
void regulate (int currentTemperature)
{
	if (cuurentTemperature == initialTemperatureValue)
	{
		// do nothing
		return;
	}
	if (currentTemperature < initialTemperatureValue)
	{
		increase(currentTemperature);
	}
	else
	{
		decrease(currentTemperature);
	}
	initialTemperatureValue = currentTemperature;
}
};
 
 
// AutoClimateControlSystem
class AutoClimateControlSystem {
 
TemperatureRegulator mTempRegulator;
TemperatureCalculator mTempCalc;
 
public:
AutoClimateControlSystem():mTempRegulator(0/*initial temperature value*/),
						   mTempCalc(){
}
 
void On()
{
	std::cout << "AutoClimateControlSystem :: On" << std::endl;
	int currentTemperature = mTempCalc.getTemperature();
	mTempRegulator.regulate(currentTemperature);
}
 
void Off()
{
	std::cout << "AutoClimateControlSystem :: Off" << std::endl;
}
 
};
 
 
int main()
{
	AutoClimateControlSystem mAutoClimateControl;
	mAutoClimateControl.On();
}