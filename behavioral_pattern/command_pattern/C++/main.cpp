#include<iostream>
#include"Command.hpp"
#include"Invoker.hpp"
#include"Receiver.hpp"
#include"CopyCommand.hpp"


using namespace std;

int main(void)
{  
    Receiver * receiver = new Receiver();
    Command *cmd = new CopyCommand(receiver, "copy command");
    Invoker *invoker = new Invoker();
    invoker->setCommand(cmd);
    invoker->executeCommand();

    return 0;
}