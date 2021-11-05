// implemente um sistema utilizando funcao que leia um valor e apresente para o usuario o valor do CUBO do valor digitado.
// trello:utnairo@gmail.com
#include <stdio.h>

//funcao chamada - start
void CUBO (float valor){ // valor parametrizado
float resultado; // variavel
resultado = (valor * valor * valor); // processamento
printf("o valor eh %f",resultado); // saida


}

int main()
{
	float a;
	
printf("digite o valor que sera elevado ao cubo: "); 
scanf("%f",&a); 
CUBO(a);  
	


return 0;
}

