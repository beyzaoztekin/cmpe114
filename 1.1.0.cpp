#include <stdio.h>



int main()
{
    int x[100], n, i,mid,temp;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
    
    mid = n / 2;

    for (i = 0; i < mid; i++)
    {
        temp = x[i];
        x[i] = x[n-i-1];
        x[n-i-1] = temp;
          printf("Reversed array: ");
  
    }
    	for (i = 0; i < n; i++)
        printf("%4d", x[i]);
        
        return 0;
	}
  



