#include <iostream>
#include <list>
using namespace std;

void printAdj(list<int> adj[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (auto it = adj[i].begin(); it != adj[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}

void addPoint(list<int>* adj, int n)
{
    adj[n] = list<int>{};
}

void deletePoint(list<int>* adj, int n)
{
    adj[n] = list<int>{};
    for (int i = 1; i < 10; i++)
        adj[i].remove(n);
}

void addEdge(list<int>* adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}


void deleteEdge(list<int>* adj, int u, int v)
{
    adj[u].remove(v);
    adj[v].remove(u);
}

int main()
{
    list<int> adj[10] = {
        list<int>{},
        list<int>{3},
        list<int>{2, 3},
        list<int>{1, 4, 5},
        list<int>{2, 6},
        list<int>{3, 1}
    };
    printAdj(adj, 5);
    cout << endl;
    addPoint(adj, 7);
    addEdge(adj, 2, 7);
    deletePoint(adj, 3);
    deleteEdge(adj, 1, 4);
    printAdj(adj, 7);
    return 0;
}
