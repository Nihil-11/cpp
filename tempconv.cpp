
#include <iostream>
using namespace std;

int CtoK() {
    float C, K;
    cout << "Введите значение в °C: ";
    cin >> C;
    
    if (C < -(273.15)) {
        cout << "Температура должна быть выше −273,15 °C (Абсолютный нуль по C)";
    }
    else {
        K = C + 273.15;
        cout << C << " °C = " << K << " °K";
    }
    return 0;
}

int KtoC() {
    float C, K;
    cout << "Введите значение в °K: ";
    cin >> K;
    
    if (K < 0) {
        cout << "Температура должна быть выше 0 °K (Абсолютный нуль по K)";
    }
    else {
        C = K - 273.15;
        cout << K << " °K = " << C << " °C";
    }
    return 0;
}

int main() { 
    int choice;
    cout << "Конвертер температуры" << endl;
    cout << "Перевод: " << endl;
    cout << "1. Из °C в °K " << endl;
    cout << "2. Из °K в °C " << endl;
    
    cout << "Выбор: ";
    cin >> choice;
    
    if (choice == 1) {
        CtoK();
    } 
    else if (choice == 2) {
        KtoC();
    }
    else {
        cout << "Неверный выбор" << endl;
    }
    
    return 0;
}
