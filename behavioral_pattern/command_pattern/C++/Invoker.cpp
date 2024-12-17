#include"Invoker.hpp"

void Invoker::setCommand(Command* command)
{
	this->_command = command;
}

void Invoker::executeCommand()
{
    if(this->_command){
        this->_command->execute();
    }
}