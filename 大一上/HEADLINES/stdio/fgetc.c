//===https://www.dotcpp.com/course/503===//

//函数名: fgetc 
//头文件：<stdio.h> 
//函数原型: int fgetc(FILE *stream); 
//功能: 从流中读取字符 
//参数： stream为要读取的文件流 
//返回值： 成功  返回输入流中的下一个字符 ，失败  文件结束或出错时返回EOF。

#include<stdio.h>
 
#include<string.h>
 
int main(void) {
 
   FILE *stream;
 
   char string[] = "This is a test";
 
   char ch;
 
   stream = fopen("1.txt", "w+");   //打开文件
 
   fwrite(string, strlen(string), 1, stream);  //将字符串写入文件
 
   fseek(stream, 0, SEEK_SET);  //将文件流指针定位到开头
 
   while ((ch=fgetc(stream))!= EOF){  //获取文件中的字符
 
      putch(ch);  //将字符输出
 
   }
 
   putchar('\n');
 
   fclose(stream); //关闭文件流
 
   return 0;
 
}

//运行结果
//This is a test