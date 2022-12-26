#define _CRT_SECURE_NO_WARNINGS // 禁用否决警告
#define N 256
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE *fp1, *fp2;
    char s[N], inname[10], outname[10];
    cout << "Please input the infile name: " << endl;
    cin >> inname; // 输入原有文件名
    cout << "Please input the outfile name: " << endl;
    cin >> outname;                         // 输入目标文件名
    if ((fp1 = fopen(inname, "r")) == NULL) // 以读文本文件方式打开原有文件
    {
        cout << "Can’t open infile!" << endl;
        exit(0);
    }
    if ((fp2 = fopen(outname, "w")) == NULL) // 以写文本文件方式打开目标文件
    {
        cout << "Can’t open outfile!" << endl;
        exit(0);
    }
    while (fgets(s, N, fp1) != NULL) // 从原有磁盘文件中读取N-1个字符
        fputs(s, fp2);               // 将N-1个字符写入目标磁盘文件中
    fclose(fp1);
    fclose(fp2);
    return 0;
}