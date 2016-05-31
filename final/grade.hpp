#ifndef GRADE_H_INCLUDED
#define GRADE_H_INCLUDED

#include <iostream>

using namespace std;

struct grade{
    string name;
    int chinese;
    int english;
    int math;
    float average;
};

extern struct grade classB[];

#endif // GRADE_H_INCLUDED
