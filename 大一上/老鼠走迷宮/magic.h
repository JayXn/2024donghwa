#ifndef _MAGIC_H_   //避免拷貝二份
#define _MAGIC_H_

#define M_SIZE 10
#define EQU(p,q) (p.x == q.x && p.y == q.y)


typedef struct axis{
      int x;
      int y;
}axis_t;

typedef struct stack{
    axis_t elements[M_SIZE*M_SIZE];
    int top;
} stack_t;

//typedef struct stack1 {
    //axis_t *elements;
    //int top;
//} stack1_t;

//typedef struct axis1 {
    //axis_t p;
    //struct axis1 *next;
//} stackP_t;

//stackP_t * stack;

int push(stack_t *stack, axis_t axis);
axis_t pop(stack_t *stack);

#endif







