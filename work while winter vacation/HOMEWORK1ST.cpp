#include <iostream>
using namespace std;

// 定义交换函数，使用变量的指针作函数参数
void swap(int *a, int *b)
{
    // 定义临时变量
    int temp;

    temp = *a;

    *a = *b;

    *b = temp;
}

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2)
    {
        swap(&num1, &num2);
    }

    if (num2 > num3)
    {
        swap(&num2, &num3);
    }

    if (num1 > num2)
    {
        swap(&num1, &num2);
    }

    cout << num3 << " " << num2 << " " << num1 << endl;

    return 0;
}