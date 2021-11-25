#include <iostream>
#include <string>

#define clear system("cls");

using namespace std;

int main() {
    cout << "[$] Программа \"Фигуры\"\n\n";
    cout << "[1] Фигура (Прямоугольник)\n\n";
    cout << "[$] Выберите фигуру: ";
    short line;
    cin >> line;
    
if (line == 1) {
	int sizex; 
	int sizey;
	cout << "Введите размер прямоугольника:\n";
	cin >> sizex;
	cin >> sizey;
	bool fill;
	cout << "0 - не заполнять прямоугольник\n"
		 << "1 - заполнять прямоугольник\n";
	cin >> fill;
	clear
		for (int i = 0; i < sizey; i++) {
			for (int j = 0; j < sizex; j++) {
				if (fill || i == 0 || i == sizey - 1) { cout << "# "; }
				else if (j == 0 || j == sizex - 1) { cout << "# "; }
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
