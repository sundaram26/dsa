#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, string> m;

    m[1]="sundaram";
    m[20]="soham";
    m[3]="supriya";
    m.insert({5, "bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"before erase: "<<endl;
    cout<<"finding 3: "<<m.count(3)<<endl;

    m.erase(3);
    cout<<"after erase: "<<endl;
    cout<<"finding 3: "<<m.count(3)<<endl;
    cout<<endl<<endl;
    
    
    auto it = m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }



}