#include"CopyCommand.hpp"
#include<iostream>

using namespace std;

CopyCommand::CopyCommand(Receiver *receiver, string params):
_receiver(receiver),
_params(params)
{
    cout << "CopyCommand::init()" << endl;
}

void CopyCommand::execute()
{
    cout << "CopyCommand::execute()" << endl;
    this->_receiver->action(this->_params);
}