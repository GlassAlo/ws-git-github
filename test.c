#include <stdlib.h>
#include <stdio.h>

int print_something(int *a)
{
    printf("%d ", *a);
    return 0;
}

void flush_stdout(void)
{
    fflush(stdout);
}

int main(void)
{
    int *a = malloc(sizeof(int));
    int tmp = 0;

    for (int i = 0; i < 10; i++) {
        a += i;
        print_something(a);
    }
    tmp = *a;
    free(a);
    return tmp;
}
