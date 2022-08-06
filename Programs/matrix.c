#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, k, n, p, q, i, j, c[100][100], a[100][100], b[100][100];
    printf("enter the no of row and column of 1st matrix;\n");
    scanf("%d%d", &m, &n);
    printf("enter the no of row and column of 2nd matrix;\n");
    scanf("%d%d", &p, &q);
    if (p != n)
    {
        printf("the matrix cannot be multiplied.");
        exit(0);
    }
    else
    {
        printf("enter the elements of 1st matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("enter the elements of 2nd matrix:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nMATRIX A\n");

            for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
            {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n MATRIX B\n");
        for (i = 0; i < p; i++)
        {
            printf("\n");
            for (j = 0; j < q; j++)
            {
                printf("%d\t", b[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("\nthe product of A and B is:\n");
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
        }
    }
    return 0;
}