#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[100], temp, s;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Display Actual Array
    printf("\nGiven Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }

    // Asking for user to sort in which way
    char choice;
    printf("\nPress a for sorting in ascneding order or d for sorting in descending order: ");
    scanf(" %c", &choice); // Pichle scanf k karan problem aa rha

    // Sorting in ascending order or descending order
    switch (choice)
    {
    case 'a':
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        // Display sorted arrays
        printf("\nSorted Array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d \t", a[i]);
        }

        // Ask user what to search for
        do
        {
            printf("\nEnter a number to search(-1 to exit): ");
            scanf("%d", &s);

            // Binary Search
            int first = 0, last = n - 1, mid, tmp;

            do
            {
                mid = (first + last) / 2;

                if (a[mid] > s)
                {
                    last = mid - 1;
                }
                else if (a[mid] < s)
                {
                    first = mid + 1;
                }
            } while (a[mid] != s && first <= last);

            if (a[mid] == s)
            {
                printf("\n%d found in the list of elements \n", s);
            }
            else
            {
                printf("\n%d not found in the list of elements", s);
            }
        } while (s != -1);
        printf("\n");

        break;

    case 'd':
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        
        // Display sorted arrays
        printf("\nSorted Array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d \t", a[i]);
        }

        // Ask user what to search for
        do
        {
            printf("\nEnter a number to search(-1 to exit): ");
            scanf("%d", &s);

            // Binary Search
            int first = 0, last = n - 1, mid;

            do
            {
                mid = (first + last) / 2;

                if (a[mid] < s)
                {
                    last = mid - 1;
                }
                else if (a[mid] > s)
                {
                    first = mid + 1;
                }
            } while (a[mid] != s && first <= last);

            if (a[mid] == s)
            {
                printf("\n%d found in the list of elements \n", s);
            }
            else
            {
                printf("\n%d not found in the list of elements", s);
            }
        } while (s != -1);
        printf("\n");

        break;
    }
    return 0;
}