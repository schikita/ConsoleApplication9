#include <iostream>
#include <bitset>

using namespace std;

string toBinary(int n)
{
    int m = n;
    string r;
    while (n != 0) { r = (n % 2 == 0 ? "0" : "1") + r; n /= 2; }
    if (m < 0)
    {
        r = "1" + r;
    }
    else
    {
        r = "0" + r;
    }
    return r;
}

string obr(int n) {
    int m = n;
    string r;
    if (n > 0)
    {
        while (n != 0) { r = (n % 2 == 0 ? "0" : "1") + r; n /= 2; }
        if (m < 0)
        {
            r = "1" + r;
        }
        else
        {
            r = "0" + r;
        }
    }
    else
    {
        while (n != 0) { r = (n % 2 == 0 ? "1" : "0") + r; n /= 2; }
        if (m < 0)
        {
            r = "1" + r;
        }
    }
    return r;
}

string dop(int n) {
    string s = obr(n);

    return s;

}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Прямой код -> " << toBinary(7) << endl;
    cout << "Обратный код -> " << obr(7) << endl;
    cout << "Дополнительный вид -> " << dop(7) << endl;
}