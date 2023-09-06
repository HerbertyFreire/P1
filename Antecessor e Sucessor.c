#include <stdio.h>
int main() {
    int numero, antecessor, sucessor;

    printf(" ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("%d %d\n", antecessor, sucessor);

    return 0;
}
