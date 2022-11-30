#include<stdio.h>

main()
{
    int n;
	int numb;
	int min;
	int max;
	int sum; 
	   
    printf("Enter kol-vo chisel: ");
    scanf("%i",&n);
    printf("Enter first number: ");
    scanf("%i", &numb);
    
    min = numb;
    max = numb;
    sum = numb;
    for(int i = 0; i < n-1; i++)
    {
        printf("Enter next number: ");
        scanf("%i", &numb);
        if (min > numb)
        {
            min = numb;
        }
        if (max < numb)
        {
            max = numb;
        }
        sum = sum + numb;
    }    
    printf("min=%i\nmax=%i\nsum=%i\navg=%f\n", min, max, sum, ((float)sum / (float)n));
}
