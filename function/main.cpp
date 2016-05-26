/* Includes ----------------------*/
#include <iostream>

/* Functions Declaration ---------*/
int max2(int a, int b);
int max3(int a, int b, int c);
void max_Sort(int a, int b, int c);

using namespace std;

/* Global Variables --------------*/
int x, y, z;

/* Main Function -----------------*/
int main()
{
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;
    cout<<"z="; cin>>z;

    cout<<"=====Max_Sort====="<<endl;
    max_Sort(x, y, z);

    return 0;
}

void max_Sort(int a, int b, int c){
    int out = max3(a, b, c);
    cout<<out<<" ";

    if(out == a){
        out = max2(b, c);
        cout<<out<<" ";
        if(out == b){
            cout<<c<<endl;
        }
        else{   //out == c
            cout<<b<<endl;
        }
    }
    else if(out == b){
        out = max2(a, c);
        cout<<out<<" ";
        if(out == a){
            cout<<c<<endl;
        }
        else{   //out == c
            cout<<a<<endl;
        }
    }
    else{   //out == c
        out = max2(b, a);
        cout<<out<<" ";
        if(out == b){
            cout<<a<<endl;
        }
        else{   //out == a
            cout<<b<<endl;
        }
    }
}

int max2(int a, int b){
    if(a >= b) return a;
    else return b;
}

int max3(int a, int b, int c){
    int max_Num = a;
    if(max_Num < b) max_Num = b;
    if(max_Num < c) max_Num = c;
    return max_Num;
}

