#include<iostream>
using namespace std;

void reverse(string &str, int i){

    cout<<"call received for "<<str<<endl;
    // base case
    if(i>(str.length() -i-1)){
        return ;
    }
    swap(str[i],str[str.length() -i-1]);
    i++;

    // recurssive call
    reverse(str,i);
}

bool checkPalindrome(string str, int i, int j){
    // base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        // Recurrsive call
        return checkPalindrome(str,i+1,j-1);
    }
}

int power(int a,int b){

    // base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    // Recurrsive call
    int ans = power(a,b/2);

    if(b%2 == 0){ // if b is even
        return ans*ans;
    }   
    else{ // if b is odd
        return a*ans*ans;
    }
}

void sortArray(int *arr, int size){

    // base case -> already sorted
    if(size==0 || size ==1){
        return ;
    }

    // 1 case solved -> largest element ko end mai rakh dega
    for(int i=0;i<size-1;i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // Recurrsive call
    sortArray(arr,size-1);


}

int main(){
    
    // Q1) Reverse a string

    // string name = "abcde";
    // cout<<endl;
    // reverse(name,0);
    // cout<<endl<< name << endl; 

    // Q2) Check Palindrome

    // string name = "abbccbba";
    // cout<<endl;
    // bool isPalindrome = checkPalindrome(name,0,name.length()-1);
    // if(isPalindrome){
    //     cout<<"Its a Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Its Not a palindrome"<<endl;
    // }

    // Q3) Calculate Power using Recursion

    // int a,b;
    // cin>>a >>b;

    // int ans = power(a,b);
    // cout<<"ans is "<<ans<<endl;

    // Q4) Bubble Sort using recurrsion

    int arr[5] = {2,5,1,6,9};
    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }cout<<endl;



    return 0;
}