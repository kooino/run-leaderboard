#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include "runner.hpp" 
using namespace std;

class Leaderboard
{
    private:
    vector <Runner> runners;

    public:

    void addRunner(const Runner& r)
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

    void display()
    {
        for (const auto& runner : runners)
        {
            cout << runner.getName() << " - " << runner.getDistance() << " km" << endl;
        }
    }

    void save (const string& filename) const
    {
        ofstream out(filename);
        for (const auto& runner : runners)
        {
            runner.save(out);
        }
    }

    void load (const string& filename)
    {
        ifstream in (filename);
        Runner runner;
        while (in >> runner)
        {
            runners.push_back(runner);
        }
    }
};