#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string s;
    int c1 = 0, c2 = 0, c3 = -1;

    ifstream fin;
    fin.open("student.txt");

    while(!fin.eof()){
        getline(fin,s);
        c3++;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            c1++;
            if(ch == ' '){
                if(s[i+1] == ' ' && s[i+2] == ' ' && s[i+3] == ' '){
                    c2++;
                    i += 3;
                    }
            }
        }

    }
    cout << c1 << " " << c2 << " " << c3 << endl;

    fin.close();
    return 0;
}
