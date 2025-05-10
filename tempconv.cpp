
#include <iostream>
using namespace std;

bool run = true;

void CtoF() {
    float C, F;
    cout << "Введите значение в °C: ";
    cin >> C;
    
    if (C < -(273.15)) {
        cout << "Температура должна быть выше −273,15 °C (Абсолютный нуль по C)"<< endl;
    }
    else {
        F = (C * 9/5) + 32;
        cout << C << " °C = " << F << " °F" << endl;
    }
}

void FtoC() {
    float C, F;
    cout << "Введите значение в °F: ";
    cin >> F;
    
    if (F < -459.67) {
        cout << "Температура должна быть выше −459.67 °F (Абсолютный нуль по F)"<< endl;
    }
    else {
        C = (F - 32) * 5/9;
        cout << F << " °F = " << C << " °C" << endl;
    }
}

void KtoF() {
    float K, F;
    cout << "Введите значение в °K: ";
    cin >> K;
    
    if (K < 0) {
        cout << "Температура должна быть выше 0 °K (Абсолютный нуль по K)" << endl;
    }
    else {
        F = (K - 273.15) * 9/5 + 32;
        cout << K << " °K = " << F << " °F" << endl;
    }
}

void FtoK() {
    float K, F;
    cout << "Введите значение в °F: ";
    cin >> F;
    
    if (F < -459.67) {
        cout << "Температура должна быть выше −459.67 °F (Абсолютный нуль по F)" << endl;
    }
    else {
        K = (F - 32) * 5/9 + 273.15;
        cout << F << " °F = " << K << " °K" << endl;
    }
}

void CtoK() {
    float C, K;
    cout << "Введите значение в °C: ";
    cin >> C;
    
    if (C < -(273.15)) {
        cout << "Температура должна быть выше −273,15 °C (Абсолютный нуль по C)" << endl;
    }
    else {
        K = C + 273.15;
        cout << C << " °C = " << K << " °K" << endl;
    }
}

void KtoC() {
    float C, K;
    cout << "Введите значение в °K: ";
    cin >> K;
    
    if (K < 0) {
        cout << "Температура должна быть выше 0 °K (Абсолютный нуль по K)" << endl;
    }
    else {
        C = K - 273.15;
        cout << K << " °K = " << C << " °C" << endl;
    }
}

int main() {
    int choice;
    while (run) {
        cout << "---------------------------------" << endl;
        cout << "----- Конвертер температуры -----" << endl;
        cout << "Перевод: " << endl;
        cout << "1. Из °C в °K " << endl;
        cout << "2. Из °K в °C " << endl;
        cout << "3. Из °C в °F " << endl;
        cout << "4. Из °F в °C " << endl;
        cout << "5. Из °K в °F " << endl;
        cout << "6. Из °F в °K " << endl;
        cout << "----> 0. Выход из программы <----" << endl;
        
        cout << "Выбор: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                CtoK();
                break;
            case 2:
                KtoC();
                break;
            case 3:
                CtoF();
                break;
            case 4:
                FtoC();
                break;
            case 5:
                KtoF();
                break;
            case 6:
                FtoK();
                break;
            case 0:
                cout << "Выход завершен" << endl;
                run = false;
                break;
                
            default:
                cout << "Неверный выбор" << endl;
        }
    }
    return 0;
}
