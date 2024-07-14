#include <iostream>
using namespace std;

int fibonacci(int n){
    int a=0;
    int b=1;
    int fib;
    for(int i=2; i<n; i++){
        fib=a+b;
        a=b;
        b=fib;
    }
    return b;
}
int main(){
    
    int n;
    cin>>n;

    int ans= fibonacci(n);
    cout<<ans<<endl;

    return 0;
}