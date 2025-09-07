#include <stdio.h>

int main(){

    int numero, i, multi;

    printf("digite qual tabuada voce quer (ex de 5): ");
    scanf("%d", &numero);

    printf("ate aonde ela vai?: ");
    scanf(" %d", &multi);

    for(i = 0; i <= multi; i++){

        printf("%d X %d = %d\n", numero, i, i*numero);
    }

    return 0;
}