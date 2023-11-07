#include "ITempCalculator.h"
#include "OccupancySensor.h"
#include "OutsideTempSensor.h"
// TempCalculator imlements ITempCalculator
class TempCalculator:public ITempCalculator {
 
protected:
 OutsideTempSensor ots; // Type
 OccupancySensor ops;//Type
public:
int getTemparature();

 };