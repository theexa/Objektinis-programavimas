#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <random>
#include <limits>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <functional>
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
using std::function;
using std::sort;

void SkaitytiIsFailo(const string& , vector<Studentas>& );
void SkaidytiStudentus(const vector<Studentas>&, vector<Studentas>& , vector<Studentas>& );
void IrasytiIFaila(const string& , vector<Studentas>&);
void StudentuSarG(int, int);
void MatuotiLaika(const string&, function<void()>);
void RusiuotiStudentus(vector<Studentas>&, int);
