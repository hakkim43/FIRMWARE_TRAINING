#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
        printf("Last argument = %s\n", argv[argc - 1]);
    else
        printf("No command-line argument provided.\n");

    return 0;
}
