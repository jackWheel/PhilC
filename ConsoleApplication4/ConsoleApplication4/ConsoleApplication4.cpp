// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>;

using namespace std;

int main()
{
    setlocale(0, "");

    cout << "(n+1)-разрядный прямой код (n цифровых разрядов и один знаковый) позволяет представлять целые числа в диапазоне [-(2^n-1); 2^n-1)" << endl;
    cout << "Работаем с 8 битами, т.е числа от -127 до 127. Ввод: ";
    int n;
    cin >> n;

    int num[8] = { 0,0,0,0,0,0,0,0};

    if (n > 0) {
        num[0] = 0;
    }
    else {
        num[0] = 1;
    }

    int temp = abs(n);
    int mod;  //от англ. modulo - остаток от деления

    for (int i=7; i>0; i--) {  //7,6,5,4,3,2,1
        mod = temp % 2;
        temp = temp / 2;
        num[i] = mod;
    }

    cout << "0d(" << n << ") = 0b";
    for (int i = 0; i < 8; i++) {
        cout << num[i];
    }
    cout << endl;
}