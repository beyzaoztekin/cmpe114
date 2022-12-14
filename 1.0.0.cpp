#include <stdio.h>

void reverse (int size, int a[]);

main()
{
    int x[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
    reverse(n, x);
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%4d", x[i]);
}

void reverse(int size, int arr[])
{
    int i, temp;
    int mid = size / 2;

    for (i = 0; i < mid; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}
