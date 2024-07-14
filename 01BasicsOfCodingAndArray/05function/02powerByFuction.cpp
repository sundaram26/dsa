#include <iostream>
using namespace std;

//function Signature
int power(int a, int b){
    int ans=1;

    //function Body
    for(int i=1; i<=b; i++){
        ans= ans*a;
    }

    return ans;
}
int main(){

    int a, b;
    cin>>a>>b;
    
    //function call
    int answer= power(a,b);
    cout<<"answer is: "<< answer<<endl;

    return 0;
}