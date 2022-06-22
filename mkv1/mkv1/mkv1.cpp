#include <iostream>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define XMIN -100
#define XMAX 100
#define M_PI 3.14
#define N 10
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double mass[N];
    srand(time(NULL));
    cout << "Массив:" << endl;
    for (int i = 0; i < N; i++)
    {
        mass[i] = XMIN + 1.f * (XMAX - XMIN) * rand() / RAND_MAX;
        cout << mass[i] << endl;
    }
    cout << endl;
    double min = mass[1];
    for (int i = 0; i < N; i++)
    {
        if ((mass[i] < min) && (mass[i] > 0))
        {
            min = mass[i];
        }
    }
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "Минимальный положительный элемент:" << min << endl;
    cout << endl;
    double p = 1;
    for (int i = 0; i < N; i++)
    {
        if (mass[i] != 0)
        {
            p = p * mass[i];
        }
    }
    cout << "Результат произведения ненулевых элементов:" << p << endl;
    cout << endl;
    cout << "Вывод ненулевых элементов в обратном порядке:" << endl;
    for (int i = N - 1; i >= 0; i--)
    {
        if (mass[i] != 0)
        {
            cout << mass[i] << endl;
        }
    }

    cout << endl;
}
