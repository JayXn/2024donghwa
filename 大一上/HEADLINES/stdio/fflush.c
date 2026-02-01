//===https://www.dotcpp.com/course/502===//

//函数名: fflush 
//头文件：<stdio.h> 
//用法:  int fflush(FILE *stream);
//功能:  清除一个流。清除输入流的缓冲区，使它仍然打开，并把输出流的缓冲区的内容写入它所联系的文件中。
//参数：   stream要清除的流
//返回值： 成功   返回0 ，失败    返回EOF。

//  fflush将缓冲区的内容写入文件 1.txt中，并输出提示

#include<stdio.h>
 
#include<string.h>
 
#include<stdio.h>
 
#include<string.h>
 
#include<conio.h>
 
#include<windows.h>
 
int main(void){
 
   FILE *stream;
 
   char msg[] = "This is a test";
 
   stream = fopen("1.txt", "w");  //创建文件
 
   fwrite(msg, strlen(msg), 1, stream);  //将文件写入一些字符
 
   system("cls");  //清屏
 
   printf("Press any key to flush 1.txt:\n");  
 
   getch();
 
   fflush(stream);  //清除流
 
   printf("File was flushed, Press any key to quit\n");
 
   getch();
 
   return 0;
 
}

// 运行结果
//Press any key to flush 1.txt:
//File was flushed, Press any key to quit