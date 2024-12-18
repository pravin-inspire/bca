#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    j = 1;  // Initialize unique element count

    for (i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1]) // Compare successive pairs of elements
        {
            a[j] = a[i];  // Move later element to position determined by unique element count
            j++;
        }
    }

    printf("Unique element count: %d\n", j);
    printf("Array with unique elements:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
