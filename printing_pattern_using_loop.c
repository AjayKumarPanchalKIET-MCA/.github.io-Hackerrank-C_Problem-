#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    
    int x=n*2 - 1;
  
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            int min = i < j ? i : j;
            min = min < x-i ? min : x - i - 1;
            min = min < x - j - 1 ? min : x - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }

  	// Complete the code to print the pattern.
    return 0;
}
