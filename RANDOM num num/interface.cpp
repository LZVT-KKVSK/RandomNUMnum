//
//  interface.cpp
//  RANDOM num num
//
//  Created by Vlad Kukovsky on 20.09.17.
//  Copyright © 2017 Ku. All rights reserved.
//

#include "interface.hpp"
#include <iostream> 
#include <cmath>
#include "meto.hpp"
#include "HISTO.hpp"

using namespace std;


void sms() {
    cout<< "Натисніть /'1/' за Лінійний конгруентний метод\n";
    cout<< "Натисніть /'2/' за Квадратичний конгруентний метод\n";
    cout<< "Натисніть /'3/' за Числа Фібоначчі\n";
    cout<< "Натисніть /'4/' за Обернену конгруентна послідовність\n";
    cout<< "Натисніть /'5/' за Метод об’єднання\n";
    cout<< "Натисніть /'6/' за Правило “3 сігма”\n";
    cout<< "Натисніть /'7/' за Метод полярних координат\n";
    cout<< "Натисніть /'8/' за Метод співвідношень \n";
    cout<< "Натисніть /'9/' за Метод логарифму для генерування показового розподілу\n";
    cout<< "Натисніть /'10/' за Метод Аренса для генерування гамма-розподілу порядку a > 1\n";
    cout<< "Натисніть /'99/' щоб закінчити програму\n"; }

void Check (int& choice) {
    cin>> choice ;
    if(cin.fail ()) {
        cin.clear() ;
        cin.sync ();
        cin.ignore(INT_MAX, '\n'); //(numeric_limits<streamsize>::max()); //тут якщо не запроцює поставити стд::
        cout << endl;
        choice=-9;
        
    } }

/*double cycle () {
    for (int i=0; i<10; i++) { cout <<  <<endl;} return 0;} */

void MyChoice (int& choice){
    switch (choice) {
        case 1: cout<<"  Лінійний конгруентний метод\n"; histo(LKM_, 0, 1, 10); break;
        case 2: cout<<"  Квадратичний конгруентний метод\n"; histo(QCM_, 0, 1, 10);
            break;
        case 3: cout<<"  Числа Фібоначчі\n"; histo(Fib_, 0, 1, 10); break;
        case 4: cout<<"  Обернена конгруентна послідовність\n"; histo(IC_, 0, 1, 10); break;
        case 5: cout<<"  Метод об’єднання\n"; histo(Sh, 0, 1, 10); break;
        case 6: cout<<"  Правило “3 сігма”\n"; histo(SD, -3, 3, 10); break;
        case 7: cout<<"  Метод полярних координат\n"; histo(PC, -3, 3, 10); break;
        case 8: cout<<"  Метод співвідношень\n"; histo(RfND, -3, 3, 10); break;
        case 9: cout<<"  Метод логарифму для генерування показового розподілу\n"; histo(ED, 0, 100, 10); break;
        case 10: cout<<"  Метод Аренса для генерування гамма-розподілу порядку a > 1\n"; histo(Arence, 0, 100, 10); break;
        default: cout<<"  Виберіть метод з 1 до 10\n"; break;
            
            
    }
}

