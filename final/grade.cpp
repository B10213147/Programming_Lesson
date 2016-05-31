#include "grade.hpp"

struct grade classB[10] = {
    {"Amy", 88, 83, 11},
    {"Bob", 100, 9, 36},
    {"Cal", 56, 17, 92},
    {"Dave", 82, 18, 43},
    {"Emily", 24, 81, 24},

    {"Fred", 83, 46, 36},
    {"Gray", 35, 72, 15},
    {"Howard", 10, 65, 38},
    {"Ivy", 36, 49, 50},
    {"Jimmy", 31, 68, 53}
};

float avg_Calculate(struct grade a){
    float sum;
        sum = a.chinese + a.english + a.math;
    return sum / 3;
}

void grade_Sort(struct grade *a, unsigned int sizes){
    unsigned int i, j, min_loc;
    //selection sort
    for(i=0; i<sizes; i++){
        min_loc = i;
        for(j=i+1; j<sizes; j++){
            if(a[min_loc].average > a[j].average){
                min_loc = j;
            }
        }
        if(min_loc != i){
            grade_Swap(a+min_loc, a+i);
        }
    }
}

void grade_Swap(struct grade *a, struct grade *b){
    struct grade temp = *a;
    *a = *b;
    *b = temp;
}
