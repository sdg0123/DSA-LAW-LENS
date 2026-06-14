#include <iostream>
#include <stack>
#include <string>

#include "RevisionUndo.h"

using namespace std;

void RevisionUndo::run()
{
    stack<string> versions;

    versions.push("Original Contract");
    versions.push("Added Payment Clause");
    versions.push("Added Arbitration Clause");
    versions.push("Final Draft");

    cout << "\n===== REVISION UNDO SYSTEM =====\n";

    cout << "\nCurrent Version:\n";
    cout << versions.top() << endl;

    versions.pop();

    cout << "\nAfter Undo:\n";
    cout << versions.top() << endl;

    cout << "\nTime Complexity:\n";
    cout << "Push = O(1)\n";
    cout << "Pop = O(1)\n";
}