#include <iostream>
#include "array_length.h"

void bool_array_Print(bool *a, unsigned int sizes);
void int_array_Print(int *a, unsigned int sizes);

using namespace std;

int main()
{
    bool a[] = {1, 0, 1, 0};
    bool b[] = {0, 0, 0, 1, 1};
    bool c[] = {1, 0, 0, 1, 0, 0};

    bool_array_Print(a, ARRAY_LENGTH(a));
    bool_array_Print(b, ARRAY_LENGTH(b));
    bool_array_Print(c, ARRAY_LENGTH(c));

    int x[] = {3, 4, 5};
    int y[] = {-1, 4, 100, 50, 60};

    int_array_Print(x, ARRAY_LENGTH(x));
    int_array_Print(y, ARRAY_LENGTH(y));

    return 0;
}

void bool_array_Print(bool *a, unsigned int sizes){
    unsigned int i;
    for(i=0; i<sizes; i++){
        if(a[i] != 0){
            cout<<"true ";
        }
        else{
            cout<<"false ";
        }
    }
    cout<<endl;
}

void int_array_Print(int *a, unsigned int sizes){
    unsigned int i;
    for(i=0; i<sizes; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
