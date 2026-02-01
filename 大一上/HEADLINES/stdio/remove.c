//===https://www.dotcpp.com/course/529
:===//

// 函数名: remove
// 头文件: <stdio.h>
// 函数原型: int remove(char *filename);
// 功能: 删除一个文件
// 参数：char *filename 为要删除的文件名 
// 返回值：成功返回0，失败返回非0值

// 程序例: 输入文件路径，并删除该文件
#include<stdio.h>
 
int main(void){
 
   char file[80];
 
   printf("File to delete: ");
 
   gets(file);
 
   if (remove(file) == 0){
 
      printf("Removed %s.\n", file);
 
   }else{
 
      perror("remove");
 
   }
 
   return 0;
}
 
// 运行结果
// File to delete: D:\a.txt
// Removed D:\a.txt.
