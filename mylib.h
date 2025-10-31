#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
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
using std::list;
using std::setw;
using std::left;
using std::sort;
using std::right;
using std::function;

void StudentuSarG(int, int);
void MatuotiLaika(const string&, function<void()>);
template<typename Container>
void VykdytiPrograma(Container& Grupe, Container& Nuskriaustukai, Container& Kietuoliai);

void RusiuotiStudentus(vector<Studentas>&, int);
void SkaitytiIsFailo(const string&, vector<Studentas>&);
void SkaidytiStudentus(const vector<Studentas>&, vector<Studentas>&, vector<Studentas>&);
void IrasytiIFaila(const string&, const vector<Studentas>&);

void RusiuotiStudentus(list<Studentas>&, int);
void SkaitytiIsFailo(const string&, list<Studentas>&);
void SkaidytiStudentus(const list<Studentas>&, list<Studentas>&, list<Studentas>&);
void IrasytiIFaila(const string&, const list<Studentas>&);
