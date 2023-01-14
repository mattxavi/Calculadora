#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
double adicao(double n1, double n2){
double soma;
soma = n1 + n2;
return soma;
}

4

double subtracao(double n1, double n2){
double diferenca;
diferenca = n1 - n2;
return diferenca;
}
double multiplicacao(double n1, double n2){
double produto;
produto = n1 * n2;
return produto;
}
double divisao(double n1, double n2){
double quociente;
quociente = n1 / n2;
return quociente;
}
double potenciacao(double n1, double n2){
double potencia;
potencia = pow(n1, n2);
return potencia;
}
double radiciacao(double n1, double n2){
double raiz;
raiz = pow(n2, 1.0/n1); //raiz cúbica de 8: 3v8 = 8^(1/3)
return raiz;
}
int main(void){
setlocale(LC_ALL, "Portuguese");
double num1, num2;
char opcao;
do{
system("cls"); //limpa tela
fflush(stdin); //limpa buffer do teclado
puts("Escolha uma operação: ");
puts("(1) Adição");
puts("(2) Subtração");
puts("(3) Multiplicação");
puts("(4) Divisão");
puts("(5) Potenciação");
puts("(6) Radiciação");
puts("(7) Sair");
scanf("%c", &opcao); //recebe opção da operação
switch(opcao){
case '1':

5

printf("Digite as duas parcelas: ");
scanf("%lf %lf", &num1, &num2);
printf("%lf + %lf = %lf \n", num1, num2, adicao(num1, num2));
system("pause"); //Aguarda o usuário ver o resultado antes do break
break;
case '2':
printf("Digite o minuendo e o subtraendo: ");
scanf("%lf %lf", &num1, &num2);
printf("%lf - %lf = %lf \n", num1, num2, subtracao(num1, num2));
system("pause");
break;
case '3':
printf("Digite os fatores: ");
scanf("%lf %lf", &num1, &num2);
printf("%lf * %lf = %lf \n", num1, num2, multiplicacao(num1, num2));
system("pause");
break;
case '4':
printf("Digite o dividendo e o divisor: ");
scanf("%lf %lf", &num1, &num2);
printf("%lf / %lf = %lf \n", num1, num2, divisao(num1, num2));
system("pause");
break;
case '5':
printf("Digite a base e o expoente: ");
scanf("%lf %lf", &num1, &num2);
printf("%lf^%lf = %lf \n", num1, num2, potenciacao(num1, num2));
system("pause");
break;
case '6':
printf("Digite o índice e o radicando: ");
scanf("%lf %lf", &num1, &num2);
printf("%lfv%lf = %lf \n", num1, num2, radiciacao(num1, num2));
system("pause");
break;
default:
if(opcao!='7'){
printf("Opção inválida. \n");
system("pause");
}

}
} while(opcao != '7');
return 0;
}
