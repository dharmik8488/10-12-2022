#include <stdio.h>
 
main(){
	
   	int x, y, *a, *b, temp;
 
   	printf("Enter the value of x:-");
   	scanf("%i", &x);
   
	printf("Enter the value of y:-");
   	scanf("%i", &y);
 
	a = &x;
    b = &y;
 
    temp = *b;
    *b = *a;
    *a = temp;
 
    printf("Swapping\nx = %i\ny = %i\n", x, y);

}
