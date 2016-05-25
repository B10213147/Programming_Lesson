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

    int num2;
    cout<<"num2=";
    cin>>num2;

    int answer2 = 1;
    for(i=1; i<=num2; i++){ //reset i value
        answer2 *= i;
    }

    cout<<num1<<"!="<<answer1<<endl;
    cout<<num2<<"!="<<answer2<<endl;

    return 0;
}
