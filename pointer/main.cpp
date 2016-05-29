#include <iostream>
#include "array_length.h"

void bool_array_Print(bool *a, unsigned int sizes);
void int_array_Print(int *a, unsigned int sizes);
void selection_Sort(int *a, unsigned int sizes);
void swap_nums(int *a, int *b);

using namespace std;

int compare, swap_n;

int main()
{
    bool a[] = {1, 0, 1, 0};
    bool b[] = {0, 0, 0, 1, 1};
    bool c[] = {1, 0, 0, 1, 0, 0};

    bool_array_Print(a, ARRAY_LENGTH(a));
    bool_array_Print(b, ARRAY_LENGTH(b));
    bool_array_Print(c, ARRAY_LENGTH(c));

    int x[10] = {4, 5, -1};
    int y[] = {-1, 4, 100, 50, 60};

    compare = 0;
    swap_n = 0;
    cout<<"=====Before sort====="<<endl;
    int_array_Print(x, ARRAY_LENGTH(x));
    selection_Sort(x, ARRAY_LENGTH(x));
    cout<<"=====After sort====="<<endl;
    int_array_Print(x, ARRAY_LENGTH(x));
    cout<<"compare="<<compare<<endl;
    cout<<"swap="<<swap_n<<endl;

    compare = 0;
    swap_n = 0;
    cout<<"=====Before sort====="<<endl;
    int_array_Print(y, ARRAY_LENGTH(y));
    selection_Sort(y, ARRAY_LENGTH(y));
    cout<<"=====After sort====="<<endl;
    int_array_Print(y, ARRAY_LENGTH(y));
    cout<<"compare="<<compare<<endl;
    cout<<"swap="<<swap_n<<endl;

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

void selection_Sort(int *a, unsigned int sizes){
    unsigned int i, j, min_loc;
    //selection sort
    for(i=0; i<sizes; i++){
        min_loc = i;
        for(j=i+1; j<sizes; j++){
            compare++;
            if(a[min_loc] > a[j]){
                min_loc = j;
            }
        }
        if(min_loc != i){
            swap_nums(a+min_loc, a+i);
        }
    }
}

void swap_nums(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    swap_n++;
}
