//codestudio-->Count Ways To Reach The N-th Stairs.
#include <iostream>
using namespace std;

int countDistictWayToClimbStair(int stairs){
    if(stairs < 0){
        return 0;
    }
    if(stairs == 0){
        return 1;
    }
    int ans = countDistictWayToClimbStair(stairs-1) + countDistictWayToClimbStair(stairs-2);
    return ans;
}
int main(){
    int n;
    cin>>n;

    int ans = countDistictWayToClimbStair(n);
    cout<<ans<<endl;
    return 0;
}