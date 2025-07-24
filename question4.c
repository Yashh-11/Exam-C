#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] : ", i);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("\nSum of array elements = %d\n", sum);

    return 0;
}
