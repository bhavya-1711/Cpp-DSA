#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p << endl;
}

void update(int *p){
    // p = p+1;
    // cout<<"inside "<<p<<endl;
    *p = *p + 1;
}

int getSum(int *arr, int n){

    cout<<endl<<"Size : "<< sizeof(arr) <<endl;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        // sum += arr[i];
        sum += i[arr]; // same as above
    }
    return sum;
}


int main(){

    /*   
    int value =5;
    int *p = &value;
    // print(p);

    cout<<"before "<<*p<<endl;
    update(p);
    // p = p+1;
    cout<<"after "<<*p<<endl;
    */

    int arr[6] = { 1,2,3,4,5,8};

    cout<< "Sum is "<<getSum(arr+3,3)<<endl;



    return 0;
}