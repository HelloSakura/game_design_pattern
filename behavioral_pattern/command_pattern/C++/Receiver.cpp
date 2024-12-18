#include "Receiver.hpp"
#include<iostream>
using namespace std;
Receiver::Receiver(/* args */)
{
}

Receiver::~Receiver()
{
}

void Receiver::action(string params)
{
    cout << "Receiver::action() called with params: " << params << endl;
}
