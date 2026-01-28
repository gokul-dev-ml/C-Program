#include <stdio.h>

int main()
{
    int a[20];
    int even[20], odd[20];
    int i, e = 0, o = 0;

    for (i = 0; i < 20; i++)
    {
        a[i] = i;
    }

    for (i = 0; i < 20; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[e] = a[i];
            e++;
        }
        else
        {
            odd[o] = a[i];
            o++;
        }
    }

    printf("Even numbers:\n");
    for (i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers:\n");
    for (i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
