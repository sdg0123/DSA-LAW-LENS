#include <iostream>
#include <queue>

#include "ComputingBalancer.h"

using namespace std;

void ComputingBalancer::run()
{
    priority_queue<int> tasks;

    tasks.push(50);
    tasks.push(90);
    tasks.push(30);
    tasks.push(75);
    tasks.push(100);

    cout << "\n===== COMPUTING BALANCER =====\n";

    cout << "\nTask Execution Order:\n";

    while(!tasks.empty())
    {
        cout << tasks.top() << endl;
        tasks.pop();
    }

    cout << "\nHighest Priority Executes First\n";
    cout << "Time Complexity: O(log n)\n";
}