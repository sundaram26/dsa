#include <iostream>
using namespace std;

bool palindrome(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return palindrome(str, i+1, j-1);
    }
}

int main(){

    string name = "abbcbca";
    
    bool ans = palindrome(name, 0, name.length()-1);

    if(ans){
        cout<<"the given string is palindrome."<<endl;
    }
    else{
        cout<<"the given string is not palindrome."<<endl;
    }

    return 0;
}