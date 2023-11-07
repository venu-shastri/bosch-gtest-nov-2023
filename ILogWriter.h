#include <string>
#pragma once

using namespace std;
class ILogWriter{
    public:
    virtual ~ILogWriter(){}
    virtual void write(string message)=0;
};