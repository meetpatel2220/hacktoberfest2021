#include <stdio.h>

int main()
{
    int i, x, n;
    printf("Enter the no. of element : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements separated by space : ");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    printf("Enter the element to be searched :");
    scanf("%d", &x);

    for (i = 0; i < n; ++i)
        if (a[i] == x)
            break;

    if (i < n)
        printf("Element found at index %d\n", i);
    else
        printf("Element NOT FOUND\n");

    return 0;
}