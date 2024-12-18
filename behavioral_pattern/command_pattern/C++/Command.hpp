#pragma once

#include "Receiver.hpp"

class Command{
public:
    Command();
    virtual ~Command();
	virtual void execute() = 0;

private:
};