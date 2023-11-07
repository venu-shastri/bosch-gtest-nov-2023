
#include <iostream>
 
using namespace std;
 
struct temp_sensor

{

	float temp_Sensor;

	float occupancy_sensor;

};
 
class TempCalculator

{

	public:

		temp_sensor sensor_obj;

		temp_sensor getTemperature()

		{ 

			sensor_obj.temp_Sensor = outsidetempsensor();

			sensor_obj.occupancy_sensor = occupancysensor();

			return sensor_obj;

		}

		int outsidetempsensor()

		{

		    return 0;

		}

		int occupancysensor()

		{

		    return 0;

		}

};
 
 
class TempperatureRegulator

{

	public:

	int outside_temp_current;

	int occupancy_temp_current;
 
	void initialvalue(temp_sensor c_temp)

	{

		outside_temp_current = c_temp.temp_Sensor;

		occupancy_temp_current= c_temp.occupancy_sensor;

	}

	void increaes()

	{

		outside_temp_current = outside_temp_current +1; 

		occupancy_temp_current =occupancy_temp_current +1;

	}

	void decrease()

	{

		outside_temp_current = outside_temp_current -1;

		occupancy_temp_current = occupancy_temp_current -1;

	}

};
 
 
class AutoClimateControlSystem                                                    

{

private:	

	TempCalculator obj1;

	TempperatureRegulator obj2;
 
public:

	AutoClimateControlSystem(){}
 
	void on()                                              

	{

		temp_sensor current_temp = obj1.getTemperature();

		obj2.initialvalue(current_temp);

		obj2.increaes();

		obj2.decrease();

	}
 
	void off()                                             

	{

	}

};
 
int main()

{

	AutoClimateControlSystem obj;

	obj.on();

	obj.off();

}