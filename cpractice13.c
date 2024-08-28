#include <stdio.h>
int main()
{
    int array[5];
    int position, c, n;    
    printf("Enter number of elements in array\n");
    scanf("%d", &n);   
    printf("Enter %d elements\n", n);   
    for ( c = 0 ; c < n ; c++ )
    scanf("%d", &array[c]);    
    printf("Enter the  position element\n");
    scanf("%d", &position);   
    if ( array[position]=1 )    
    printf("Odd.\n");   
    else
   printf("Even");
    return 0;
}