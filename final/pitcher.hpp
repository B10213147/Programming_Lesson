#ifndef PITCHER_H_INCLUDED
#define PITCHER_H_INCLUDED

#include <iostream>

using namespace std;

struct inning{
    int full;
    int out;
};
struct pitcher{
    string name;
    struct inning IP;
    int run;
    float ERA;
};

extern struct pitcher MLB[6];

extern float ERA_Calculate(struct pitcher a);
extern void pitcher_Sort(struct pitcher *a, unsigned int sizes);
extern void pitcher_Swap(struct pitcher *a, struct pitcher *b);

#endif // PITCHER_H_INCLUDED
