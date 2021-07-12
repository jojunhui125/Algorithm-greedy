#include <stdio.h>
int main(void)
{
    int n, sum = 0, swap;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                
            }
        }
    }
    // 1 2 3 3 4
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j <=i; j++)
        {
            sum += arr[j];
        }
    }
    printf("%d", sum);
  
    return 0;
}
