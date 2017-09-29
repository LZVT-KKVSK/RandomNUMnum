//
//  HISTO.cpp
//  RANDOM num num
//
//  Created by LIZA Kukovsky on 21.09.17.
//  Copyright © 2017 Ku. All rights reserved.
//

// Гістограма

#include "HISTO.hpp"

using namespace std;

void histo (function<double()> func, double low, double high, int n) {
    const int N=1000;
    vector<int> hi(n);
    double x=0;
    for(int i=0; i<N; ++i)
    {
        x=func();
        for(int j=0; j<n; ++j)
        {
            if(x>=(low+j*(high-low)/n) && x<(low + (j+1)*(high-low)/n)) ++hi[j];
        }
    }
    for(int j=0; j<n; ++j)
    {
        cout<< setprecision(1)<< fixed << "[" << low + j*(high-low)/n << ", " << low+(j+1)*(high-low)/n << "]  -  " << setprecision(4) << fixed << (double)hi[j]/N << endl;
    }
    
}
