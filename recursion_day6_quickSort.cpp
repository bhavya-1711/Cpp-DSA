#include<iostream>
using namespace std;

int partition(int arr[], int s , int e){
    int pivot = arr[s];

    int count = 0;
    for (int i=s+1; i <=e; i++)
    {
        if(arr[i]<= pivot){
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    // left and right wala part sambhal lete hai
    int i =s, j=e;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<= pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
    
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }

    //partition karenge
    int p = partition(arr,s,e);

    // left part sort karenge
    quickSort(arr,s,p-1);

    // right part sort karenge
    quickSort(arr,p+1,e);
}

int main(){
    
    // int arr[11]= {2,4,1,6,9,4,8,9,6,0,12};
    // int n = 11;

    // quickSort(arr,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;



    return 0;
}