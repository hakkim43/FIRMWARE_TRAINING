#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Arguments in reverse order:\n");

    for(i = argc - 1; i >= 0; i--)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
