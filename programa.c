#include <stdio.h>
float altura,peso_ideal;

int main()
{
    printf("Qual a sua altura?\n");
    scanf("%f",&altura);
    
    peso_ideal=(72.7*altura)-58;
    
    printf("Seu peso ideal é %.2fkg.\n",peso_ideal);

    return 0;
}
