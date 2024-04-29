#include <stdio.h>
#include <math.h>

//variaveis:

float ValorBem, ValorDepre, ValorDepreTotal, taxa, Total;

int Anos, i=0, ValorAno;

int main(void) {
  //Cabeçalho:

  printf("==================================================================\n\n");
  printf("\t\t\t.: Seja Bem vindo ! :.\n");
  printf("\t\tAluno: Gabriel D. Besbati\n");
  printf("\t\tEmail de contato: gdbesbati@gmail.com\n");
  printf("\t\t\tProfessor: Kleyton Hoffmann.\n\n");
  
  printf("==================================================================\n\n");

  printf("==================================================================\n\n");
  printf("Favor digitar o valor do Bem:\n");
    scanf("%f", &ValorBem); // Valor do Bem que vai ser calculado!
  
  printf("Favor digitar o período que deseja calcular (Em Anos):\n");
    scanf("%d", &Anos); // Quantidade de Anos que ira ser calculado!

  printf("Anos\tValor do bem\tDepreciação\t\tValor do bem depreciado\n");
  printf("==================================================================\n\n");
  for(int i = 0; i<Anos; i++)
  {
    ValorAno = i+1;
    ValorBem = ValorBem - ValorDepre;
    ValorDepre = (ValorBem * 1.5 / 100);
    Total = ValorBem - ValorDepre;
    ValorDepreTotal = ValorDepreTotal + ValorDepre;
    
    printf("%d\t\t%.2f\t\t\t\t\t%.2f\t\t\t\t\t%.2f\n\n", ValorAno, ValorBem, ValorDepre, Total);
  }
   printf("==================================================================\n\n");
  
  printf("O total da depreciação foi de : %.2f\n", ValorDepreTotal);
  
  printf("Fim do codigo\n");
  return 0;
}
