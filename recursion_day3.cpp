#include<iostream>
using namespace std;

// Q1) Array is sorted or not ??

bool isSorted(int *arr,int size){
    // base case
    if(size==0|| size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaningPart = isSorted(arr+1,size-1);
        return remaningPart;
    }
}

// Q2) Sum of array ??
int getSum(int arr[], int size){
    // base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;

    return sum;
}

// Q3) Linear search
bool linearSearch(int arr[], int size, int key){
    //base key
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainIngPart = linearSearch(arr+1,size-1,key);
        return remainIngPart;
    }

}

void print(int arr[], int s, int e){
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

// Q4) Binary search
bool binarySearch(int *arr, int s, int e, int key){

    print(arr,s,e);

    // base case -> element not found
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;
    cout<<"Value of arr[mid] is "<<arr[mid]<<endl<<endl;
     
    //element found 
    if(arr[mid] == key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }



}

int main(){
    // Q1) Array is sorted or not ??
     
    // int arr[5] = {2,4,9,9,9};
    // int size = 5;

    // bool ans = isSorted(arr,size);
    // if(ans){
    //     cout<< "Array is sorted "<<endl;
    // }
    // else{
    //     cout<<"Array is not sorted"<<endl;
    // }

    // Q2) Sum of array ??
    
    // int arr[5] = {2,4,9,9,9};
    // int size = 5;
    // int sum= getSum(arr,size);
    // cout<<"Sum is "<<sum<<endl;

    // Q3) Linear search

    // int arr[5] = {3,5,1,2,6};
    // int size = 5;
    // int key = 2;
    // bool ans = linearSearch(arr,size,key);
    
    // if(ans){
    //     cout<<"Key is Present"<<endl;
    // }
    // else{
    //     cout<<"key is Absent"<<endl;
    // }

    // Q4) Binary search

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size =11;
    int key = 222;
    int ans = binarySearch(arr,0,size-1,key);

    if(ans){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element absent"<<endl;
    }



    return 0;
}