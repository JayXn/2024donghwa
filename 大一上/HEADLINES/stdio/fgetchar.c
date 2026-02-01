//===https://www.dotcpp.com/course/504===//

//函数名: fgetchar 
//头文件：<stdio.h> 
//函数原型: int fgetchar(void); 
//功能: 从标准输入流中读取字符 
//参数： 没有参数 
//返回值： 成功  输入流中的下一个字符，它已被转换成为无符号扩展的整型值 失败  遇到出错或文件结束时返回EOF

//从控制台中读取字符，并输出

#include<stdio.h>
 
int main(void){
 
   char ch;
 
   printf("Enter a character followed by\n");
 
   ch = fgetchar();  //从控制台读取字符
 
   printf("The character read is: '%c'\n",ch); //输出读取的字符
 
   return 0;
 
}

//运行结果

//Enter a character followed by
//b
//The character read is: 'b'