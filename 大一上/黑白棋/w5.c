#include <stdio.h>
#include <math.h>
#define CHESSSIZE 8
#define SPACE 0
#define BLACK 1
#define WHITE 2
#define IN_CHESS(x,y) (x >= 0 && x <= 7 && y >= 0 && y <= 7)  

int x, y, dx, dy;
int color;
int chess[CHESSSIZE][CHESSSIZE];
int CanPut[CHESSSIZE][CHESSSIZE];


void Initial_CanPut(){
for (int i = 0; i < CHESSSIZE; i++){
    for (int j = 0; j < CHESSSIZE; j++){
      CanPut[i][j] = 0;
    }
  }
}

void inputArray(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int piece;
      scanf("%d", &piece);
      chess[i][j] = piece;
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      CanPut[i][j] = 0;
    }
  }

}


void ShowCanPut(){
  printf("可下的位子：\n");
  for(int j = 0 ; j < CHESSSIZE ; j++){
    for(int i = 0 ; i < CHESSSIZE ; i++){
      if(CanPut[j][i] == 1){
        printf("(%d, %d), ", i, j);
      }
    }
  }
  printf("\n");
}

void ShowStep(int x_cell, int y_cell, int x, int y){
  !(x - x_cell == 0) ? printf("%d", x - x_cell) : printf("%d", y - y_cell);
}


int SearchAndRecord(int chess[8][8], int CanPut[8][8], int x_cell, int y_cell, int color){
  int x = x_cell;
  int y = y_cell;
  for(int dy = -1 ; dy <= 1 ; dy++ ){
    for(int dx = -1 ; dx <= 1 ; dx++){
      if(color != chess[y + dy][x + dx] && chess[y + dy][x + dx] != 0){
        x = x + dx;
        y = y + dy;        
        while(IN_CHESS(x,y)){
          x = x + dx;
          y = y + dy;
          if(chess[y][x] == color){
            CanPut[y][x] == 1;
            break;
          }
        }
      }
    }
  }
  return 0;
}

int main()
{
  while (1)
  {
    inputArray(CHESSSIZE);

    scanf("%d %d", &x, &y);

    SearchAndRecord(chess[8][8], CanPut[8][8], x, y, BLACK);
    print("黑子");
    ShowCanPut();
    InitialCan_Put();

    SearchAndRecord(chess[8][8], CanPut[8][8], x, y, WHITE);
    print("白子");
    ShowCanPut();
    InitialCan_Put();
  }
}
