/*======https://www.dotcpp.com/course/596======*/


// 函数名: strset
// 头文件：<string.h>
// 函数原型: char *strset(char *str, char c);
// 功能：将一个字符串中的所有字符都设为指定字符
// 参数：   char *str  为要进行设置的目标字符串
//             char c     为要设定成的指定字符
// 返回值： 返回指向被替换后的字符串的指针，实质上就是返回str
// 注意：该函数直接改变str的值，然后再返回str，所以这里的str必须是字符串数组，不能是字符串指针

// 程序例: 将字符串数组string的所有字符都设置为字符c
#include<stdio.h>
#include<string.h>
 
int main(void){
 
   char string[20] = "www.dotcpp.com";
 
   char symbol = 'c';
 
   printf("Before strset(): %s\n", string);
 
   strset(string, symbol);
 
   printf("After  strset(): %s\n", string);
 
   return 0;
 
}
 

//运行结果：

//Before strset(): www.dotcpp.com  
//After  strset(): cccccccccccccc
