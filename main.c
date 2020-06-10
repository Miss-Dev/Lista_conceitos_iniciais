#include <stdio.h>
 
//Questão 18
//Efetuar a soma de três números digitados pelo usuário.

void questao18(){
  int a, b, c, soma;
  scanf("%d %d %d", &a, &b, &c);// perceba que os números devem ser digitados separados por espaço
  soma = a+b+c;
  printf("%d + %d + %d = %d", a, b, c, soma);  
}

//Questão 19
//Efetuar a multiplicação de dois números digitados pelo usuário.
void questao19(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d * %d = %d", a, b, a*b); // a multiplicação é calculada dentro do printf
}

//Questão 20
//Escrever na tela a mensagem “Sistemas de Informação”.
void questao20(){
   // aqui no repl.it não é necessário o uso da biblioteca locale
  printf("Sistemas de Informação");
}
//Questão 21
//leia um número com 4 algarismos e crie um novo número da forma UDCM
void questao21(){
  int n, u, d, c, m;  // cada variável vai guadar os algarismos
  scanf("%d",&n);
  m = n/1000;
  c = n%1000/100;
  d = n%1000%100/10;
  u = n%1000%100%10;
  printf("U = %d, D = %d, C = %d, m = %d", u, d, c, m);

}
//Questão 22
//Escreva um algoritmo que leia um número inteiro entre 100 e 999 e escreva na saída cada um dos algarismos que compõem o número. 
void questao22(){
  int n;
	int u, d, c;
	scanf("%d", &n);
	if(n>=100 && n<=999){	
		c = n/100;
		d = n%100/10;
		u = n%100%10;
		printf("unidade %d -- dezena %d -- centena %d", u, d, c);

  }
}
//Questao 23
//Ler um número e informar se ele é positivo, negativo ou nulo.
void questao23(){
  int n;
  scanf("%d", &n);
  if(n>0){
    printf("positivo");
  }
  else if(n==0){
    printf("nulo");
  }
  else{
    printf("negativo");
  }
}

void questao24(){
  float salario, aumento, novosal;
  int porcent;
  printf("Informe o salário atual e a porcentagem de aumento\n");
  scanf("%f %d", &salario, &porcent); // os valores devem ser lidos separados por espaço
  aumento = salario*porcent/100;
  novosal = salario + aumento;
  printf("O novo salario: %.2f\nValor do aumento: %.2f", novosal, aumento);// O formato %.2f limita o numero de casas
                                                                           //decimais do ponto flutuante para 2 casas decimais depois da vírgula
}

void questao25(){
  float km, m;
  scanf("%f", &km);
  m = km * 1000;
  printf("%.2f quilômetro(s) = %.2f metro(s)", km, m);

}

void questao26(){
  int kwh;
  float valor, acrescimo;
  printf("Informe o gasto de energia em quilowatt/hora: ");
  scanf("%d",&kwh);
  valor = kwh*0.12;
  acrescimo = valor * 0.18;
  valor = valor + acrescimo;
  printf("O valor de energia a ser pago: %.2f", valor);

}

void questao27(){
  int A, B, troca;
  scanf("%d %d", &A, &B);
  printf("Valores de A e B: %d e %d\n", A, B);
  troca = A;
  A = B;
  B = troca;
  printf("Valores de A e B trocados: %d e %d", A, B);

}
//Não precisa se preocupar com os procedimentos, os exercícios podem ser escritos do jeito que estão 
//aprendendo no momento, o void nada mais é que uma função que não retorna valor

//para executar os exercícios basta escrever o nome do procedimento abindo e fechando parênteses
// Ex. quero executar a função void questao20, só escrever questao20()
int main(){  
  questao27();   // exemplo executando a função questao27
  return 0;
}