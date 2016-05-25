#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout<<"num1=";
    cin>>num1;

    int i = 1, answer1 = 1;
    while(i <= num1){
        answer1 = answer1 * i;
        i++;
    }

    cout<<num1<<"!="<<answer1<<endl;

    return 0;
}
