#ifndef BODY_H_INCLUDED
#define BODY_H_INCLUDED

#include <iostream>

using namespace std;

struct body{
    string name;
    float height;   //cm
    float weight;   //kg
    float BMI;
};

extern struct body classA[];

#endif // BODY_H_INCLUDED
