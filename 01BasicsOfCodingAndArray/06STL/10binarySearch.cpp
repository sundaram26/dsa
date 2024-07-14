#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(7);
    v.push_back(5);
    v.push_back(8);

    cout<<"Finding 5: "<<binary_search(v.begin(), v.end(), 8)<<endl;
    cout<<"lower bounds: "<<lower_bound(v.begin(), v.end(), 5)-v.begin()<<endl;


    int a=3;
    int b=5;

    cout<<"max=>"<<max(a,b);
    cout<<"min=>"<<min(a,b);

    swap(a,b);
    cout<<endl<<"a=>"<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"string=>"<<abcd<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    sort(v.begin(), v.end());        //based on intro sort.....intro sort teen sort se mil ke bana hai quick sort, heap sort and insertion sort.
    cout<<"after sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}