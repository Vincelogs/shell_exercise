#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    int t[4];
    int i;

    for(i=0; i<4; i++)
        scanf("%d", &t[i]);
    for(i=0; i<4; i++)
        printf("%d\n", t[i]);

    return 0;
}
