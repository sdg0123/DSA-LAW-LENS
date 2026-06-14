#include <iostream>
#include <vector>
#include <queue>

#include "FastestPrecedent.h"

using namespace std;

void FastestPrecedent::run()
{
    vector<vector<pair<int,int>>> graph(5);

    graph[0].push_back({1,4});
    graph[0].push_back({2,2});
    graph[2].push_back({1,1});
    graph[1].push_back({3,5});
    graph[2].push_back({3,8});
    graph[3].push_back({4,3});

    vector<int> dist(5, 1e9);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[0] = 0;

    pq.push({0,0});

    while(!pq.empty())
    {
        int node = pq.top().second;
        int cost = pq.top().first;

        pq.pop();

        for(auto edge : graph[node])
        {
            int next = edge.first;
            int weight = edge.second;

            if(cost + weight < dist[next])
            {
                dist[next] = cost + weight;
                pq.push({dist[next], next});
            }
        }
    }

    cout << "\n===== FASTEST PRECEDENT =====\n";

    cout << "\nShortest Citation Distance:\n";

    for(int i=0;i<5;i++)
    {
        cout << "Case " << i
             << " = "
             << dist[i]
             << endl;
    }

    cout << "\nDijkstra Algorithm\n";
    cout << "Time Complexity: O(E log V)\n";
}