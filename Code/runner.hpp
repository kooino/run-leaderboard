#include <iostream>
#include <string>
using namespace std;

#pragma once

class Runner
{
    public:
    float duration, distance;
    string name;

    void setInfo()
    {
        cout << "enter your name" << endl;
        cin >> name;
   
        cout << "enter distance of your run" << endl;
        cin >> distance;
   
        cout << "enter duration of your run" << endl;
        cin >> duration;
    }

    float getDistance() const 
    {
        return distance;
    }

    void displayInfo() const 
    {
        cout << "Name: " << name << ", Distance: " << distance << ", Duration: " << duration << endl;
    }
};
