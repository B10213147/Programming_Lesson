#include "pitcher.hpp"

struct pitcher MLB[6] = {
    {"���إ�", {19, 2}, 5},
    {"������", {59, 2}, 29},
    {"�Ф��N�j", {65, 1}, 21},
    {"Clayton Kershaw", {86, 2}, 15},
    {"Madison Bumgarner", {72, 1}, 17},

    {"Felix Hernandez", {63, 0}, 20}
};

float ERA_Calculate(struct pitcher a){
    float outs = a.IP.full*3 + a.IP.out;
    return a.run / outs * 27;
}

void pitcher_Sort(struct pitcher *a, unsigned int sizes){
    unsigned int i, j, min_loc;
    //selection sort
    for(i=0; i<sizes; i++){
        min_loc = i;
        for(j=i+1; j<sizes; j++){
            if(a[min_loc].ERA > a[j].ERA){
                min_loc = j;
            }
        }
        if(min_loc != i){
            pitcher_Swap(a+min_loc, a+i);
        }
    }
}

void pitcher_Swap(struct pitcher *a, struct pitcher *b){
    struct pitcher temp = *a;
    *a = *b;
    *b = temp;
}
