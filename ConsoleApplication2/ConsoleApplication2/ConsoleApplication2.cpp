// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");  //кириллица в консоле

    cout << "Введите длину первого отрезка A: ";
    int a;
    cin >> a;

    cout << "Введите длину второго отрезка B: ";
    int b;
    cin >> b;

    int min, max;
    int count = 0;
    bool isALarger;

    if (a == b) {              
        cout << "Отрезки равны.";
    }
    else {
        if (a > b) {                                                                                                                                                                                                                                                                                                  
            min = b;
            max = a;
            isALarger = true;
        }
        else {
            min = a;
            max = b;
            isALarger = false;
        }
        while (max >= min) {
            max -= min;
            count += 1;
        }
        if (isALarger) {
            cout << "Отрезок B может поместиться в отрезке A " << count << " раз(а)." << endl;
        }
        else {
            cout << "Отрезок A может поместиться в отрезке B " << count << " раз(а)." << endl;
        }
    }
}