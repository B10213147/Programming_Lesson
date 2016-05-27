#include <iostream>

#define size 10

void swap_nums(int a, int b);

using namespace std;

int nums[size] = {size};
int compare=0, swap_n=0;

int main()
{
    int i;
    //create sequence numbers
    for(i=1; i<size; i++){
        nums[i] = nums[i-1] - 1;
    }

    cout<<"=====Before sort====="<<endl;
    for(i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    int j;
    //bubble sort
    for(i=size-1; i>0; i--){
        for(j=0; j<i; j++){
            compare++;
            if(nums[j] > nums[j+1]){
                swap_nums(j, j+1);
            }
        }
    }

    cout<<"=====After sort====="<<endl;
    for(i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"compare="<<compare<<endl;
    cout<<"swap="<<swap_n<<endl;

    return 0;
}

void swap_nums(int a, int b){
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
    swap_n++;
}
