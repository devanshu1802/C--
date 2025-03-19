#include<iostream>
using namespace std;
class Book{
    string title;
    string author;
    int year;
    int default_year = 2020;
    public:
    void get_data(){
        cout << "Title of the book :" ;
        cin >> title ;
        cout << "Author of the book :" ;
        cin >> author ;
        cout << "Publication year of the book :" ;
        cin >> year ;
    }
    void display_data(){
        cout<< "Title : " << title <<endl;
        cout<< "Author :" << author << endl;
        cout<< "Publication Year :" << year << endl;
    }
    void check_year(){
        if(default_year>year){
            cout << "The book was published before the year"<< endl;
        }
    }
};

int main(){
    Book b1;
    b1.get_data();
    b1.display_data();
    b1.check_year();
    return 0;
}