#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<< "Source "<<src<<" "<< " destination "<<dest<<endl;
    // base case 
    if(src == dest){
        cout<< " pahuch gaya "<<endl;
        return ;
    }

    // processing - ek step aage badh jao
    src++;

    // recurrsive call
    reachHome(src, dest);

}

int countDistinctWays(int nStairs) {
    //base case
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }

    // recurrsive call
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);

    return ans;
}

void sayDigit(int n, string arr[]){
    // base case
    if(n==0){
        return ;
    }

    // processing
    int digit = n%10;
    n = n/10;

    // recurrsive call
    sayDigit(n,arr); 

    cout<< arr[digit] << " ";
}

int main(){

    // walking to home example

    // int dest = 10;
    // int src = 1;
    // cout<< endl;
    // reachHome(src, dest);


    // climb stairs example

    // int n;
    // cin>> n;
    // int ans = countDistinctWays(n);
    // cout<<endl;
    // cout<<ans << endl;

    // say digits example
    string arr[10] = {"zero", "one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl<<endl;
    sayDigit(n,arr);
    cout<<endl<<endl<<endl;

    return 0;
}