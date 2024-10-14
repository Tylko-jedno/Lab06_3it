#include <iostream>
#include <iomanip>

using namespace std;

int f(int* a, const int size) {
    int temp = -10;
    int res;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0 && a[i] > temp) {
            temp = a[i];
        }
    }
    return temp;
}

template <typename T>
T f2(T* a, const T size) {
    int temp = -10;
    int res;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0 && a[i] > temp) {
            temp = a[i];
        }
    }
    return temp;
}

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}


void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}


int main()
{
    int c;
    cout << "n = "; cin >> c;

    int* a = new int[c];

    Create(a, c, -10, 10);
    Print(a, c);

    int res = f(a, c);
    cout << "res = " << res << endl;
    res = f2(a, c);
    cout << "res = " << res << endl;

    delete[] a;
}
