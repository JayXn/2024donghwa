/*======https://www.dotcpp.com/course/601======*/


// 函数名: strrchr
// 头文件：<string.h>
// 函数原型: char *strrchr(char *str, char c);
// 功能：查找字符串中最后一次出现字符c的位置。
// 参数： char *str  为要被检索的目标字符串
//           char c     为要检索的字符
// 返回值： 返回str中最后一次出现字符c的位置。如果未找到该值，则函数返回一个空指针

// 程序例: 在字符串string中找到字符'c'最后一次出现的位置，并将结果输出
#include<string.h>
#include<stdio.h>
 
int main(void){
 
   char string[15];
 
   char *ptr, c='c';
 
   strcpy(string,"www.dotcpp.com");
 
   ptr = strrchr(string, c);
 
   if(ptr){
 
      printf("The character %c is at position: %d\n", c, ptr-string);
 
   }else{
 
      printf("The character was not found\n");
 
   }
 
   return 0;
 
}
 

//运行结果：

//The character c is at position: 11
