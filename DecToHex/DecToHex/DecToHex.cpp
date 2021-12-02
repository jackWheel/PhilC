
#include <iostream>
#include <stdlib.h>;
#include <string>;  //для to_string

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Ввод: ";
    int n;
    cin >> n;

    int temp = abs(n);
    int mod;  //от англ. modulo - остаток от деления
    string result;

    while (temp!=0) {  

        mod = temp % 16;
        temp = temp / 16;
        switch (mod){
            case 10:
                result = "A" + result;
                break;
            case 11:
                result = "B" + result;
                break;
            case 12:
                result = "C" + result;
                break;
            case 13:
                result = "D" + result;
                break;
            case 14:
                result = "E" + result;
                break;
            case 15:
                result = "F" + result;
                break;
            default:
                result = to_string(mod)+result;
                break;
        }
    }

    cout << "0d";

    if (n < 0) {
        cout << "(" << n << ")";
        result = "(-"+result;
        result += ")";
    }
    else {
        cout << n;
    }

    cout << " = 0x"<<result<<endl;
}