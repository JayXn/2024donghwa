/*======https://www.dotcpp.com/course/580======*/

// 函数名: strcat
// 头文件： <string.h>
// 功 能: 将一个字符串拼接在目标字符串的后面
// 函数原型: char *strcat(char *destin, const char *source);
// 功 能: 将一个字符串拼接在目标字符串的后面
// 参数：   char *destin         为目标字符串数组
//             const char *source   为要拼接的字符串数组
// 返回值：返回拼接成功后的字符串数组的指针
// 注意：必须保证 destin 足够大，能够容纳下 source，否则会导致溢出错误。该函数不会生成新字符串，而是修改原有字符              串。因此 destin 只能是字符数组，而不能是字符串指针指向的字符串，因为字符串指针指向的是字符串常量， 常量不              能被修改。
 
// 程序例: 将字符串经过拼接处理，形成新的字符串，并输出新字符串
#include<string.h>
#include<stdio.h>
 
int main(void){
   char destination[25]={"I love"};
   char *blank = " ", *c = "www.dotcpp.com";
 
   strcat(destination, blank);
   strcat(destination, c);
 
   printf("%s\n", destination);
 
   return 0;
}
 
// 运行结果：
// I love www.dotcpp.com
