#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, total = 0;

    for(i = 1; i < argc; i++)
    {
        total += strlen(argv[i]);
    }

    printf("Total characters = %d\n", total);

    return 0;
}
