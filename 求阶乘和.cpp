#include <stdio.h>
main()
{  	   	
    int   i, n;
    int  p = 1;
    int endValue = 0; 
    printf("Please enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {  	   	
        p = p * i;
        endValue += p;
    }
    printf("%d",endValue);
}  	   	
