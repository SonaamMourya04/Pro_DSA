#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numNodes, numEdges;
    cin >> numNodes >> numEdges;

    // nodeValues[i] stores the value written on node i
    vector<int> nodeValues(numNodes + 1);
    for (int i = 1; i <= numNodes; i++) {
        cin >> nodeValues[i];
    }

    // Adjacency list representation of graph
    vector<vector<int>> graph(numNodes + 1);
    for (int i = 0; i < numEdges; i++) {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    // Distance array (initialized to infinity)
    vector<int> minDistance(numNodes + 1, INT_MAX);

    // maxFives[i] = maximum count of 5's on any shortest path to node i
    vector<int> maxFives(numNodes + 1, INT_MIN);

    // visited[i] = whether node i has been processed in BFS
    vector<bool> visited(numNodes + 1, false);

    // Start BFS from node 1
    minDistance[1] = 0;
    maxFives[1] = (nodeValues[1] == 5 ? 1 : 0);

    queue<int> bfsQueue;
    bfsQueue.push(1);
    visited[1] = true;

    while (!bfsQueue.empty()) {
        int current = bfsQueue.front();
        bfsQueue.pop();

        // Explore all neighbors of the current node
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                // First time visiting this neighbor → assign distance and fives
                minDistance[neighbor] = minDistance[current] + 1;
                maxFives[neighbor] = maxFives[current] + (nodeValues[neighbor] == 5 ? 1 : 0);
                visited[neighbor] = true;
                bfsQueue.push(neighbor);
            } 
            else if (minDistance[neighbor] == minDistance[current] + 1) {
                // If we find another shortest path to 'neighbor'
                maxFives[neighbor] = max(
                    maxFives[neighbor], 
                    maxFives[current] + (nodeValues[neighbor] == 5 ? 1 : 0)
                );
            }
        }
    }

    // Output result for every node
    for (int i = 1; i <= numNodes; i++) {
        if (!visited[i]) {
            // Node unreachable → -1 fives count
            cout << i << ":" << minDistance[i] << " -1\n";
        } else {
            cout << i << ":" << minDistance[i] << " " << maxFives[i] << "\n";
        }
    }

    return 0;
}
