// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Вариант 15." << endl;
    cout << "Введите этаж: ";
    int f;
    cin >> f;  //floor и flag

    switch (f)
    {
    case 0:
        cout << "Парковка";
        break;
    case 1:
        cout << "Супермаркет";
       // break;
    case 2:
        cout << "Детячьи магазины";
       // break;
    case 3:
        cout << "Женская и мужская одежда (он же АдЪ)";
       // break;
    case 4:
        cout << "Обувь (еще хуже, чем одежда)";
        break;
    case 5:
        cout << "Ресторация";
       // break;
    default: cout << "[ДАННЫЕ УДАЛЕНЫ]";
        break;
    }
}

