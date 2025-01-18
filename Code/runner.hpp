#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Runner
{
    private:
    float duration;
    float distance;
    string name;

    public:

    // function to enter runner info
    void setInfo()
    {
        cout << "enter your name" << endl;
        cin >> name;
   
        cout << "enter distance of your run" << endl;
        cin >> distance;
   
        cout << "enter duration of your run" << endl;
        cin >> duration;
    }

    // function to display info about runner
    string getName() const 
    {
        return name;
    }

    float getDistance() const 
    {
        return distance;
    }

    void save(ofstream& out) const
    {
        out << name << " " << distance << " " << duration << endl;
    }

    void load(ifstream& in)
    {
        in >> name >> distance >> duration;
    }

    friend std::istream& operator>>(std::istream& in, Runner& runner)
    {
        in >> runner.name >> runner.distance >> runner.duration;
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const Runner& runner)
    {
        out << runner.name << " " << runner.distance << " " << runner.duration;
        return out;
    }
};
