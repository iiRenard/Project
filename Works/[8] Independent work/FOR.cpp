#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "[$] Программа \"Фигуры\"\n\n";
    cout << "[1] Фигура (Квадрат)\n\n";
    cout << "[$] Выберите фигуру: ";
    short line;
    cin >> line;
    
if (line == 1) {
	int size;
	cout << "Введите размер квадрата: "; cin >> size;
	bool fill;
	cout << "0 - не заполнять квадрат\n"
		 << "1 - заполнять квадрат\n";
	cin >> fill;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (fill || i == 0 || i == size - 1) { cout << "# "; }
			else if (j == 0 || j == size - 1) { cout << "# "; }
			else { cout << "  "; }
		}
		cout << "\n";
	}
    }
 else {  
   	cout << "Такой операции не существует. ";
    }
	return 0;
}
