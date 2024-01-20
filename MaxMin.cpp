#include<iostream>
using namespace std;

int getMax(int num[], int n){
    int maxi = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi , num[i]);
        // if(num[i]>maxi){
        //     maxi = num[i];
        // }
    }
    return maxi;

}

int getMin(int num[], int n){
    int mini = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
        // if(num[i]<min){
        //     min = num[i];
        // }
    }
    return mini;

}

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int num[100];

    //taking input in array
    cout<<"Enter the values of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    
    cout<<"Maximum value is "<< getMax(num, size)<<endl;
    cout<<"Minimum value is "<< getMin(num, size)<<endl;
    
    return 0;
}