
//==================針對資料結構的所有操作===================//
//如果函數前面加上static 代表不給其他人用，那麼這裡的isEmpty就要寫到上面，因為magic宣告的函數不能拿到這裡用
#include<stdio.h>
#include "magic.h"

int isEmpty(stack_t *stackPtr){
    if(stackPtr -> top == -1) return 1;
    return 0;
}


int isFull(stack_t *stackPtr){    //傳指標增加讀取速度
    if(stackPtr -> top == 100) return 1;
    return 0;
}


int push(stack_t *stackPtr , axis_t element){
    //應該要檢查是否有overflow
    if (isFull(stackPtr)){
        printf("已經滿了唷");
        return 0;
    } 
    stackPtr -> top++;
    stackPtr -> elements[stackPtr -> top] = element;
    return 0;
}


axis_t pop(stack_t *stackPtr){   //彈出--取堆疊的內容
    axis_t temp = {-1,-1};
    if (isEmpty(stackPtr)) return temp;
    temp = stackPtr -> elements[stackPtr -> top];
    stackPtr -> top--;
    return temp;
    //return stackPtr -> elements[stackPtr -> top--];
}


