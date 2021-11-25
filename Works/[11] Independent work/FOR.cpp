#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "[$] Программа \"Фигуры\"\n\n";
    cout << "[1] Линия\n\n";
    cout << "[2] Квадрат\n\n";
    cout << "[3] Прямоугольник\n\n";
    cout << "[4] Треугольник\n\n";
    cout << "[5] Решётка\n\n";
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
    
     if (line == 2) {
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
    
     if (line == 3) {
        int sizex;
        int sizey;
	cout << "Введите размер прямоугольника\n";
	cin >> sizex;
	cin >> sizey;
	bool fill;
	cout << "0 - не заполнять прямоугольник\n"
		<< "1 - заполнять прямоугольник\n";
	cin >> fill;
		for (int i = 0; i < sizey; i++) {
			for (int j = 0; j < sizex; j++) {
				if (fill || i == 0 || i == sizey - 1) { cout << "# "; }
				else if (j == 0 || j == sizex - 1) { cout << "# "; }
				else { cout << "  "; }
			}
			cout << "\n";
		}
    }
    
     if (line == 4) {
        int size;
	cout << "Введите высоту треугольника: "; cin >> size;
	bool fill;
	cout << "0 - не заполнять треугольник\n"
		<< "1 - заполнять треугольник\n";
	cin >> fill;
	if (fill) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= size * 2; j++) {
				if (j == size - i) {
					while (j <= size + i) {
						cout << "#";
						j++;
					}
				}
				else { cout << " "; }
			}
			cout << "\n";
		}
	}
	else {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= size * 2; j++) {
				if (j == 0 || j == size * 2) { cout << " "; }
				else if (j == size - i || j == size + i || i == size - 1) { cout << "#"; }
				else { cout << " "; }
			}
			cout << "\n";
		}
	}
}
    
    if (line == 5) {
    int size;
	cout << "Введите размер решётки: "; cin >> size;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i % 2 == 1 || j % 2 == 1) {
				cout << "# ";
			}
			else { cout << "  "; }
		}
		cout << '\n';
	}
}
 else {  
   	cout << "Такой операции не существует. ";
    }
	return 0;
}