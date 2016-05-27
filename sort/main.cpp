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

    //create sequence numbers
    for(i=1; i<size/2; i++){
        nums[i] = nums[i-1] + 1;
    }
    for(i=size/2; i<size; i++){
        nums[i] = nums[i-1] - 1;
    }
    compare = 0;
    swap_n = 0;

    cout<<"=====Before sort====="<<endl;
    for(i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    int max_num;
    //selection sort
    for(i=size-1; i>0; i--){
        max_num = i;
        for(j=i-1; j>=0; j--){
            compare++;
            if(nums[max_num] < nums[j]){
                max_num = j;
            }
        }
        if(max_num != i){
            swap_nums(max_num, i);
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
