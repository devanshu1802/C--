#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    int employee_id;

    void get_info(){
        cout<<"Enter Name of the Employee : "<<endl;
        cin>>name;
        cout<<"Enter salary : "<<endl;
        cin>>salary;
        cout<<"Enter the Employee ID: "<<endl;
        cin>>employee_id;

    }
    void display_info();

};
void Employee::display_info(){
    cout<<"The name of Employee is: "<<name<<endl;
    cout<<"The salary of Employee is: "<<salary<<endl;
    cout<<"The employee_id of Employee is: "<<employee_id<<endl;

}
int main(){
    cout<<"===================================="<<endl;
    cout<<"      WELCOME TO LPU.FACULTY.       "<<endl;
    cout<<"===================================="<<endl;


    Employee emp[3];
    for(int i=0; i<3; i++){
        emp[i].get_info();
    }
    for(int i=0; i<5; i++){
        emp[i].display_info();
    }
    return 0;

}
