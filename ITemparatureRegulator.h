 #pragma once
 //interface
  class ITemparatureRegulator{
      public:
      virtual ~ITemparatureRegulator(){}
	  virtual void regulate(int currentTemp )=0;
 };