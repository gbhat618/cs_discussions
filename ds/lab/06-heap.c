#include <stdio.h>
#include <stdlib.h>

void heapify(int a[10], int n)
{
    int i, k, v, j, flag = 0;
    for (i = n / 2; i >= 1; i--)
    // total 7 elements ==> n / 2 ==> 7 / 2 = 3.5 ==> 3
    // []  9  3  7  2  1  5  4 
    // ------------------------
    //  0  1  2  3  4  5  6  7
    //  left child ==> 2 * k  ==> 2 * 3 = 6
    //  right child ==> 2 * k + 1 ==> 2 * 3 + 1 = 7
    {
        k = i; // 1
        v = a[k]; // 2
        while (!flag && 2 * k <= n)
        {
            j = 2 * k; // left child idx // 4
            if (j < n)
            {
                if (a[j] < a[j + 1])
                    // 9  <  7
                    j = j + 1; // right child idx // 5
            }
            if (v >= a[j])  // 2 >= 3
                flag = 1;
            else
            {
                a[k] = a[j]; // 
                k = j;   // 4
            }
        }
        a[k] = v;
        flag = 0;
    }
}

int main()
{
    int n, i, a[10], ch;
    for (;;)
    {
        printf("\n 1. Create Heap");
        printf("\n 2. Extractmax");
        printf("\n 3. Exit");
        printf("\n Read Choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Read no of elements :");
            scanf("%d", &n);
            printf("\n Read Elements\n");
            for (i = 1; i <= n; i++)
                scanf("%d", &a[i]);
            heapify(a, n);
            printf("\n Elements after heap\n");
            for (i = 1; i <= n; i++)
                printf("%d\t", a[i]);
            break;
        case 2:
            if (n >= 1)
            {
                // [] 4  3  7  2  1  5 ||| 4
                printf("\n Element deleted is %d\n", a[1]);
                a[1] = a[n];
                n = n - 1; // 6
                heapify(a, n);
                if (n != 0)
                {
                    printf("\n Elements after reconstructing heap\n");
                    for (i = 1; i <= n; i++)
                        printf("%d\t", a[i]);
                }
            }
            else
                printf("\n No element to delete");
            break;
        default:
            exit(0);
        }
    }
}
return0;