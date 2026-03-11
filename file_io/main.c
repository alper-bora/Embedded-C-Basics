#include <stdio.h>

int main_fileio()
{
    FILE * log_file = fopen("car_log.txt", "r");

    if (log_file == NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    char arr[255];

    while (fgets(arr, 255, log_file) != NULL)
    {
        printf("%s", arr);
    }
    fclose(log_file);
    return 0;
}