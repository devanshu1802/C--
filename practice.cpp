#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    int marks;
    
    void set_details(string s, int f, int m){
        name= s;
        roll_no = f;
        marks = m;
    }

    void display_info(){
        cout << "The name of the Student : " << name << endl;
        cout << "The Roll Number is :" << roll_no << endl;
        cout << "The Marks of the student is :" << marks << endl;
    }
    string cal_Grade();
    void display_Result();
};

string student :: cal_Grade(){
    if(marks>90)
        return "Grade A";
    else if(marks>75)
        return "Grade B";
    else if(marks>60)
        return "Grade C";
    else
        return "Grade D";
    }


void student :: display_Result(){
    cout << "The Grade of the student is :" << cal_Grade() << endl;
}


int main(){
    student s1;
    s1.set_details("Devanshu", 56, 99);
    s1.display_info();
    s1.display_Result();
    return 0;
}
