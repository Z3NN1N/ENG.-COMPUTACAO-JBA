#include <stdio.h>


//variaveis
int Andar[3] ,i, tempo[3], total[4];


int main(void) {
// declaração de Qntd. de pessoas por andar!!

  for(int i= 1; i < 4; i++)
  {
    Andar[i] = -1;

      while(Andar[i] < 0 || Andar[i] > 1000)
      {
        printf("Digite o valor do %d Andar:\n", i);
          scanf("%d", &Andar[i]);
      }
  }

    printf("\n");
    printf("=============================================\n\n");
  //define o tempo de cada andar!!
    for(int i = 1; i < 4; i++)
    {
      tempo[i] = Andar[i];

    printf("O tempo do %d andar (1 pessoa = 1 minuto) é:\t %d\n",i, Andar[i]);
    }

    printf("\n");
    printf("=============================================\n\n");

  // total de cada andar!!

    printf(".: TEMPO TOTAL DE DESLOCAMENTO POR ANDAR!! :.\n\n");

      for(int i = 1; i < 4; i++)
      {
        printf("=============================================\n\n");
        
        while(i == 1) // se for colocada no 1° andar:
        {
          total[i] = Andar[i] + (Andar[i+1]*2) + (Andar[i+2]*4);
          printf(" o valor do %d° total é:\t %d minutos.\n\n",i, total[i]);
          break;
        }
        while(i == 2) // se for colocada no 2° andar:
        {
          total[i] = Andar[i] + (Andar[i+1]*2) + (Andar[i-1]*2);
          printf(" o valor do %d° total é:\t %d minutos.\n\n",i, total[i]);
          break;
        }
        while(i == 3) // se for colocada no 3° andar:
        {
          total[i] = Andar[i] + (Andar[i-1]*2) + (Andar[i-2]*4);
          printf(" o valor do %d° total é:\t %d minutos.\n",i, total[i]);
          break;
        }
        
      }
        printf("\n");
        printf("=============================================\n\n");

  //Comparação dos 3 andares!!

    i = 1;
        while(i == 1)
        {
          if(total[i] < total[i+1] && total[i] < total[i+2])// se o primeiro andar for o menor:
          {
            printf("A cafeteira deve ser posicionada no primeiro andar!!\n");
            printf("Menor tempo encontrado:\t%d minutos.\n",total[i]);
            break;
          } 
          else if(total[i] > total[i+1] && total[i+2] > total[i+1]) // se o segundo for o menor:
          {
            printf("A cafeteira deve ser posicionada no segundo andar!!\n");
            printf("Menor tempo encontrado:\t%d minutos.\n",total[i+1]);
            break;
          }
          else if(total[i] > total[i+2] && total[i+1] > total[i+2]){
            printf("A cafeteira deve ser posicionada no terceiro andar!!\n");
            printf("Menor tempo encontrado:\t%d minutos.\n\n",total[i+2]);
            break;
          }
          
        }
          printf("\n");
          printf("=============================================\n\n");
          printf(".: Obrigado pelo uso:.\n");
          printf(".: FIM DO PROGRAMA :.\n\n");
          printf("=============================================\n\n");

  return 0;
}
