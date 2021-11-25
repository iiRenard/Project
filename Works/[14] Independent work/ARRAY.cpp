#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Массивы: \n\n";

    const int size = 10;

    cout << "int\n";
    int intSum[size] = {
        1,2,3,4,5,6,7,8,9,10
    };

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << intSum[i] << "\n";
    }

    cout << "\n";
    cout << "float\n";
    float floatSum[size] = {
        1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10
    };

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << floatSum[i] << "\n";
    }

    cout << "\n";
    cout << "double\n";
    double doubleSum[size] = {
        10.1,20.2,30.3,40.4,50.5,60.6,70.7,80.8,90.9,100.10
    };

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << doubleSum[i] << "\n";
    }

    cout << "\n";
    cout << "short\n";
    short shortSum[size] = {
        1,2,3,4,5,6,7,8,9,10
    };

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << shortSum[i] << "\n";
    }

    cout << "\n";
    cout << "long\n";
    long longSum[size] = {
        100,200,300,400,500,600,700,800,900,1000
    };

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << longSum[i] << "\n";
    }

    cout << "\n";
    cout << "char\n";
    char charSum[size] = {
        '!', '@', '#', '$', '%', '^', '&', '*', '(', ')'
    };

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << charSum[i] << "\n";
    }

    cout << "\n";
    cout << "string\n";
    string stringSum[size] = {
      "Один",
	  "Два",
	  "Три",
	  "Четыре",
	  "Пять",
	  "Шесть",
	  "Семь",
	  "Восемь",
	  "Девять",
	  "Десять"
    };

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << stringSum[i] << "\n";
    }

    cout << "\n";
    cout << "bool\n";
    bool boolSum[size] = {
        true, false, true, false, true, false, true, false, true, false
    };

    for (int i = 0; i < size; i++) {
        if (boolSum[i]) {
            cout << i + 1 << " - true" << "\n";
        }
        else {
            cout << i + 1 << " - false" << "\n";
        }
    }

    return 0;
}