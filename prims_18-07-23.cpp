#include <iostream>
using namespace std;
const int MAX = 20;

class prims
{
private:
    int min;
    int parent[MAX];
    int key[MAX];
    bool mstSet[MAX];
    int min_index;

public :
    void input();
    int minKey(int key[], bool mstSet[], int V);
    void printMST(int parent[], int graph[MAX][MAX], int V);
    void primMST(int graph[MAX][MAX], int V);
};

void prims::input()
{
int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    int graph[MAX][MAX];
    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> graph[i][j];
        }
    }

    primMST(graph, V);
}
int prims::minKey(int key[], bool mstSet[], int V)
{
    min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == false && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

void prims::printMST(int parent[], int graph[MAX][MAX], int V)
{
      cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
    {
      cout << parent[i] << " - " << i << "\t" << graph[i][parent[i]] << "\n";
    }
}

void prims::primMST(int graph[MAX][MAX], int V)
{

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet, V);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    printMST(parent, graph, V);
}
int main()
{
    prims obj;
    obj.input();
    return 0;
}
