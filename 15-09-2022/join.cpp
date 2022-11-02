#include<iostream>
using namespace std;


class name{
    char c[50];
    int len;

    public:
        name(){
            cout<<"Default Constructor"<<endl;
            cout<<"Enter name: ";
            gets(c);

            int k = -1;
            while(c[++k]);
            len = k;
        }
        name(name &x){
            cout<<"\nCopy Constructor";
            len = x.len;
            
            for(int i=0;i<len;i++){
                c[i] = x.c[i];                
            }
        }
        name(char ch[50]){
            cout<<"Parametrised Constructor";
            int k = -1;
            while(ch[++k]);
            len = k;
            for(int i=0;i<len;i++){
                c[i] = ch[i];                
            }
        }

        void concat(char x[50]){
            c[len++] = ' ';

            int k = -1;
            while(x[++k]){
                c[len++] = x[k];
            }
        }

        ~name(){
            cout<<"Deleting...\n"<<endl;
        }

        void display(){
            cout<<"\n"<<c<<endl<<"Length: "<<len<<endl;
        }

};

int main(){
    name n1;
    n1.display();
    
    {
        name n2(n1);
        n2.display();
    }
    char n[50] = "Harry";
    char m[50] = "Potter";
    name n3(n);
    n3.display();

    cout<<"\nConcatinated: ";
    n3.concat(m);
    n3.display();
}
