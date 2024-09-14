#include <stdio.h>
void findCubes(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            printf("Total of arr[%d][%d] = %d\n", i, j, (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j)));
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes((int *)arr, rows, cols);
    return 0;
}
