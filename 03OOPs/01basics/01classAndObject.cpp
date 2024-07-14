#include <iostream>
// #include "01HeroClass.cpp"    //isse hum kisi aur file me banaye huye class use kar sakte hai.
using namespace std;

class Hero{

    //properties
    public:
    int health;

    private:
    char level;

    void print(){
        cout<<level <<endl;
    }
};
int main(){

    //creation of Object
    Hero ramesh;

    cout<<"health is: "<<ramesh.health<<endl;
    // cout<<"Level is: "<<ramesh.level<<endl;     //isse access nhi kar sakte kyuki private hai 

    // cout<<"size: "<<sizeof(h1)<<endl;

    return 0;
}