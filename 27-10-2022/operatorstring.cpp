#include <iostream>
#include <string.h>
using namespace std;

class String{
    public:
        char s[25];
        String(){
            strcpy(s, "");
        }
        String(char s[]){
            strcpy(this->s, s);
        }

        String operator +(String op){
            String temp;
            strcat(temp.s, op.s);
            strcat(temp.s, s);
            return temp;
        }

        void operator = (String op){
            strcpy(s, op.s);
            // return temp;
        }

        String operator += (String op){
             if (strcmp(s, op.s) == 0)
		        cout << "Both the strings are equal." << endl;
	        else
		        cout << "The strings are not equal." << endl;
            // return temp;
        }

        void display(){
            cout << s << endl;
        }
};

int main(){
    char str1[] = "How" ;
    char str2[] = "Are";
    String op1(str1), op2(str2), op3, op4;
    op3 = op1 + op2;
    op3.display();
    op4 = op3;
    op4.display();
    op3 += op4;
    return 0;
}