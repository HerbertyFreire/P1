#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double media (double a, double b){
    return( a * 3.5 + b * 7.5) / ( 3.5 + 7.5) ;
} 


int main() {
    
    double x, y, z;
    scanf("%lf%lf", &x, &y);
    z = media (x,y);
    
    printf ( "MEDIA = %.5lf\n",z);
    
    
	return 0;
}
