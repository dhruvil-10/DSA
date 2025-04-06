#include <stdio.h>
int main()
{
    int a[100][100], i, j;
    printf("Enter the elements of matrix a:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix you entered is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int key;
    scanf("%d", &key);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == key)
            {
                printf("number is on a[%d][%d] ", i, j);
            }
        }
    }
}
