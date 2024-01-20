#include<iostream>
using namespace std;

int main(){
    
    int row, col;
    cout<<"Enter the no of rows"<<endl;
    cin>> row;

    int ** arr = new int* [row];

    // int *size = new int[row];
    int size[5] = {0};

    for(int i =0; i<row;i++){
        cout<<"enter the no of col in "<<i<<"th row" <<endl;
        cin>>col;
        size[i]= col;

        arr[i] = new int[size[i]];
    }

    // taking user input
    for(int i=0; i<row;i++){
        for(int j=0; j<size[i];j++){
            cin>> arr[i][j];
        }
    }

    // output
    cout<< endl;
    for(int i=0;i<row;i++){
        for(int j=0; j< size[i]; j++){
            cout<< arr[i][j]<<" ";
        }cout<<endl;
    }



    return 0;
}