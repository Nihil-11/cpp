
#include <iostream>
using namespace std;

int CtoF() {
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
    return 0;
}

int FtoC() {
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
    return 0;
}

int KtoF() {
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
    return 0;
}

int FtoK() {
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
    return 0;
}

int CtoK() {
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
    return 0;
}

int KtoC() {
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
    return 0;
}

int main() {
    int choice;
    while (true) {
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
        
        if (choice == 1) {
            CtoK();
        } 
        else if (choice == 2) {
            KtoC();
        }
        else if (choice == 3) {
            CtoF();
        }
        else if (choice == 4) {
            FtoC();
        }
        else if (choice == 5) {
            KtoF();
        }
        else if (choice == 6) {
            FtoK();
        }
        else if (choice == 0) {
            cout << "Выход завершен" << endl;
            break;
        }
        else {
            cout << "Неверный выбор" << endl;
        }
    }
    return 0;
}
