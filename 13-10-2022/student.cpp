#include<iostream>
using namespace std;

class Student{
	protected:
		string name;
		int roll;
		Student(){
			cout << "Enter name and roll no: ";
			cin >> name >> roll;
		}
};



class Sports: public virtual Student{
	protected:
		int s_grade;
		Sports(){
			cout << "Enter sports grade: ";
			cin >> s_grade;
		}
};


class Exam: public virtual Student{
	protected:
		int e_grade;
		Exam(){
			cout << "Enter exam grade: ";
			cin >> e_grade;
		}
};


class Result: public Exam, public Sports{
	public:
		char r[2];
		Result(){
			if(s_grade >= 50)
				r[0] = 'P';
			else
				r[0] = 'F';
			if(e_grade >= 50)
				r[1] = 'P';
			else
				r[1] = 'F';
		}
		void display(){
			cout << "Name, roll no : " << name << " " << roll << endl;
			cout << "Sports and exam grades : " << r[0] << " " << r[1] << endl;
		}
};


int main(){
	Result r1;
	r1.display();
	return 0;	
}
