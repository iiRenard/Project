#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    
    cout << "[$] Программа \"Линии\"\n\n";
    cout << "[1] Линия (Горизонтальная)\n\n";
    cout << "[2] Линия (Вертикальная)\n\n";
    cout << "[$] Выберите линию ";
    short line;
    cin >> line;
    
    if (line == 1) {
        
        system("cls");
        cout << "[$] \"Линия\"\n\n";
        cout << "[$] Выберите текстуру: ";
        char texture;
        cin >> texture;
        
        cout << "[$] Выберите длину строки: ";
        short size;
        cin >> size;
        
        cout << "[$] Вывод: \n\n";
        int l = 0;
        
        while (l < size) {
            cout << texture << " ";
            l++;
        }
    }
    
     else if (line == 2) {
        
        system("cls");
        cout << "[$] \"Линия\"\n\n";
        cout << "[$] Выберите текстуру: ";
        char texture;
        cin >> texture;
        
        cout << "[$] Выберите длину строки: ";
        short size;
        cin >> size;
        
        cout << "[$] Вывод: \n\n";
        int i = 0;
        
        while (i < size) {
            cout << texture << " \n";
            i++;
        }
    }
    
        else {  
        cout << "Такой операции не существует. ";
    }
    
    return 0;
}