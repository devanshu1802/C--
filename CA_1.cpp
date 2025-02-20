#include <iostream>
using namespace std;
int main()
{

    int num;
    string choice;

    cout <<endl<< "-------------------------------------The Dungeon Escape-------------------------------------" << endl;
    cout << "                       You are trappped in a dungeion with the three doors"<<endl;

    cout << endl<<"Enter a number from (1,2,3) to choose a door :" ;
    cin >>num;

    if(num==1){
        cout << endl<<"GAME OVER !!!!!"<<endl;
    }

    else if(num==2){
        for (int i=1; i<=10; i++){

            cout<<"You are heading towards the exit, and you had to walk 10 steps to Escape "<<endl;
            cout<<endl<<"Warning !!!!!!!  🦴🦴🦴🦴🦴🦴🦴🦴🦴🦴"<<endl;
            cout<<"You are on the 7th step , Do you want to proceed (yes or no):";
            cin>> choice;

            if(choice=="yes"){
                cout << endl<<"YOU ESCAPED !!!!! 🥹"<<endl;
                break;
            }
            else
                cout << endl<<"YOU HAVE STEPPED ON THE 7th STEP" <<endl<< "SO................... "<<endl;
                cout << endl<<"YOU FELL INTO A PIT AND YOU LOOSE 💔💔"<<endl;
                break;
        }
    }
    else
        cout<<"YOU FELL INTO A TRAP !!!!!!"<<endl;

        return 0;
}
