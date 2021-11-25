#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");

    //Калькулятор

    cout << "[$] Калькулятор " << endl << endl;
    cout << "[+] Сложение" << endl << endl;
    cout << "[-] Вычитание" << endl << endl;
    cout << "[*] Умножение" << endl << endl;
    cout << "[/] Деление" << endl << endl;
    cout << "Введите операцию: " << endl << endl;
    char operation;
    cin >> operation;
    double num1;
    double num2;
    if (operation == '+') {
        cout << "Введите первое число: ";
        cin >> num1;

        cout << "Введите второе число: ";
        cin >> num2;
        cout << "[$] Результат: " << num1 + num2 << endl;
    }
    else if (operation == '-'){
        cout << "Введите первое число: ";
        cin >> num1;

        cout << "Введите второе число: ";
        cin >> num2;
        cout << "[$] Результат: " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        cout << "Введите первое число: ";
        cin >> num1;

        cout << "Введите второе число: ";
        cin >> num2;
        cout << "[$] Результат: " << num1 * num2 << endl;
    }
    else if (operation == '/') {
        cout << "Введите первое число: ";
        cin >> num1;

        cout << "Введите второе число: ";
        cin >> num2;
        cout << "[$] Результат: " << num1 / num2 << endl;
    }     
           
         // ОШИБКА
        else {                    
        
        cout << "Такой операции не существует. ";
            
        }
        
        return 0;
    }