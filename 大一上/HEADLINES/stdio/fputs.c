//===https://www.dotcpp.com/course/510===//

//函数名: fputs 
//头文件：<stdio.h> 
//用法:  int fputs(char *str, FILE *stream);
//功能:  送一个字符到一个流中 把str所指的以'\0'结尾的字符串送入流中，不加换行符'\n'，不拷贝串结束符'\0'。
//参数： str         要输出的字符串
      //stream  要输出的流

//返回值： 成功   返回最后的字符 ，失败   返回EOF。

#include<stdio.h>
 
int main(void){
 
   fputs("www.dotcpp.com\n", stdout);
 
   return 0;
 
}

// 运行结果
//www.dotcpp.com