#include<iostream>
using namespace std;

class Food{
    string name;
    int id;
    string food;

    public:
        Food(){
            name = "Unknown";
            id = 1;
            food = "Milk Cake";
        }
        Food(string n, int i, string f){
            name = n;
            id = i;
            food = f;

        }
        void display(){
            cout << "The Customer Name is : "<< name << endl;
            cout << "The Customer Id is : "<< id << endl;
            cout << "The Customer has ordered : "<< food << endl << endl;
        }
};
int main(){

    Food f1,f2("Devanshu", 31, "Halwa");
    f1.display();
    f2.display();

return 0;
}