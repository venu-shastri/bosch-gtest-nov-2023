#pragma once
class ITempCalculator{
	public:
	virtual ~ITempCalculator(){}
	virtual int getTemparature()=0;
};