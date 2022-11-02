#include <iostream>

using namespace std;

class DB;
class DM{
public:
    int meters,centimeters;
    void input(){
        cout<<"enter the distance in meters and centimeters:";
        cin>>meters>>centimeters;
    }

    friend void store(DM m, DM c);
};
class DB{
public:
    int feet,inches;
    void input1(){
        cout<<"enter the distance in feet and inches:";
        cin>>feet>>inches;
    }

    friend void store1(DB f, DB c);
};
void store(DM m, DM c){

    cout<<"the distance in meters and centimeters are :"<<m.meters<<"m"<<m.centimeters<<"cm";
}
void store1(DB f,DB c){


    cout<<"the distance in feets and inches are :"<<f.feet<<"f"<<f.inches<<"inches";
}
int main(){
    DM c1,c2;
    DB f1,f2;
    string n;
    cout<<"enter the unit in which you want to add the distance (m,cm,f,inches):";
    cin>>n;
    if(n=="m" || n=="cm"){
        c1.input();

        store(c1,c1);
    }
    else if(n=="f" || n=="inches"){
        f1.input1();

        store1(f1,f1);
    }
    return 0;
}