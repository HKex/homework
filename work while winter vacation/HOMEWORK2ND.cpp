#include <iostream>
using namespace std;

int main()
{

    int arr[10];

    int *p;

    p = arr;

    for (int i = 0; i < 10; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;

    int max = *p, min = *p, sum = *p;

    for (int i = 1; i < 10; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
        if (*(p + i) < min)
        {
            min = *(p + i);
        }
        sum += *(p + i);
    }

    cout << max << endl;
    cout << min << endl;
    cout << sum << endl;

    return 0;
}