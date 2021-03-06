// Copyright 2021 Daria <photodoshfy@gmail.com>

#ifndef INCLUDE_CASHE_HPP_
#define INCLUDE_CASHE_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

const size_t iter= 1000;
const int Kb= 1024;

class Cashe {
private:
    string traverse;               // способ обхода
    vector <double> traverse_time; // кол-во экспериментов
    vector <size_t> bufsize;       // объём буфера
    vector <size_t> casheSize= { 640 * 1024,      // L1
                                       10*1024*1024,    // L2
                                       64*1024*1024 };  // L3

public:
    Cashe();
    ~Cashe();
    void print_experiments(const Cashe& c, ostream& os);
    void Cdirect();
    void Creverse();
    void Crandom();
};

#endif // INCLUDE_CASHE_HPP_
