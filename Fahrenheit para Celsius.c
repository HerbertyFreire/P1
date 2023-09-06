#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    double x, G;

    scanf("%lf", &x);
    
    G = (x - 32)/1.8;
    
    printf( "%.2lf\n",G);
    
    
    
	return 0;
}
