#include "ITemparatureRegulator.h"
class TemparatureRegulator:public ITemparatureRegulator
{
protected:
int initial_temp;
public:
 
void regulate(int currentTemp);

private:
void increase(){
 
	initial_temp =  initial_temp + 1;
}
void decrease(){
 
	initial_temp =  initial_temp - 1;
}
 
};
 