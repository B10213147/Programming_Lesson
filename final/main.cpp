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
    for(i=0; i<ARRAY_LENGTH(classA); i++){
        classA[i].BMI = BMI_Calculate(classA[i]);
        cout<<classA[i].name<<" = "<<classA[i].BMI<<endl;
    }
    body_Sort(classA, ARRAY_LENGTH(classA));
    cout<<"=====After sort====="<<endl;
    for(i=0; i<ARRAY_LENGTH(classA); i++){
        cout<<classA[i].name<<" = "<<classA[i].BMI<<endl;
    }
    return 0;
}




