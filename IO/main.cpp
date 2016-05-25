#include <iostream>

using namespace std;

int main()
{
    cout<<"=====int type====="<<endl;
    int a, b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;

    int sum = a + b;
    cout<<"a+b="<<sum<<endl;
    int difference = a - b;
    cout<<"a-b="<<difference<<endl;
    int product = a * b;
    cout<<"a*b="<<product<<endl;
    int quotient_int = a / b;
    cout<<"a/b="<<quotient_int<<endl;
    int remainder = a % b;
    cout<<"a%b="<<remainder<<endl;
    float quotient_float = (float)a / b;    //numerator should be float type
    cout<<"a/b(float)="<<quotient_float<<endl;

    cout<<"=====float type====="<<endl;
    float c, d;
    cout<<"c=";
    cin>>c;
    cout<<"d=";
    cin>>d;

    cout<<"c+d="<<c+d<<endl;
    cout<<"c-d="<<c-d<<endl;
    cout<<"c*d="<<c*d<<endl;
    cout<<"c/d="<<c/d<<endl;
    cout<<"c%d="<<(int)c%(int)d<<endl;  //remainder should be two int variables

    return 0;
}
