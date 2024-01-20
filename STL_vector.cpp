#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);
    //5-> size || 1-> initially all elements are initialized by 1
    
    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    // capacity()-> indicates space for how many elements


    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1); // to add element at the last of vector
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl; // size()-> gives no of elements present

    cout<<"Element at 2nd index is -> "<<v.at(2)<<endl;

    cout<<"Front-> "<<v.front()<<endl;
    cout<<"Back-> "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); // deletes last element 

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear(); // clears size only , not capacity
    cout<<"After clear size "<<v.size()<<endl;

    return 0;
}