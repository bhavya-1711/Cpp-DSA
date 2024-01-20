#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if(arr[row][col]==target){
                return 1;
            }
        }   
    }
    return 0;
}

// to print row wise sum 
void printSumRow(int arr[][3], int row, int col){
    cout<<"Printing sum-> "<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }   
        cout<<sum<< " ";
    }
    cout<<endl;
    
}

// to print col wise sum 
void printSumCol(int arr[][3], int row, int col){
    cout<<"Printing sum-> "<<endl;
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }   
        cout<<sum<< " ";
    }
    cout<<endl;
    
}

int largetRowSum(int arr[][3], int row, int col){
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }   
        
        if(sum> maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"The maximum sum is maxi -> "<<maxi<<endl;
    return rowIndex;
}

int main(){
    // taking input
    int arr[3][3];
    // int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};

    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222}, {3,33,333,3333}};

    // taking input- row wise
    cout<<"Enter the elements "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }   
    }

    // taking input - col wise
    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin>>arr[row][col];
    //     }   
    // }

    // print
    cout<<"Printing the array"<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<arr[row][col]<<" ";
        }   
        cout<<endl;
    }

    // cout<<"Enter the element to search"<<endl;
    // int target;
    // cin>>target;

    // if(isPresent(arr,target,3,3)){
    //     cout<<"Element found"<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }

    // printSumRow(arr,3,3);
    // cout<<endl;
    // printSumCol(arr,3,3);
    
    int ansIndex = largetRowSum(arr,3,3);
    cout<<"Max row is at index "<<ansIndex<<endl;
     
    return 0;
}