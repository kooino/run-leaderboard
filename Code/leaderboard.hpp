#include <iostream>
#include <algorithm>
#include <vector>
#include "runner.hpp" 
using namespace std;

#pragma once

class Leaderboard
{
    private:
    vector <Runner> runners;

    public:

    void addRunner(const Runner& r) {}
    {
        runners.push_back(r);
    }
           
    void sortLeaderboard()
    {
        sort (runners.begin(), runners.end(), [](const Runner& a, const Runner& b)
        {
            return a.getDistance() >b.getDistance();
        });
    }

    void display() const
    {
        for (const auto& runner : runners)
        {
            cout << runner.getName() << " - " << runner.getDistance() << " km" << endl;
        }
    }

};