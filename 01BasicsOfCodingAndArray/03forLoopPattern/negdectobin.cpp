#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int n){
    int i=0;
    float ans=0;

    while(n!=0){

        int bit= n & 1;
        ans=(bit * pow(10,i)) + ans;

        n = n >> 1;
        i++;
        
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n<0){
        n=n*(-1);
     
        int ans= decimalToBinary(n);
        
        int newAns = ~(ans);
        newAns =newAns+1;
        cout<<newAns<<endl;
    }
    else{
        int ans=decimalToBinary(n);
        cout<<ans<<endl;
    }

}