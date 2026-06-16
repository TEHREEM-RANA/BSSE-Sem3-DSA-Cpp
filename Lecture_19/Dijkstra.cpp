#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int V = 5;

    vector<pair<int,int>> graph[5];

    graph[0].push_back({1,4});
    graph[0].push_back({2,1});
    graph[2].push_back({1,2});
    graph[1].push_back({3,1});
    graph[2].push_back({3,5});

    vector<int> dist(V, 1e9);

    priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
    > pq;

    dist[0] = 0;

    pq.push({0,0});

    while(!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for(auto edge : graph[node])
        {
            int next = edge.first;
            int weight = edge.second;

            if(dist[node] + weight < dist[next])
            {
                dist[next] = dist[node] + weight;
                pq.push({dist[next], next});
            }
        }
    }

    cout<<"Shortest Distances:\n";

    for(int i=0;i<V;i++)
        cout<<"Node "<<i<<" = "<<dist[i]<<endl;

    return 0;
}