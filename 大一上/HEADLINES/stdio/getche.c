//===https://www.dotcpp.com/course/520===//

// 函数名: getche
// 头文件: <stdio.h>
// 函数原型: int getche(void);
// 功能: 从控制台取字符(带回显)，不以回车为结束；
// 参数： 没有参数
// 返回值： 函数返回输入的字符

// 程序例: 从控制台中获取一个字符，并显示出来
#include<stdio.h>
 
int main(void) {
 
   printf("Input a character:");
 
   char ch = getche();
 
   printf("\nYou input a '%c'\n", ch);
 
   return 0;
}
 
// 运行结果
// Input a character:d
// You input a 'd'







