/*======https://www.dotcpp.com/course/592======*/


// 函数名: strnicmp
// 头文件：<string.h>
// 函数原型: int strnicmp(const char *str1,const char *str2,unsigned n);
// 功能：对指定长度的两个字符串进行比较,但是不区分大小写
// 参数：str1和str2为要进行比较的字符串
//       unsigned n为要比较的字符串个数
// 返回值：str1 > str2返回大于0的值；
//         str1 == str2返回等于0的值；
//         str1 < str2返回小于0的值；
// 注意：此函数返回的不是1或-1这样的固定值，而是大于0或小于0的值

// 程序例：比较字符串str1和str2的前n个字符的大小
#include<stdio.h>
#include<string.h>

int main(void){
   char *str1="www.dotcpp.com";
   char *str2="WWW.DOTCPP.COM";
   int p=strnicmp(str2,str1,3);
   if(p>0){
      printf("str2 is greater than str1\n");
   }else if(p<0){
      printf("str2 is less than str1\n");
   }else{
      printf("str2 is equals str1\n");
   }
   return 0;
}
 
// 运行结果：
// str2 is equals str1

