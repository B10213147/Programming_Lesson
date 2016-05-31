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

extern struct pitcher MLB[];

#endif // PITCHER_H_INCLUDED
