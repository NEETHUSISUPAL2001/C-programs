#include <stdio.h>

int main()
{
    int size;
    printf("Enter total size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse array elements are:\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
