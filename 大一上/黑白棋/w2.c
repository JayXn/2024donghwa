#include <stdio.h>
#define IN_CHESS(x,y) (x >= 0 && x <= 7 && y >= 0 && y <= 7)    

int x, y;
int color;
int chess[8][8] = {
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,2,1,0,0,0,},
  {0,0,0,1,2,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,}
};


int print_color(int x_cell, int y_cell)
{
  if (chess[x_cell][y_cell] == 0)
  {
    printf("空白\n");
  }
  else if (chess[x_cell][y_cell] == 1)
  {
    printf("黑色\n");
  }
  else if (chess[x_cell][y_cell] == 2)
  {
    printf("白色\n");
  }
}




int Search(int x_cell, int y_cell)
{
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
          if(chess[x][y] == color){
            return 1;
          }
        }
      }
    }
  }
  return 0;
}





int main()
{
  while (scanf("%d %d", &x, &y) != EOF)
  {
    scanf("%d", &color);

    print_color(x,y);
    
    Search(x,y);

    if(Search(x,y) == 1){
      printf("(%d,%d)能下 color=%d 的值\n",x,y,color); 
    }
    else{
      printf("(%d,%d)不能下 color=%d 的值\n",x,y,color); 
    }
  }
}
