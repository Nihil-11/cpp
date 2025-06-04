
#include <iostream>
#include <limits>
using namespace std;

bool run = true;

void clear_entry() { // очистка при неправильном вводе
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


// функции конвертации

void CtoF() {
    float C, F;
    
    while (true) {
        cout << "Введите значение в °C: ";
        cin >> C;
        
        if (cin.fail()) {
            cout << "Введено неподходящее значение" << endl;
            clear_entry();
            continue;
        }
        else if (C < -(273.15)) {
            cout << "Температура должна быть выше −273,15 °C (Абсолютный нуль по C)"<< endl;
            clear_entry();
            continue;
        }
        else {
            F = (C * 9/5) + 32;
            cout << C << " °C = " << F << " °F" << endl;
            break;
        }
    }
    
}

void FtoC() {
    float C, F;
    
    while (true) {
        cout << "Введите значение в °F: ";
        cin >> F;
        
        if (cin.fail()) {
            cout << "Введено неподходящее значение" << endl;
            clear_entry();
            continue;
        }
        else if (F < -459.67) {
            cout << "Температура должна быть выше −459.67 °F (Абсолютный нуль по F)"<< endl;
            clear_entry();
            continue;
        }
        else {
            C = (F - 32) * 5/9;
            cout << F << " °F = " << C << " °C" << endl;
            break;
        }
    }
    
}

void KtoF() {
    float K, F;
    
    while (true) {
        cout << "Введите значение в °K: ";
        cin >> K;
        if (cin.fail()) {
            cout << "Введено неподходящее значение" << endl;
            clear_entry();
            continue;
        }
        else if (K < 0) {
            cout << "Температура должна быть выше 0 °K (Абсолютный нуль по K)" << endl;
            clear_entry();
            continue;
        }
        else {
            F = (K - 273.15) * 9/5 + 32;
            cout << K << " °K = " << F << " °F" << endl;
            break;
        }
    }
    
}

void FtoK() {
    float K, F;
    
    while (true) {
        cout << "Введите значение в °F: ";
        cin >> F;
        
        if (cin.fail()) {
            cout << "Введено неподходящее значение" << endl;
            clear_entry();
            continue;
        }
        else if (F < -459.67) {
            cout << "Температура должна быть выше −459.67 °F (Абсолютный нуль по F)" << endl;
            clear_entry();
            continue;
        }
        else {
            K = (F - 32) * 5/9 + 273.15;
            cout << F << " °F = " << K << " °K" << endl;
            break;
        }
    }
    
}

void CtoK() {
    float C, K;
    
    while (true) {
        cout << "Введите значение в °C: ";
        cin >> C;
        
        if(cin.fail()) {
            cout << "Введено неподходящее значение" << endl;
            clear_entry();
            continue;
        }
        else if (C < -(273.15)) {
            cout << "Температура должна быть выше −273,15 °C (Абсолютный нуль по C)" << endl;
            clear_entry();
            continue;
        }
        else {
            K = C + 273.15;
            cout << C << " °C = " << K << " °K" << endl;
            break;
        }
    }
    
}

void KtoC() {
    float C, K;
    
    while (true) {
        cout << "Введите значение в °K: ";
        cin >> K;
        
        if (cin.fail()) {
            cout << "Введено неподходящее значение" << endl;
            clear_entry();
            continue;
        }
        else if (K < 0) {
            cout << "Температура должна быть выше 0 °K (Абсолютный нуль по K)" << endl;
            clear_entry();
            continue;
        }
        else {
            C = K - 273.15;
            cout << K << " °K = " << C << " °C" << endl;
            break;
        }
    }
    
}

// меню
void menu() {
    int choice;
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
    
    if (cin.fail()) {
        cout << "Неверный выбор " << endl;
        clear_entry();
    }
    else {
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
                cout << endl;
                cout << "Выход завершен" << endl;
                run = false;
                break;
                    
            
            default:
                cout << "Неверный выбор" << endl;
                break;
        }
    }
}

int main() {
    while (run) {
        menu();
    }
    return 0;
}
