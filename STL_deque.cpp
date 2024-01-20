#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // d.pop_front();

    cout<<"Print 1st index element-> "<<d.at(1)<<endl;

    cout<<"Front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"before erase size "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size "<<d.size()<<endl;
   
    return 0;
}