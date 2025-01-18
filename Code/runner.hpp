#include <iostream>
using namespace std;

#pragma once

class runner
{
    public:
    float duration, distance;
    string name;

    pragma once;

    void setInfo()
    {
        cout << "enter your name" << endl;
        cin >> name;
   
        cout << "enter distance of your run" << endl;
        cin >> distance;
   
        cout << "enter duration of your run" << endl;
        cin >> duration;
    }

    runner(string name, float distance, float duration)
        name(runnerName), duration(runnerDistance), distance(runnerDistance){} 

    string getName() const {return name;}
    float getDistance() const {return distance;}
    float getDuration() const {return duration;}

    void setName (const string& newName) { name = newName; }
    void setDistance (float newDistance) { distance = newDistance; }
    void setDuration (float newDuration) { duration = newDuration; }


    private:
};
