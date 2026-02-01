#include <stdio.h>
#include <stdlib.h>
#define CHESSSIZE 8
#define SPACE 0
#define BLACK 1
#define WHITE 2
#define IN_CHESS(x,y) (x >= 0 && x <= 7 && y >= 0 && y <= 7)  

int x, y, dx, dy;
int color;
int chess[CHESSSIZE][CHESSSIZE];
int CanPut[CHESSSIZE][CHESSSIZE];
int chess[8][8] = {
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,1,2,0,0,0,},
  {0,0,0,2,1,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,}
};


void Initial_CanPut(int CanPut[8][8]){
for (int i = 0; i < CHESSSIZE; i++){
    for (int j = 0; j < CHESSSIZE; j++){
      CanPut[i][j] = 0;
    }
  }
}


void ShowStep(int x_cell, int y_cell, int x, int y){
  !(x - x_cell == 0) ? printf("%d\n", abs(x - x_cell)) : printf("%d\n", abs(y - y_cell));
}


void SearchAndRecord(int chess[8][8], int CanPut[8][8], int x_cell, int y_cell, int color){
  int x = x_cell;
  int y = y_cell;
  for(int dy = -1 ; dy <= 1 ; dy++){
    for(int dx = -1 ; dx <= 1 ; dx++){
      if(color != chess[y + dy][x + dx] && chess[y + dy][x + dx] != 0){
        x = x + dx;
        y = y + dy;        
        while(IN_CHESS(x,y)){
          x = x + dx;
          y = y + dy;
          if(chess[y][x] == color){
            CanPut[y][x] == 1;
            ShowStep(x_cell, y_cell, x, y);
            break;
          }
        }
      }
    }
  } 
}


void ShowCanPut(int CanPut[8][8]){
  printf("可下的位子：\n");
  for(int j = 0 ; j < CHESSSIZE ; j++){
    for(int i = 0 ; i < CHESSSIZE ; i++){
      if(CanPut[j][i] == 1){
        printf("(%d, %d), ", i, j);
      }
    }
  }
  Initial_CanPut(CanPut);
  printf("\n");
}


int main()
{
  while (1){
    scanf("%d %d", &x, &y);

    Initial_CanPut(CanPut);
    SearchAndRecord(chess, CanPut, x, y, BLACK);
    printf("黑子");
    ShowCanPut(CanPut);

    SearchAndRecord(chess, CanPut, x, y, WHITE);
    printf("白子");
    ShowCanPut(CanPut);


  }
}
