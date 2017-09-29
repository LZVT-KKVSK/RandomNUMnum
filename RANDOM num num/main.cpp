//
//  main.cpp
//  RANDOM num num
//
//  Created by LIZA Kukovsky on 14.09.17.
//  Copyright © 2017 Ku. All rights reserved.
//

#include <iostream>
#include "meto.hpp"
#include "interface.hpp"
#include "HISTO.hpp"


using namespace std;

int main () {
    cout<<" Лабка з ГЕНЕРУВАННЯ ПСЕВДОВИПАДКОВИХ ЧИСЕЛ\n Яким методом хочете згенерувати?\n";
    sms();
    int choice;
    while(choice!=99)
    {
        
        Check(choice);
        MyChoice(choice);
    }

    return 0;
}
