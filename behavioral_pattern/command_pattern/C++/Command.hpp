#pragma once

#include "Receiver.hpp"

class Command{
public:
    Command(Receiver*);
    virtual ~Command();
	virtual void execute() = 0;

private:
    Receiver * _receiver;
};