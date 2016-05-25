#include <iostream>
#include <cstdlib>

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

    cout<<"=====Prime V1====="<<endl;
    int start_n, end_n;
    int compare = 0;
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
            compare++;
            if(i%j == 0){
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout<<i<<" ";
        }
    }
    cout<<endl<<"compare="<<compare<<endl;

    cout<<"=====Prime V2====="<<endl;
    int num_Prime = 0;
    int *prime = (int*)malloc(end_n);

    compare = 0;
    for(i=2; i<start_n; i++){
        flag = true;
        for(j=2; j<i; j++){
            compare++;
            if(i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            prime[num_Prime] = i;
            num_Prime++;
        }
    }

    int n = num_Prime;

    for(i=start_n; i<=end_n; i++){
        flag = true;
        for(j=0; j<num_Prime; j++){
            compare++;
            if(i%prime[j] == 0){
                flag = false;
                break;
            }
        }

        if(flag == true){
            prime[j] = i;
            num_Prime++;
        }
    }

    for(i=n; i<num_Prime; i++){
        cout<<prime[i]<<" ";
    }
    cout<<endl<<"compare="<<compare<<endl;
    cout<<"num_Prime="<<num_Prime<<endl;

    free(prime);

    return 0;
}
