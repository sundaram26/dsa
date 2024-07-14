#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

    //creation
    // unordered_map<string, int> m; //jis order me dlata hai uske reverse print hogi iteration karte waqt
    map<string, int> m;  //jis order me values dale hai ussi order me print hogi

    //insertion
    //1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string, int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;
    m["mera"] = 2; //this will update teh previous value

    //search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    // cout << m.at("unknownKey") << endl; //this will show that value is not mapped
    cout << m["unknownKey"] << endl;  //this will map the value to 0

    //size
    cout << m.size() << endl;

    //to check presence
    cout << m.count("bro") << endl; //absect-0, present-1

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

    //iterate
    for(auto i:m){
        cout<< i.first<< " " << i.second <<endl;
    }
    //iterator
    // unordered_map<string, int> :: iterator it = m.begin();
    map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first <<" "<<it->second<<endl;
        it++;
    }

    return 0;
}











