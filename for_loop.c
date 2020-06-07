#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char eleph[11][6] = {"one" , "two" , "three","four","five","six","seven","eight","nine","even","odd"};
    int eleph_index;
    for(i=a;i<=b;i++)
    {
        eleph_index = i<=9 ? i-1 : 9+i%2;
        printf("%s\n",eleph[eleph_index]);
    }
    return 0;
}
