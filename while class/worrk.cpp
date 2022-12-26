#define _CRT_SECURE_NO_WARNINGS // 禁用否决警告
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    FILE *fp1, *fp2;
    char ch, inname[10], outname[10];
    cout << "Please input the infile name:" << endl;
    gets(inname);
    cout << "Please input the outfile name:" << endl;
    gets(outname);
    if ((fp1 = fopen(inname, "r")) == NULL) // 以读文本文件方式打开原有文件
    {
        cout << "Can't open infile!" << endl; // 打开失败
        exit(0);
    }
    if ((fp2 = fopen(outname, "w")) == NULL) // 以写文本文件方式打开目标文件
    {
        cout << "Can't open outfile!" << endl; // 打开失败
        exit(0);
    }
    while (!feof(fp1))  //读取原有文件中的每一个字符
    {
        ch = fgetc(fp1); // 从原有磁盘文件中读一个字符
        fputc(ch, fp2);  // 把该字符写入目标磁盘文件
    }
    fclose(fp1); //关闭打开的文件
    fclose(fp2);
    return 0;
}