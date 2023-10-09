#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter rows: ");
    scanf("%d", &rows);
    
    printf("Enter cols: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Max is %d\n", max);

    return 0;
}