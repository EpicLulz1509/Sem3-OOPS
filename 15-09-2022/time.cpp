#include<iostream>
using namespace std;


class Time{
    int hh, mm;

    public:
        Time(){
            cout<<"Default constructor"<<endl;
            cout<<"Enter hours and minutes: ";
            cin>>hh>>mm;                
        }
        Time(Time &x){
            cout<<"\nCopy constructor"<<endl;
            hh = x.hh;
            mm = x.mm;
        }
        Time(int x,int y = 0){
            cout<<"\nParametrized Constructor"<<endl;
            hh = x;
            mm = y;
        }

        ~Time(){
            cout<<"Deleting...\n"<<endl;
        }

        void display(){
            cout<<"Time: "<<hh<<":"<<mm<<endl<<endl;
        }
};


int main(){
    Time t1;
    t1.display();

    {
        Time t2(2);
        t2.display();
    }

    Time t3(t1);
    t3.display();
}