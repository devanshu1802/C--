#include<iostream>
using namespace std;
class student{
        int rollno;
        string name;
        int marks1, marks2, marks3;
    public:
        void get_data(){
            cout << "Enter the name:";
            cin >> name;
            cout << "Enter the roll number: ";
            cin >> rollno;
            cout << "Enter the marks in order :";
            cin >> marks1 >> marks2 >> marks3;

        }
        int total(int a,int b,int c){
            return a+b+c;
        }
        void show_data(){
            cout << "Name of the student is :" << name << endl;
            cout << "Roll number of the student is " << rollno << endl;
            cout << "Total marks of the 3 subjects :" << total(marks1,marks2,marks3) << endl;
        }

};
int main(){
    student s1;
    s1.get_data();
    s1.show_data();
return 0;
}