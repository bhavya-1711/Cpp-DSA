#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int basic[3]= {1,2,3};

    array<int,4> a = {1,2,3,4}; // STL array
    int size = a.size();
    for(int i =0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
    // at() -> find element at specific index
    cout<<endl<<"Element at 2nd index-> "<<a.at(2)<<endl;
    // empty()-> return boolean true or false
    cout<<"Empty or not-> "<<a.empty()<<endl;

    cout<<"First element-> "<<a.front()<<endl;
    cout<<"Last element-> "<<a.back()<<endl;

    return 0;
}