#include <iostream>
#include "runner.hpp"
#include "leaderboard.hpp"
using namespace std;

int main() 
{
    Leaderboard leaderboard;
    string filename = "leaderboard.txt";

    leaderboard.load(filename);
    
    for(int i = 0; i < 10; ++i)
    {
        Runner runner;
        runner.setInfo();

        leaderboard.addRunner(runner);
        leaderboard.sortLeaderboard();
        leaderboard.display();
    }

    leaderboard.save(filename);
    
    return 0;
}

