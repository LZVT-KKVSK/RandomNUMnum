//
//  HISTO.hpp
//  RANDOM num num
//
//  Created by LIZA Kukovsky on 21.09.17.
//  Copyright © 2017 Ku. All rights reserved.
//

#ifndef HISTO_hpp
#define HISTO_hpp

#include <stdio.h>
#include <iostream>
#include "meto.hpp"
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <functional>
#include <vector>
using namespace std;

void histo(function<double()> func, double low, double high, int n);

#endif /* HISTO_hpp */
