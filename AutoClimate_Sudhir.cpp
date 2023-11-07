
float getTemperature {

	float CurrentTempValue = tempCalculator();

	return CurrentTempValue;

}
 
 
float tempCalculator () {

float outsidetempValue     = getOutsideTempSensorValue();

float occupancySensorValue = getOccupancySensorValue();
 
//some logic to calculate the final temp value based on outsidetempValue and occupancySensorValue

float finalTempValue = outsidetempValue - occupancySensorValue;
 
return finalTempValue;	

}
 
float getOutsideTempSensorValue() {

	float outsideTempValue = //some interface to get value from HW sensor

	return outsideTempValue;

}
 
float getOccupancySensorValue () {

		float occupancySensorValue = //some interface to get value from HW internal sensor

		return occupancySensorValue

}
 
 
void temperatureRegulator(currentTemp) {

	float intitialTemp = 20.0;

	float increaseTemp = currentTemp +1;

	float decreaseTemp = currentTemp -1;

	// The logic to control the HW goes here to turn on/off, increase/decrease the temp

}
 
 
class AutoClimateControlSystem {
 
 public:
void on {

	float currentTemp = getTemperature();

	temperatureRegulator(currentTemp);

}
 
void off {

	float currentTemp = getTemperature();

	temperatureRegulator(currentTemp);

}
 
};
 
