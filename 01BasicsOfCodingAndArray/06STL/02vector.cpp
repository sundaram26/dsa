#include <iostream>
#include <vector>
using namespace std;

int main(){
    //initialisation of vector:
    vector<int> v;
    //other way
    //vector<int> a[5,1];  //it will initialised by 1 and size will be 5
    //vector<int> last(a); //it will copy all element of vector a
    
    cout<<"capacity: "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    cout<<"element at 2nd index: "<<v.at(2)<<endl;

    cout<<"front element: "<<v.front()<<endl;
    cout<<"last element: "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
}