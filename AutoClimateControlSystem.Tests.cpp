#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <gmock/gmock-matchers.h> 
#include "AutoClimateControlSystem.h"
#include "ITemparatureRegulator.h"
#include "ITempCalculator.h"
#include "ILogWriter.h"
#include <gmock/gmock-actions.h>
#pragma once
using  testing::_;
using testing::Eq;
using testing::Return;
class TempCalculatorTestDouble:public ITempCalculator{
    public:
   MOCK_METHOD(int, getTemparature,());
};
class TempRegulatorTestDouble:public ITemparatureRegulator{

    public:
    MOCK_METHOD(void, regulate,(int currentTemp ));
};
class LoggerTestDouble:public ILogWriter{

    public:
    int writeInvocationCount=0;
    string writeMethodArgumentValue;
    void write(string  message ){
        this->writeInvocationCount+=1;
        writeMethodArgumentValue=message;
     }
};

TEST(ACMTestSuite,InitTest){
    LoggerTestDouble loggerStub;
       TempCalculatorTestDouble calcStub;
    TempRegulatorTestDouble regulatorStub;
    AutoClimateControlSystem objUnderTest(&calcStub,&regulatorStub,&loggerStub);
    int actualValue=objUnderTest.init();
    ASSERT_EQ(actualValue,100);
}
TEST(ACMTestSuite,OnTest){
    LoggerTestDouble loggerMock;
    TempCalculatorTestDouble calcMock;
    TempRegulatorTestDouble regulatorMock;
    AutoClimateControlSystem objUnderTest(&calcMock,&regulatorMock,&loggerMock);
    EXPECT_CALL(calcMock,getTemparature()).Times(1).WillRepeatedly(Return(100));
    EXPECT_CALL(regulatorMock,regulate(Eq(100))).Times(1);
    objUnderTest.On();
    EXPECT_EQ(loggerMock.writeInvocationCount,1);
    EXPECT_EQ(loggerMock.writeMethodArgumentValue,"AutoClimateControlSystem :: On");
    
}


