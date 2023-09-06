#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float numero,horas,valor,salario, n;
        scanf("%f%f%f",&numero,&horas,&valor);
    
    n = numero;

    salario = (valor * horas);

    printf("NUMBER = %.f\n", n);

    printf("SALARY = R$ %.2f\n", salario);


	return 0;
}
