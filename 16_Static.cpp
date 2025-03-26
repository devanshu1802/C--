#include<iostream>
using namespace std;
class Student{
    public:
        int roll_no;
        string name;
        string course;
        static int total_no_of_stu;
    
    void get_info(){
        cout<< "Name of the Student :" <<endl;
        cin >> name;
        cout<< "Roll Number:"<<endl;
        cin >> roll_no;
        cout<< "Course Name:" <<endl;
        cin >> course;
        total_no_of_stu++;
    }
    void display(){
        cout<< "Name of the Student :"<< name <<endl;
        cout<< "Roll Number:"<< roll_no <<endl;
        cout<< "Course Name:"<< course <<endl;
    }
    static void display2(){
        cout << "Total number of students are "<< total_no_of_stu <<endl ;
    }
};
int Student :: total_no_of_stu;
int main(){
    Student s1,s2;
    s1.get_info();

    s2.get_info();
    s2.display2();

return 0;
}