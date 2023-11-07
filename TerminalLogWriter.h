#include "ILogWriter.h"
#include <iostream>

class TerminalLogWriter:public ILogWriter{

public:
    void write(string message){
        std::cout<<message;
    }
}