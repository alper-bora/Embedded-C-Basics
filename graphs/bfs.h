#ifndef EMBEDDED_C_BASICS_BFS_H
#define EMBEDDED_C_BASICS_BFS_H

struct Queue
{
    int stops[10];
    int front; // reading end
    int rear; // writing end
};

void bfs_enqueue(struct Queue* q, int stop);
int bfs_dequeue(struct Queue* q);
void start_bfs(int map[4][4]);

#endif //EMBEDDED_C_BASICS_BFS_H