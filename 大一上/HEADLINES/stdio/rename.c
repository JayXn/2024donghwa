//===https://www.dotcpp.com/course/530:===//

// 函数名: rename
// 头文件: <stdio.h>
// 函数原型: int rename(char *oldname, char *newname);
// 功能: 重命名文件
// 参数：char *oldname   文件的旧名字
//      char *newname  文件的新名字 
// 返回值：成功  返回0 ，失败  返回非0值

// 程序例: 将一个文件的oldname改为newname,并输入提示 
#include<stdio.h>
 
int main(void){
 
   char oldname[80], newname[80];
 
   printf("File to rename: ");
 
   gets(oldname);
 
   printf("New name: ");
 
   gets(newname);
 
   if (rename(oldname, newname) == 0){
 
      printf("Renamed %s to %s.\n", oldname, newname);
 
   }else{
 
      perror("rename");
 
   }
 
   return 0;
}
 
// 运行结果
// File to rename: D:\a.txt
// New name: D:\b.txt
// Renamed D:\a.txt to D:\b.txt.
