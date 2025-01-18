#include <iostream>
using namespace std;

#pragma once

class Leaderboard
{
    private:
    vector <runner> runners;

    public:

    void addRunner(const Runner& runner)
    {
        runners.push_back(runner);
    }
           
    void sortLeaderboard()
    {
        sort(runners.begin()), runners.end(), [](const Runner& a, const Runner& b)
        {
            return a.getDistance() >b.getDistance();
        });
    }

    void display() const
    {
        for (const auto& runner : runners)
        {
            cout << runner.getName() << " - " << runner.getDistance << " km" << endl;
        }
    }

};