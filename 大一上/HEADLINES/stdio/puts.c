//===https://www.dotcpp.com/course/527:===//

// 函数名: puts
// 头文件: <stdio.h>
// 函数原型: int puts(char *str);
// 功能: 把一个字符串写入到标准输出 stdout，直到空字符，但不包括空字符。换行符会被追加到输出中。
// 参数： char *str  要被传输的字符串
// 返回值： 成功  返回一个非负值 ，失败  返回 EOF。

// 程序例:  输出字符串到标准输出流中
#include<stdio.h>
 
int main(void){
 
   char str[] = "www.dotcpp.com\n";
 
   puts(str);
 
   return 0;
}
 
// 运行结果
// www.dotcpp.com
