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
};

// Prototypes

// Main Program Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d2;
    // Use methods to set/access data
    d1.setDist(6, 6.5);
    cout<<"\nDist 1"<<endl;
    d1.showDist();

    cout<<"\nDist 2"<<endl;
    d2.setDist(3, 1.5);
    d2.showDist();
    // Update info
    d2.getDist();
    cout<<"\nDist 2"<<endl;
    d2.showDist();
    // Access a public data member
    d2.cm = 8.2;
    cout<<"cm is "<< d2.cm <<endl;



    return 0;
}
// Function Definitions