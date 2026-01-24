#include <stdio.h>
#include <stddef.h>

struct s {
    char a;
    int b[2];
    float c;
} s;

int main(void)
{
    printf("size of structure: %ld\n", sizeof(struct s));
    printf("size of a: %ld\n", sizeof(s.a));
    printf("size of b: %ld\n", sizeof(s.b));
    printf("size of c: %ld\n", sizeof(s.c));
    printf("\n");
    printf("offset of a: %ld\n", offsetof(struct s, a));
    printf("offset of b: %ld\n", offsetof(struct s, b));
    printf("offset of c: %ld\n", offsetof(struct s, c));

    return 0;
}

/*
    there's a hole between a and b, size: 3.
*/