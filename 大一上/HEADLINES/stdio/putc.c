//===https://www.dotcpp.com/course/525:===//

// 函数名: putc
// 头文件: <stdio.h>
// 函数原型: int putc(int ch, FILE *stream);
// 功能: 输出一字符到指定流中 
// 参数：int ch  以int形式的字符
//        FILE *stream  要操作的流
// 返回值： 成功   以无符号 char 强制转换为 int 的形式返回写入的字符 ，失败   返回 EOF。

// 程序例: 将一个字符串输出到标准输出流中
#include<stdio.h>
 
int main(void){
 
   char msg[] = "www.dotcpp.com\n";
 
   int i = 0;
 
   while (msg[i]){
 
      putc(msg[i++], stdout);
 
   }
 
   return 0;
}
 
// 运行结果
// www.dotcpp.com
