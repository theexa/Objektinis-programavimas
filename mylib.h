#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include <limits>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "stud.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::setw;
using std::left;
using std::sort;
using std::right;

void SkaitytiIsFailo(const string& , vector<Studentas>& );
void IrasytiIFaila(const string& , vector<Studentas>& ,string );
void StudentuSarG();
