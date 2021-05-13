// gen_password.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace::std;


int main()
{
    srand(time(NULL));
    //65 90
    char arr[9];
    //48 57
    //97 122
    for (int i = 0; i < 9; i++) {
        int z = rand() % 3;
        char c;
        if (z == 0) {
             c = 48 + rand() % 10;
            }
        if (z == 1) {
            c = 65 + rand() % 26;
        }
        if (z == 2) {
            c = 97 + rand() % 26;
        }
        arr[i] = c;
        }
    for (int i = 0; i < 9; i++) {
        cout << arr[i];
    }
    cout << endl;
   
    system("pause");
}

