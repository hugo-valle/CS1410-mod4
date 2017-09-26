// File: distanceClass
// Created by Hugo Valle on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
/* Task: Define a class Distance
 * that stores int feet and float inches
 * Two methods: setDist -> Set the information
 *              getDist -> Set the information with customer input
 *              showDist -> Display values
 */
// Constants, Structs, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
    /* Constructor with no arguments */
    Distance(): feet(0), inches(0)
    {/*empty body*/}
    /* Constructor with two arguments */
    Distance(int ft, float in): feet(ft), inches(in)
    {/*empty body*/}

    void setDist(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getDist()  // get user input
    {
        cout<<"\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showDist()     // display information
    {
        cout <<"Feet "<<feet<<" and inches "<<inches<<endl;
    }
    void add_dist(Distance d1, Distance d2);
};

// Prototypes

// Main Program Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    cout<<"\nd1 = ";
    d1.showDist();
    Distance d2(8, 2);
    Distance d3(2, 4);
    cout<<"\nd2 = ";
    d2.showDist();
    cout<<"\nd3 = ";
    d3.showDist();
    d4.add_dist(d2, d3);
    cout<<"\nd4 = ";
    d4.showDist();

    return 0;
}
// Function Definitions
/* Belongs to the class. A method for members only
 * Template: type CLASSNAME::Function_name()
 * 1) Declare prototype inside class
 * 2) Definition is outside class
 * 3) Use the scope resolution operator :: */
void Distance::add_dist(Distance d1, Distance d2)
{
    inches = d1.inches + d2.inches;     // add the inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;                 // check for extra foot
    }
    feet += d1.feet + d2.feet;  // add feet
}
