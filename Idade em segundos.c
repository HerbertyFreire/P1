#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x,y,z;
    scanf("%d",&x);
    
    y = 365 * 24 * 60 * 60;
    z = x * y;
    
    printf("%d\n", z);
    
    
    
	return 0;
}
