#include<stdio.h>


main(){
		
	float  n, area=0 ;
	float  *ps, *pa ;

	printf(" Enter number : ") ;
	scanf("%f",&n) ;

	ps = &n;
	pa = &area;

	area = (*ps) * (*ps) ;
	printf("\n Area of square is : %f ",*pa) ;

}
