#include <stdlib.h>
#include <stdio.h>

int main()
{
    char a[10] = "za\0inali";
    printf("%c\n", a[3]);
}