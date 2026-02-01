//===https://www.dotcpp.com/course/507===//

//函数名: fopen 
//头文件：<stdio.h> 
//用法:  FILE *fopen(char *filename, char *mode); 
//功能:  打开一个流 出错返回NULL。
//参数：   char *filename  指定文件的绝对路径

         //char *mode    mode字符串的可取值有：

            //r   只能读取文件的内容

            //w   只能写，若文件不存在则创建文件，否则清空文件内容 

            //a   只能写，若文件不存在就创建，否则将文件的指针指向文件的末尾，在文件末尾添加内容

            //r+  可读写，打开已存在的文件用于更新，但是不会创建文件；

            //w+  可读写，若文件不存在，则创建文件，否则清空文件内容

            //a+  可读写，若文件不存在就创建，否则将文件的指针指向文件的末尾，在文件末尾添加内容

            //b    二进制文件(可以和上面每一项合用)  
//返回值： 成功   返回指向文件的指针 ，失败   返回NULL  

// 打开文件并将字符串写入文件，输出提示

#include<stdio.h>
 
#include<string.h>
 
int main(void){
 
   char *s;
 
   FILE *fp;
 
   fp=fopen("1.txt","rw");
 
   if(!fp){
 
      printf("can not open the file\n");
 
      return 0;
 
   }
 
   fputs("www.dotcpp.com!\n",fp);
 
   fclose(fp);
 
   return 0;
 
}

// 运行结果
//www.dotcpp.com!











