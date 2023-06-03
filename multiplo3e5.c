#include <stdio.h>
int main()
{
    int num, resto, resto2;
     printf("Digite um numero e diremos se ele e multiplo de 3 e 5\n\n");
    scanf("%d", &num);
    resto = num % 3;
    resto2 = num % 5;
    if (resto==0 && resto2==0)
    {
       printf("\nO numero e divisivel pelos dois. \n");
    }
    else
    {
        printf("\nO numero nao e divisivel. \n");
    }
    
}
