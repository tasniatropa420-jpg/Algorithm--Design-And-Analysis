#include <stdio.h>

#define V 5 // Number of vertices in the graph

// Initialize the matrix to 0
void initMatrix(int arr[][V]) {
    int i, j;
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            arr[i][j] = 0;
        }
    }
}

// Add edges to the graph (Undirected Graph)
void addEdge(int arr[][V], int src, int dest) {
    arr[src][dest] = 1;
    arr[dest][src] = 1; // Remove this line if the graph is Directed
}

// Print the adjacency matrix
void printMatrix(int arr[][V]) {
    int i, j;
    printf("Adjacency Matrix:\n");
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int adjMatrix[V][V];

    initMatrix(adjMatrix);

    // Creating edges between vertices
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 4);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 4);

    printMatrix(adjMatrix);

    return 0;
}