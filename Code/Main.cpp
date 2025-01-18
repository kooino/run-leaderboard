#include <iostream>
#include "runner.hpp"
#include "leaderboard.hpp"
using namespace std;

int main() 
{
    Leaderboard leaderboard;
    
    for(int i = 0; i < 10; ++i)
    {
        Runner runner;
        runner.setInfo();

        leaderboard.addRunner(runner);
        leaderboard.sortLeaderboard();
        leaderboard.display();
    }
    
    return 0;
}

