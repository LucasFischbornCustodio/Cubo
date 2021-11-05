// Cubo

#include <stdio.h>
// A biblioteca que sera utilizada.

void CUBO(float valor) {
  // função de parametrizacao, neste caso optamos por chamala de CUBO e seu
  // valor estara em float.

  float resultado;
  resultado = (valor * valor * valor);
  printf("o valor eh %f", resultado);

  // aqui determinamos o processamento da variavel "resultado" e a saida para
  // visualizacao do usuario.
}

int main() {
  float a;

  //  optamos por utilizar float novamente

  printf("digite o valor que sera elevado ao cubo: ");
  scanf("%f", &a);
  CUBO(a);

  // o texto entre aspas estara disponivel para o usuario
  // um valor digitado pelo mesmo sera atribuido a uma variavel "a"
  // esta sera condicionada a funcao CUBO
  // assim concluindo o objetivo do algoritimo

  return 0;
}







