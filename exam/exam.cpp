#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main()
{
    int num;

    cout << "輸入一個正整數: ";
    cin >> num;

    //非遞迴計算n!
    int result = 1;
    for (int i = num; i <=num; i++)
    {
        //result *= i;
        result = result * i;
    }
    cout << "非遞迴版本 : " << num << " ! = " << result << endl;

    //遞迴計算n!
    result = factorial(num);
    cout << "遞迴版本 : " << num << " ! = " << result << endl;
}

