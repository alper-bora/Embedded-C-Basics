#ifndef EMBEDDED_C_BASICS_DFS_H
#define EMBEDDED_C_BASICS_DFS_H

struct Stack
{
    int stops[10];
    int head_stop;
};

void dfs_push(struct Stack* s, int stop);
int dfs_pop(struct Stack* s);
void start_dfs(int map[4][4]);

#endif //EMBEDDED_C_BASICS_DFS_H