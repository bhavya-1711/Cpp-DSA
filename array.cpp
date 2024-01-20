#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
    
}
int main(){
    int third[15] = {2,7};
    printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"Size of Third is "<<thirdSize<<endl;

    int fourth[10]= {0};
    printArray(fourth, 10);
    return 0;
}