#include "Command.hpp"
#include<string>

using namespace std;

class CopyCommand:public Command{
private:
    Receiver *_receiver;
    string _params;
public:
    CopyCommand(Receiver *receiver, string desc);
    virtual ~CopyCommand();
    void execute() override;
};