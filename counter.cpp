// File: counter
// Created by Hugo Valle on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Counter
{
private:
    unsigned int count;

public:
    // Constructor
    Counter(): count(100)
    {/*empty body*/}
    void incCount()     // Increment count
    {
        count++;
    }
    int getCount()     // return count
    {
        return count;
    }
};
// Prototypes
// Main Program Program
int main()
{
    Counter c1, c2;

    cout<<"\nc1="<<c1.getCount(); // display
    c1.incCount();                  // increment c1
    cout<<"\nc1="<<c1.getCount(); // display

    cout<<"\nc2="<<c2.getCount(); // display
    c2.incCount();                  // increment c1
    cout<<"\nc2="<<c2.getCount(); // display
    return 0;
}
// Function Definitions