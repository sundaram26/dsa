#include <iostream>
using namespace std;

int main(){

    int amount;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;
    int Rs100, Rs50, Rs20, Rs10;

    switch(1){
        case 1: Rs100=amount/100;
                amount=amount%100;
                cout<<"Total number of 100 rupees note: "<<Rs100<<endl;
        case 2: Rs50=amount/50;
                amount=amount%50;
                cout<<"Total number of 50 rupees note: "<<Rs50<<endl;
        case 3: Rs20=amount/20;
                amount=amount%20;
                cout<<"Total number of 20 rupees note: "<<Rs20<<endl;
        case 4: Rs10=amount/10;
                amount=amount%10;
                cout<<"Total number of 10 rupees note: "<<Rs10<<endl;


        default: cout<<"Left amount is: "<<amount<<" RS"<<endl;
    }

    return 0;

}