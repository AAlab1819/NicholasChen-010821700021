#include <bits/stdc++.h>

using namespace std;
bool visited[401];
int distanceToSource[401];
int adjMatrix[401][401];
int town, railway, to, fro;
void BFS(bool train)
{
    for(int i = 0; i < 401; i++)
    {
        distanceToSource[i] = INT_MAX; //value 2147483647
        visited[i] = false;
    }
    queue <int> q;
    q.push(1);
    visited[1] = true;
    distanceToSource[1] = 0;
    while(!q.empty())
    {
        to = q.front();
        q.pop();
        for(int i = 1; i <= town; i++)
        {
            if(train)
            {
                if(adjMatrix[to][i] == 1 && visited[i] == false)
                {
                    q.push(i);
                    visited[i] = true;
                    distanceToSource[i] = distanceToSource[to] + 1;
                    if(i == town) return;
                }
            } else {
                if(adjMatrix[to][i] == 0 && visited[i] == false)
                {
                    q.push(i);
                    visited[i] = true;
                    distanceToSource[i] = distanceToSource[to] + 1;
                    if(i == town) return;
                }
            }
        }
    }
}
int main()
{
    int train = 0, bus = 0;
    cin >> town >> railway;
    memset(adjMatrix, 0, sizeof(adjMatrix));
    for(int i = 0; i < railway; i++)
    {
        cin >> to >> fro;
        adjMatrix[to][fro] = 1;
        adjMatrix[fro][to] = 1;
    }
    if(adjMatrix[1][town] == 1)
        train = 1;
    else
        bus = 1;
    if(train)
    {
        BFS(false);
        bus = distanceToSource[town];
    } else {
        BFS(true);
        train = distanceToSource[town];
    }
    int answer = max(bus, train);
    if(answer == INT_MAX)
        cout << -1;
    else cout << answer;
    return 0;
}
