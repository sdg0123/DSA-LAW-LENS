#include <iostream>
#include <set>

#include "LawCheck.h"

using namespace std;

void LawCheck::run()
{
    set<int> laws;

    laws.insert(138);
    laws.insert(302);
    laws.insert(420);
    laws.insert(499);
    laws.insert(120);

    int lawNumber;

    cout << "\n===== LAW CHECK =====\n";

    cout << "\nAvailable Laws:\n";

    for(int law : laws)
    {
        cout << law << " ";
    }

    cout << "\n\nEnter Law Number To Search: ";
    cin >> lawNumber;

    if(laws.find(lawNumber) != laws.end())
    {
        cout << "\nLaw Found.\n";
    }
    else
    {
        cout << "\nLaw Not Found.\n";
    }

    cout << "\nTime Complexity: O(log n)\n";
}