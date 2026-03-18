#include "bfs.h"
#include <stdio.h>

void bfs_enqueue(struct Queue *q, int stop)
{
    q->stops[q->rear] = stop;
    q->rear++;
}

int bfs_dequeue(struct Queue *q)
{
    int temp = q->stops[q->front];
    q->front++;
    return temp;
}

void start_bfs(int map[4][4])
{
    struct Queue radar;

    int visited[4] = {0};

    visited[0] = 1;

    printf("First stop: 0\n");

    radar.front = 0;
    radar.rear = 0;
    bfs_enqueue(&radar, 0);

    while (radar.front < radar.rear)
    {
        int current = bfs_dequeue(&radar);
        for (int i = 0; i < 4; i++)
        {
            if (map[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                printf("Destination (BFS) : %d\n", i);
                bfs_enqueue(&radar, i);
            }
        }
    }
}