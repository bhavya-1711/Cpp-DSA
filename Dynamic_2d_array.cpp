#include<iostream>
using namespace std;

int main(){
    int row;
    cin>> row;

    int col;
    cin>> col;

    int ** arr = new int* [row];

    // creating a 2-D array
    for (int i = 0; i < row; i++){ 
        arr[i] = new int [col];
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>> arr[i][j];
        }
    }

    // taking output
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< arr[i][j]<< " ";
        }cout<<endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    delete []arr;

    // how to create a 2D array dynamically
    // input/ output
    // memory free kese karani hai


    
    


    return 0;
}