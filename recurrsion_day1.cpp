#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }

    return n * factorial(n-1);
}

int power(int n){
    // base case
    if(n==0){
        return 1;
    }

    // recurrsive relation
    // int smallerProblem = power(n-1);
    // int biggerProblem = 2* smallerProblem;

    // return biggerProblem;
    return 2 * power(n-1);
}

void print(int n){
    // base case
    if(n==0){
        return ;
    }

    // Recurrsive relation
    print(n-1);

    cout << n << endl;
}
 
int main(){
    int n;
    cin>> n;
    cout<< endl;
    // int ans = factorial(n);
    // cout<< ans << endl;

    // int ans = power(n);
    // cout<< ans << endl;

    print(n);

    return 0;
}