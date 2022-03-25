#include <stdio.h>
#include <stdlib.h>

int main()
{
    float RAIO;
    printf("OLA USUARIO INSIRA O VALOR DO RAIO!\n");
    scanf("%f",&RAIO);
    printf("O VOLUME TOTAL DA ESFERA EH: %.3f",(((float)4/3)*3.14159*(RAIO*RAIO*RAIO)));

    return 0;
}

