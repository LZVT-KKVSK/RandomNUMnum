//
//  meto.cpp
//  RANDOM num num
//
//  Created by LIZA Kukovsky on 14.09.17.
//  Copyright © 2017 Ku. All rights reserved.
//
#include <iostream>

#include "meto.hpp"
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

// 1 метод
static unsigned long Xn6=time(0);

double LKM () {
    
    long a = 1021;
    long c = 24631;
    unsigned long m = 116640;
    Xn6 = (a*Xn6+c)%m ;
    return Xn6;
}

double LKM_()
{
    unsigned long m = 116640;
    return (double)LKM()/m;
}

// 2 метод

double QCM () {
    static unsigned long Xn;
    long a = 1021;
    long c = 24631;
    long d = 255;
    unsigned long m = 116640;
    Xn=(d*Xn^2+a*Xn+c)%m ;
    return Xn;
}

double QCM_()
{
    unsigned long m = 116640;
    return (double)QCM()/m;
}

// 3 метод

double Fib () {
    static int Xn=0, Xn_1=1, Xn_0=1;
    unsigned long m = 116640;
    Xn =(Xn_1 +Xn_0)%m ;
    Xn_0=Xn_1;
    Xn_1=Xn;
    return Xn;
}

double Fib_()
{
    unsigned long m = 116640;
    return (double)Fib()/m;
}

// 4 метод

long long inverse(long long b) {
    unsigned long m = 116640;
    long long ex = m - 2;
    if (b == 1)return 1;
    long long r = 1;
    while (ex) {
        if (ex & 1)r = (r * b) % m;
        ex = ex >> 1;
        b = (b * b) % m;
    } return r;
}
double IC () {
    static unsigned long Xn;
    unsigned long m = 116640;
    Xn = (5 * inverse(Xn) + 2) % m;
    return Xn;
}

double IC_()
{
    unsigned long m = 116640;
    return (double)IC()/m;
}

// 5 метод

double Sh () {
    double Zn=0;
    double Xn = 0;
    double Yn = 0;
    Xn=Fib_();
    Yn=QCM_();
    Zn = (Xn - Yn);
    while(Zn<0) ++Zn;
    return Zn;
}

// 6 метод

double SD () {
    double Xn;
    int m = 0, sigm = 1;
    double sum=0;
    for(int i = 0; i<12; i++)
    { 
        sum+=LKM_();
    }
    Xn =m+(sum-6)*sigm;
    return Xn;
}

// 7 метод

double PC () {
    while(true)
    {   double V1=0, V2=0;
        V1 = 2*IC_() - 1;
        V2 = 2*QCM_() - 1;
        double S;
        S = V1*V1+V2*V2;
        if(S < 1)
        {
            double Xn1, Xn2;
            Xn1 = V1*sqrt(((-2)*log(S))/S);
            Xn2 = V1*sqrt(((-2)*log(S))/S);
            if(LKM_() < 0.5) return Xn1;
            return Xn2;
        }
    }
    }


// 8 метод

double RfND() {
    while(1) {
    double V=0, U=0;
    V = LKM_();
        while(U==0) U = QCM_();
    double Xn;
    Xn = sqrt(8/exp(1))*((V - (1/2))/U);
        //if (Xn*Xn<=5-4exp(1/4)*U) return Xn;
        if (Xn*Xn<=(-4)*log(U)) return Xn;
    }
}

// 9 метод

double ED () {
    double u=0, M=-43, x=0;
    u=QCM_();
    x=M*log(u);
    return x;
}

// 10 метод

double Arence () {
    while (true) {
        double a = 3;
        double U;
        U=LKM_();
        double Xn, Y;
        const double pi = 3.1415926535897;
        Y = tan (pi*U);
        Xn = sqrt(2*a-1)*Y+a-1;
        if(Xn > 0)
        {
            double V;
            V = IC_();
            if (V > (1+Y*Y)*exp((a-1)*log(Xn/(a-1))-sqrt(2*a-1)*Y) ) return Xn;
        }
    }
}
