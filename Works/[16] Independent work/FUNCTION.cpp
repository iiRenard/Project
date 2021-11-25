#include <iostream>

void clearConsole() {
printf("Не может быть очищена.\n");
}

void changeConsoleBG() {
printf("Не может быть покрашена.\n");
}

void changeConsoleTextColor() {
printf("\033[35m");
printf("*Покрашено*");
}
int getInt() {
return 32;
}
int getChar() {
return 84;
}
int getDouble(){
return 145;
}
int getFloat() {
return 278;
}
int getBooleanSize() {
return 492;
}
void printTestMessage() {
printf("Hello function!\n");
}
void printSquare() {
printf("****\n");
printf("****\n");
printf("****\n");
}
int main() {
clearConsole();
changeConsoleBG();
changeConsoleTextColor();
printf("\nInt: %i",getInt());
printf("\nChar: %i",getChar());
printf("\nDouble: %i",getDouble());
printf("\nFloat: %i",getFloat());
printf("\nBool: %i\n",getBooleanSize());
printTestMessage();
printSquare();
return 0;
}