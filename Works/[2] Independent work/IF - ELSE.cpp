#include <iostream>
using namespace std;

int main() {
    
int season = 0;
cin >> season;


    if (season == 1) {
        cout << "Вы ввели время года: " << " Лето"; // Число 1 = Лето.
        
    } else if (season == 2) {
        cout << "Вы ввели время года: " << " Осень"; // Число 2 = Осень.

    } else if (season == 3) {
        cout << "Вы ввели время года: " << " Зима"; // Число 3 = Зима.

    } else if (season == 4) {
        cout << "Вы ввели время года: " << " Весна"; // Число 4 = Весна.

    } else {
        cout << "Такого времени года не существет. " << "Введите число от 1 до 4. " << endl ; // Ошибка.

    }

return 0;
    }