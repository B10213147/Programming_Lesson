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

extern struct grade classB[10];

extern float avg_Calculate(struct grade a);
extern void grade_Sort(struct grade *a, unsigned int sizes);
extern void grade_Swap(struct grade *a, struct grade *b);

#endif // GRADE_H_INCLUDED
