#include<stdio.h>
#include<math.h>

int main(){
  int j,i;
  for(j = 1 ; j <= 9 ; j++){
    for(i = 1 ; i <= 9 ; i++){
      printf("%d * %d = %2d\t", i, j, i*j);
    }
    printf("\n");
  }
}
