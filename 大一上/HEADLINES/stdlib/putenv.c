/*======https://www.dotcpp.com/course/561======*/

// 函数名：putenv
// 头文件：<stdlib.h>
// 函数原型：void *putenv(char *name);
// 功能：用于改变或增加环境变量的内容
// 参数：char *name 为环境变量名
// 返回值：成功返回0，失败返回-1

// 程序例：使用putenv函数将环境变量拼接为字符串，然后将其替换原来的环境变量
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *path, *ptr;
    int i = 0;

    ptr = getenv("PATH");

    path = malloc(strlen(ptr) + 15);
    strcpy(path, "PATH=");
    strcat(path, ptr);
    strcat(path, ";c:\\temp");  // Add c:\\temp to the PATH

    putenv(path);

    while (environ[i]) {
        printf("%s\n", environ[i++]);
    }

    return 0;
}
// 运行结果
// HOMEPATH=\Users\Administrator
// LOCALAPPDATA=C:\Users\Administrator\AppData\Local
// LOGONSERVER=\\PC-20200622MGXH
// NUMBER_OF_PROCESSORS=4
// OS=Windows_NT
// PATH=D:\C-Free\C-Free 5\workspace\;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Users\Administrator\AppData\Local\Microsoft\WindowsApps;c:\temp
//PATHEXT=.COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.MSC
//PROCESSOR_ARCHITECTURE=x86
//PROCESSOR_ARCHITEW6432=AMD64
//PROCESSOR_IDENTIFIER=Intel64 Family 6 Model 76 Stepping 3, GenuineIntel
//PROCESSOR_LEVEL=6
//PROCESSOR_REVISION=4c03
//PROCESSOR_REVISION=4c03
//ProgramFiles=C:\Program Files (x86)
//ProgramFiles(x86)=C:\Program Files (x86)
//ProgramW6432=C:\Program Files
//PSModulePath=C:\Program Files\WindowsPowerShell\Modules;C:\Windows\system32\WindowsPowerShell\v1.0\Modules
//PUBLIC=C:\Users\Public
//SESSIONNAME=Console
//SystemDrive=C:
//SystemRoot=C:\Windows
//TEMP=C:\Users\ADMINI~1\AppData\Local\Temp
//TMP=C:\Users\ADMINI~1\AppData\Local\Temp
//USERDOMAIN=PC-20200622MGXH
//USERDOMAIN_ROAMINGPROFILE=PC-20200622MGXH
//USERNAME=Administrator
//USERPROFILE=C:\Users\Administrator
//windir=C:\Windows


