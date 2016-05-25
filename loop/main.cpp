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

    cout<<"=====Prime====="<<endl;
    int start_n, end_n;
    cout<<"start=";
    cin>>start_n;
    cout<<"end=";
    cin>>end_n;

    if(start_n < 2){
        start_n = 2;
    }

    int j;
    bool flag;

    for(i=start_n; i<=end_n; i++){
        flag = true;
        for(j=2; j<i; j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout<<i<<" ";
        }
    }

    return 0;
}
