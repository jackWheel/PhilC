// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int PhiboRecursive(int n) {

    int res;
    if ((n == 1) || (n == 2))
    {
        res = 1;
    }
    else
    {
        res = PhiboRecursive(n - 1) + PhiboRecursive(n - 2);
    }
    return res;
}
int main()
{
    setlocale(0, "");
    cout << "N=";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "f(" << i << ")=" << PhiboRecursive(i)<<endl;

    }
}

