#include <iostream>
#include <fstream>
#include <string>

/*
Добрый день! Требуется написать элементарную программу состоящую из трех окон, 
в первом окне я добавляю список номеров
+7903787.....
Во втором окне я добавляю все префиксы например билайн(903, 904, 905, 906 и т.д.)
Нажимаю кнопку старт и программы выдает результат, т.е. все префиксы где у меня сработало совпадение префикса
*/


using namespace std;

class WindowsTelefon {

    string prefiks;
    string telefon;

public:
    void setTelefon(string str) {
        telefon = str;
        prefiks = str.substr(0, 5);
    }
    string getPrefics() {
        return prefiks;
    }
    void print() {
        cout << " Префикс = " << prefiks << " Телефон = " << telefon << endl;
    }

    WindowsTelefon operator = (WindowsTelefon second) {
        this->prefiks = second.prefiks;
        this->telefon = second.telefon;
        return *this;
    }
};


int main() {
    setlocale(LC_ALL, "RUS");
    int const SIZE = 10;
    string valueUser;

    WindowsTelefon firstWindow[SIZE];

    for (int i = 0; i < SIZE; i++) {
        //cin >> valueUser;
        valueUser = "+79273551267";
        firstWindow[i].setTelefon(valueUser);
    }

    for (int i = 0; i < SIZE; i++) {        
        firstWindow[i].print();
    }
    cout << "-------------------------------" << endl;

    WindowsTelefon secondWindows[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (firstWindow[i].getPrefics() == "+7927") {
            secondWindows[i] = firstWindow[i];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        secondWindows[i].print();
    }




    return 0;
}