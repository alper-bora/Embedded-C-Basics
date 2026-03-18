#include <stdio.h>
#include "bfs.h"
#include "dfs.h"

int main()
{
    int map[4][4] = {0};
    map[0][1] = 1;
    map[1][0] = 1;
    map[0][2] = 1;
    map[2][0] = 1;
    map[1][3] = 1;
    map[3][1] = 1;
    map[2][3] = 1;
    map[3][2] = 1;

    while (1)
    {
        int choice;
        printf("Which algorithm would you like to try? \n");
        printf("1) Depth First Search\n");
        printf("2) Breadth First Search\n");
        printf("Press '3' to leave.");
        scanf("%d", &choice);
        if (choice == 3) break;
        switch (choice)
        {
        case 1:
            start_dfs(map);
            break;
        case 2:
            start_bfs(map);
            break;
        default:
            printf("Wrong input. Please choose an algorithim with (1) or (2).");
            continue;
        }

        for (int i = 0; i < sizeof(map[0])/sizeof(map[0][0]); i++)
        {
            for (int j = 0; j < sizeof(map[i])/sizeof(map[i][0]); j++)
            {
                printf("%d ", map[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}