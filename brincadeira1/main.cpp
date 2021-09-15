#include <stdio.h>

int main() {
  int matriz[5][5],m,n;

    printf("Digite sua matriz:\n");
      for(m=0;m<5;m++)
       for(n=0;n<5;n++)
       {
         scanf("%d",&matriz[m][n]);
         if (matriz[m][n] > 99){
         printf("\nValor invalido insira novamente:\n");
         scanf("%d",&matriz[m][n]);
         }
       }
       printf("\nAqui esta sua matriz:\n");
    for (int m = 4;m > -1; --m) {
      for (int n = 4;n > -1; --n) {
        if (matriz[m][n] > 9){
          printf("%i ", matriz[m][n]);
        } 
        else if (matriz[m][n] < 10) {
          printf("0%i ", matriz[m][n]);
        }
      }
      printf("\n");
    }
    return 0;
}