#include<iostream>
using namespace std;

int main(){
    int num =5;

    // address of operator - &
    // cout<< "address of num is "<<&num<<endl;

    // int *ptr = &num;

    // cout<<"Address is : "<< ptr << endl;
    // cout<<"value is : "<< *ptr << endl;

    // double d = 4.3;
    // double *p2 = &d;

    // cout<<"Address is : "<< p2 << endl;
    // cout<<"value is : "<< *p2 << endl;

    // cout<<"Size of integer is "<<sizeof(num)<<endl;
    // cout<<"Size of pointer is "<<sizeof(p2)<<endl;

    int nums =5;
    int a = nums;
    a++;

    cout<< nums<<endl;
    
    int *p = &nums;
    cout<<"before "<<nums<<endl;
    (*p)++;
    cout<<"after "<<nums<<endl;

    // copying a pointer
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //important concept
    int i= 3;
    int *t = &i;
    // cout<< (*t)++<<endl;
    *t = *t + 1;
    cout<< *t<<endl;

    cout<<"before t "<< t <<endl;
    t = t + 1;
    cout<<"after t "<< t << endl;

    return 0;
}