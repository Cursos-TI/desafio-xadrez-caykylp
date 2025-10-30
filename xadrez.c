#include <stdio.h>

 int main(){

int cavalo = 1;


    while (cavalo--)
    {

            for (int i =  0; i < 2; i++)
            {
                printf("cima \n");
            }
        printf("escolha se vai para esquerda ou direita \n");
        scanf("%d \n", cavalo);    

    }
        printf("\n");
        printf("torre\n");
    
  int i = 1;  

    while (i <= 5)
    {
        printf("direita \n");

        i++;

    }
        printf("\n");
        printf("bispo\n");

  int j = 2;  

    do
    {
       printf("cima\n");
       printf("direita\n");

       j++;
    } while (j <= 6);

        printf("\n");
        printf("rainha\n");

    for (int k = 0; k <= 8; k++)
    {
        printf("esquerda\n");
    }

    return 0;
}
