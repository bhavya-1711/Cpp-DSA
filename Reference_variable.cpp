#include<iostream>
using namespace std;

int& func(int a){ // VERY BAD PRACTICE -> DO NOT USE THIS TECHNIQUE
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n ){ // VERY BAD PRACTICE -> DO NOT USE THIS TECHNIQUE
    int* ptr = &n;
    return ptr;
}

void update2(int &n){ // n is ref variable here
    n++;
}

void update1(int n){
    n++;
}

int main(){

    /*    
    int i = 5;
    // create a ref variable
    int &j = i;

    cout<< i << endl;
    i++;
    cout<< i << endl;
    j++;
    cout<< i << endl;
    cout<< j << endl; 
    */

    int n = 5;
    cout<< "Before "<< n << endl;
    update2(n);
    cout<<"After "<<n<< endl;

    func(n);
    fun(n);
    
    return 0;
}