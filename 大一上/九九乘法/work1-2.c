#include<stdio.h>
#include<math.h>

int main(){
  int j,i;
  for(int k = 0 ; k<=2 ; k++){
    for(j = 1 ; j <= 9 ; j++){
      for(i = 1+k ; i <= 9 ; i+=3){
        printf("%d * %d = %2d\t", i, j, i*j);
      }
      printf("\n");
    }
    printf("\n");
  }
}
