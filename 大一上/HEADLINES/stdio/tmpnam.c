//===https://www.dotcpp.com/course/535:===//

// 函数名: tmpnam
// 头文件: <stdio.h>
// 函数原型: char *tmpnam(char *sptr);
// 功 能: 创建一个唯一的文件名
// 参数： char *sptr  要创建的文件名
// 返回值：返回指向该文件名的指针

// 程序例: 创建一个唯一的文件名，并输出提示
#include<stdio.h>
 
int main(void){
   char name[13];
 
   tmpnam(name);
 
   printf("Temporary name: %s\n", name);
 
   return 0;
}
 
// 运行结果
// Temporary name: \s1cc.
