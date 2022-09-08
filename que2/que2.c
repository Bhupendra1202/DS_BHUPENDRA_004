#include <stdio.h>
int main()
{
    int i, j, temp, n;

    printf("Enter the size of array\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the value of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n - 1; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[i];
            j--;
        }
        a[j + 1] = temp;
    }


printf("Sorted array is :");

for(i = 0; i < n; i++)
{
    printf("%d\t", a[i]);
}
}