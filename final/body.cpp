#include "body.hpp"

struct body classA[10] = {
    {"Amy", 150, 50},
    {"Bob", 170, 55},
    {"Cal", 176, 80},
    {"Dave", 187, 91},
    {"Emily", 153, 53},

    {"Fred", 163, 70},
    {"Gray", 166, 60},
    {"Howard", 202, 110},
    {"Ivy", 156, 51},
    {"Jimmy", 167, 49}
};

float BMI_Calculate(struct body a){
    return a.weight / (a.height/100 * a.height/100);
}

void body_Sort(struct body *a, unsigned int sizes){
    unsigned int i, j, min_loc;
    //selection sort
    for(i=0; i<sizes; i++){
        min_loc = i;
        for(j=i+1; j<sizes; j++){
            if(a[min_loc].BMI > a[j].BMI){
                min_loc = j;
            }
        }
        if(min_loc != i){
            body_Swap(a+min_loc, a+i);
        }
    }
}

void body_Swap(struct body *a, struct body *b){
    struct body temp = *a;
    *a = *b;
    *b = temp;
}

