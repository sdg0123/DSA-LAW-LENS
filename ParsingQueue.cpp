#include <iostream>
#include <queue>
#include <string>

#include "ParsingQueue.h"

using namespace std;

void ParsingQueue::run()
{
    queue<string> contracts;

    contracts.push("Employment Contract");
    contracts.push("NDA Agreement");
    contracts.push("Vendor Agreement");
    contracts.push("Lease Agreement");

    cout << "\n===== PARSING QUEUE =====\n";

    cout << "\nContracts Waiting For Analysis:\n";

    while(!contracts.empty())
    {
        cout << contracts.front() << endl;
        contracts.pop();
    }

    cout << "\nTime Complexity:\n";
    cout << "Enqueue = O(1)\n";
    cout << "Dequeue = O(1)\n";
}