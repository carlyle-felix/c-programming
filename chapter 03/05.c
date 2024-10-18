#include <stdio.h>

int main(void){

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, row1, row2, row3, row4, col1, col2, col3, col4, diag1, diag2;

    printf("Enter the numbers from 1 to 16 in any order:    "),
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p),

    // print 4 x 4 arrangement
    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", e, f, g, h);
    printf("%d %d %d %d\n", i, j, k, l);
    printf("%d %d %d %d\n", m, n, o, p);

    // row sums
    row1 = a + b + c + d;
    row2 = e + f + g + h;
    row3 = i + j + k + l;
    row4 = m + n + o + p;

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);

    // column sums
    col1 = a + e + i + m;
    col2 = b + f + j + n;
    col3 = c + g + k + o;
    col4 = d + h + l + p;

    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);

    // diagonal sums:
    diag1 = a + f + k + p;
    diag2 = m + j + g + d;

    printf("Diagonal sums: %d %d\n", diag1, diag2);

    return 0;
}