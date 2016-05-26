/* Includes ----------------------*/
#include <iostream>

/* Functions Declaration ---------*/
int max2(int a, int b);
int max3(int a, int b, int c);
void max_Sort(int a, int b, int c);
int min2(int a, int b);
int min3(int a, int b, int c);
void min_Sort(int a, int b, int c);

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

    cout<<"=====Min_Sort====="<<endl;
    min_Sort(x, y, z);

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

void min_Sort(int a, int b, int c){
    int out = min3(a, b, c);
    cout<<out<<" ";

    if(out == a){
        out = min2(b, c);
        cout<<out<<" ";
        if(out == b) cout<<c<<endl;
        else cout<<b<<endl;
    }
    else if(out == b){
        out = min2(a, c);
        cout<<out<<" ";
        if(out == a) cout<<c<<endl;
        else cout<<a<<endl;
    }
    else{
        out = min2(a, b);
        cout<<out<<" ";
        if(out == a) cout<<b<<endl;
        else cout<<a<<endl;
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

int min2(int a, int b){
    if(a <= b) return a;
    else return b;
}

int min3(int a, int b, int c){
    int min_Num = a;
    if(min_Num > b) min_Num = b;
    if(min_Num > c) min_Num = c;
    return min_Num;
}

