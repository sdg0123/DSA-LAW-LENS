#include <iostream>
#include <unordered_map>
#include <vector>

#include "CaseLawNetwork.h"

using namespace std;

void CaseLawNetwork::run()
{
    unordered_map<string, vector<string>> graph;

    graph["CaseA"].push_back("CaseB");
    graph["CaseA"].push_back("CaseC");
    graph["CaseB"].push_back("CaseD");
    graph["CaseC"].push_back("CaseE");

    cout << "\n===== CASE LAW NETWORK =====\n";

    for(auto &node : graph)
    {
        cout << node.first << " -> ";

        for(string neighbor : node.second)
        {
            cout << neighbor << " ";
        }

        cout << endl;
    }

    cout << "\nGraph Representation Using Adjacency List\n";
    cout << "Time Complexity: O(V + E)\n";
}