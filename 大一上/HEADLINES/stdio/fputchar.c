//===https://www.dotcpp.com/course/509===//

//函数名: fputchar 
//头文件：<stdio.h> 
//用法:  int fputchar(char ch);
//功能:  送一个字符到标准输出流(stdout)中，送一个字符到屏幕。等价于fputc(c,stdout);
//参数： ch 为要输出到屏幕的字符
//返回值： 成功   返回所写的字符 ，失败   返回EOF。

//将字符串msg输出到屏幕上

#include<stdio.h>
 
int main(void){
 
   char msg[] = "This is a test";
 
   int i = 0;
 
   while (msg[i]){
 
      fputchar(msg[i]);
 
      i++;
 
   }
 
   putchar('\n');
 
   return 0;
 
}

// 运行结果
//This is a test
