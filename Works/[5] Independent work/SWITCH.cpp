#include <iostream>
using namespace std;

int main()
    {
      setlocale(0, "");
    
      // Переводчик.
      cout << "[1] RUS." << endl << endl;
      cout << "[2] ENG. " << endl << endl;
      cout << "[3] Выход из программы / Exiting the program. " << endl;
      cout << "Выберете список слов / Select a word list: " << endl << endl;
        
        // Русс - Англ.
        int translation1;
        cin >> translation1;
        switch (translation1) {
        case 1:
        cout << "Выбере нужный вам модуль: " << endl << "Select the module you need: " << endl << endl;
        
        int month1;
        cout << "Нажмите любую однозначную цифру для вывода списка слов: ";
        cin >> month1;
        switch (month1) {
         
        
        case 1:
        cout << "Слово в данном списке: Собака. " << endl << "Перевод слова: Dog. ";
        
        case 2:
        cout << "Слово в данном списке: Сова. " << endl << "Перевод слова: Owl. ";
        
        case 3:
        cout << "Слово в данном списке: Машина. " << endl << "Перевод слова: Car. ";
        
        case 4:
        cout << "Слово в данном списке: Яблоко. " << endl << "Перевод слова: Apple. ";
        
        case 5:
        cout << "Слово в данном списке: Рюкзак. " << endl << "Перевод слова: Backpack. ";
        
        case 6:
        cout << "Слово в данном списке: Телефон. " << endl << "Перевод слова: Telephone. ";
        
        case 7:
        cout << "Слово в данном списке: Выход. " << endl << "Перевод слова: Output / Exit. ";
        
        case 8:
        cout << "Слово в данном списке: Список. " << endl << "Перевод слова: List. ";
        
        case 9:
        cout << "Слово в данном списке: Язык. " << endl << "Перевод слова: Language. ";
        
        case 10:
        cout << "Слово в данном списке: Слово. " << endl << "Перевод слова: Word. ";
        
        case 11:
        cout << "Слово в данном списке: Мечта. " << endl << "Перевод слова: Dream. ";
        
        case 12:
        cout << "Слово в данном списке: Память. " << endl << "Перевод слова: Memory. ";
        
        case 13:
        cout << "Слово в данном списке: Сотовая связ.ь " << endl << "Перевод слова: Cellular. ";
        
        case 14:
        cout << "Слово в данном списке: Москва (Город). " << endl << "Перевод слова: Moscow (Сity). ";
        
        case 15:
        cout << "Слово в данном списке: Нил (Река). " << endl << "Перевод слова: Nile (River). ";
        break;
        
        default:
        cout << "К сожалению такого слова нет в справочнике :( ";   // Ошибка
        break;
    }
        break;
         
         // Англ - Русс.
        
        case 2:
        cout << "Press any single digit to display a list of words: ";
        int list2;
        cin >> list2;
        switch (list2) {
            
        case 1:
        cout << "The word in this list: Dog. " << endl << "A translation of a word: Собака. ";
        
        case 2:
        cout << "The word in this list: Owl. " << endl << "A translation of a word: Сова. ";
        
        case 3:
        cout << "The word in this list: Сar. " << endl << "A translation of a word: Машина. ";
        
        case 4:
        cout << "The word in this list: Apple. " << endl << "A translation of a word: Яблоко. ";
        
        case 5:
        cout << "The word in this list: Backpack. " << endl << "A translation of a word: Рюкзак. ";
        
        case 6:
        cout << "The word in this list: Telephone. " << endl << "A translation of a word: Телефон. ";
        
        case 7:
        cout << "The word in this list: Output / Exit. " << endl << "A translation of a word: Выход. ";
        
        case 8:
        cout << "The word in this list: List. " << endl << "A translation of a word: Список. ";
        
        case 9:
        cout << "The word in this list: Language. " << endl << "A translation of a word: Язык. ";
        
        case 10:
        cout << "The word in this list: Word. " << endl << "A translation of a word: Слово. ";
        
        case 11:
        cout << "The word in this list: Dream. " << endl << "A translation of a word: Мечта. ";
        
        case 12:
        cout << "The word in this list: Memory. " << endl << "A translation of a word: Память. ";
        
        case 13:
        cout << "The word in this list: Cellular. " << endl << "A translation of a word: Сотовая связь. ";
        
        case 14:
        cout << "The word in this list: Moscow (Сity). " << endl << "A translation of a word: Москва (Город). ";
        
        case 15:
        cout << "The word in this list: Nile (River). " << endl << "A translation of a word: Нил (Река). ";
        break;
        
        default:
        cout << "Unfortunately, there is no such word in the list :( ";   // Ошибка
        break;
    }
        break;
        
        case 3:
        cout << "Нажмите клавишу 3 для подтверждения: " << endl;
        int list3;
        cin >> list3;
        switch (list3) {
        case 3:
        return 0;
        default:
        cout << "Упс, произошёл сбой системы :( " << endl << "Oops, there was a system crash :( "; // Ошибка
        break;
    }
        break;
        
        default:
        cout << "К сожалению вы ввели неверную команду :( " << endl << "Sorry, you entered the wrong command :( "; // Ошибка
        break;
    }
    
    return 0;
}