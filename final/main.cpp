#include <iostream>
#include "array_length.h"
#include "grade.hpp"
#include "body.hpp"
#include "pitcher.hpp"

using namespace std;

int main()
{
    unsigned int i;
    cout<<"=====Before sort====="<<endl;
    for(i=0; i<ARRAY_LENGTH(MLB); i++){
        MLB[i].ERA = ERA_Calculate(MLB[i]);
        cout<<MLB[i].name<<" = "<<MLB[i].ERA<<endl;
    }
    pitcher_Sort(MLB, ARRAY_LENGTH(MLB));
    cout<<"=====After sort====="<<endl;
    for(i=0; i<ARRAY_LENGTH(MLB); i++){
        cout<<MLB[i].name<<" = "<<MLB[i].ERA<<endl;
    }
    return 0;
}
