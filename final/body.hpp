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

extern struct body classA[10];

extern float BMI_Calculate(struct body a);
extern void body_Sort(struct body *a, unsigned int sizes);
extern void body_Swap(struct body *a, struct body *b);

#endif // BODY_H_INCLUDED
