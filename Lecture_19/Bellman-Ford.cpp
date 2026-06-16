#include <iostream>
#include <vector>
using namespace std;

struct Edge
{
    int u, v, w;
};

int main()
{
    int V = 4;

    vector<Edge> edges =
    {
        {0,1,4},
        {0,2,5},
        {1,2,-2},
        {2,3,3}
    };

    vector<int> dist(V, 1e9);

    int source = 0;
    dist[source] = 0;

    for(int i=1;i<=V-1;i++)
    {
        for(auto e : edges)
        {
            if(dist[e.u] != 1e9 &&
               dist[e.u] + e.w < dist[e.v])
            {
                dist[e.v] =
                dist[e.u] + e.w;
            }
        }
    }

    bool negativeCycle = false;

    for(auto e : edges)
    {
        if(dist[e.u] != 1e9 &&
           dist[e.u] + e.w < dist[e.v])
        {
            negativeCycle = true;
        }
    }

    if(negativeCycle)
    {
        cout<<"Negative Cycle Found";
    }
    else
    {
        cout<<"Shortest Distances:\n";

        for(int i=0;i<V;i++)
            cout<<"Node "<<i
                <<" = "<<dist[i]<<endl;
    }

    return 0;
}