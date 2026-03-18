#include "dfs.h"
#include <stdio.h>

void dfs_push(struct Stack* s, int stop)
{
    s->stops[s->head_stop] = stop;
    s->head_stop++;
}

int dfs_pop(struct Stack* s)
{
    s->head_stop--;
    return s->stops[s->head_stop];
}

void start_dfs(int map[4][4])
{
    struct Stack memory;

    memory.head_stop = 0;

    int visited[4] = {0};

    visited[0] = 1;

    printf("First stop: 0\n");

    dfs_push(&memory, 0);
    while (memory.head_stop > 0)
    {
        int current = memory.stops[memory.head_stop - 1];
        int found = 0;
        for (int i = 0; i < 4; i++)
        {
            if (map[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                found = 1;
                printf("Destination (DFS) : %d\n", i);
                dfs_push(&memory, i);
                break;
            }
        }
        if (found == 0)
        {
            dfs_pop(&memory);
        }
    }
}
