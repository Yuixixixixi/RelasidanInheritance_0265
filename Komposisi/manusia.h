#ifndef MANUSIA_H
#define MANUSIA_H
#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"

class manusia{
    public:
    string name;
    jantung varJantung;

    manusia(string pName) : name(pName) {
        cout << name << " hidup\n";
    }
    ~manusia() {
        cout << name << " mati\n";
    }
};
#endif