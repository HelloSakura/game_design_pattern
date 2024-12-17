#include"Command.hpp"

class Invoker
{
private:
    Command *_command;
public:
    void setCommand(Command *);
    void executeCommand();
    
};

