//A.P is (3*n+7) then find nth term

#include <iostream>
using namespace std;

int findNthTerm(int n){
    int ans=(3*n + 7);

    return ans;
}
int main(){
    int n;
    cin>>n;
    
    int answer= findNthTerm(n);
    cout<<answer<<endl;
    return 0;
}