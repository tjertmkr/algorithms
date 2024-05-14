#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int mat[MAX_SIZE][MAX_SIZE] = { 0 };
    int transposedMat[MAX_SIZE][MAX_SIZE] = { 0 };
    int rows, cols, i, j;

    printf("Rows="); 
    scanf("%d", &rows);
    printf("Columns=");
    scanf("%d", &cols);

    printf("Enter Matrix=\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nResultant matrix=\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            transposedMat[i][j] = mat[j][i];
        }
    }
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transposedMat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
