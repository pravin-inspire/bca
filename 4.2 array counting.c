#include <stdio.h>

int main()
{
    int n, m;
    int a[101] = {0};  // Initialize all elements to 0

    printf("Enter the number of marks: ");
    scanf("%d", &n);

    printf("Enter the marks (0 to 100):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m >= 0 && m <= 100)
        {
            a[m]++;
        } else
        {
            printf("Invalid mark: %d\n", m);
        }
    }

    printf("Marks frequency distribution:\n");
    for (int i = 0; i <= 100; i++)
    {
        if (a[i] > 0)
        {
            printf("Mark %d: %d times\n", i, a[i]);
        }
    }

    return 0;
}
