
#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int age;
    string team;
    int jerseyNumber;
    string position;
    static int playerCount; 

public:

    void registerPlayer() {
        inputDetails();
        playerCount++; 
    }

    void inputDetails() {
        cout << "Enter Player Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Team Name: ";
        cin >> team;
        cout << "Enter Jersey Number: ";
        cin >> jerseyNumber;
        cout << "Enter Position: ";
        cin >> position;
    }

    void displayDetails() ;

    friend void displayPlayerCount();

    static int getTotalPlayers() { 
        return playerCount;
     }

};

int Player::playerCount = 0;

void Player::displayDetails() {
    cout << "Player Name: " << name << "\nAge: " << age << "\nTeam: " << team << "\nJersey Number: " << jerseyNumber << "\nPosition: " << position << "\n\n";
}

void displayPlayerCount() {
    cout << "\nTotal Registered Players: " << Player::playerCount << endl;
}

int main() {
    cout << "\n<<<<<---------------------------SPORTS LEAGUE MANAGEMENT - PLAYER REGISTRAIOTN--------------------------->>>>>\n\n" ;
    int num;
    cout << "Enter number of players to register: ";
    cin >> num;

    Player players[num]; 

    for (int i = 0; i < num; i++) {
        cout << "\nRegistering Player " << (i + 1) << "\n";
        players[i].registerPlayer();
    }

    cout << "\nPlayer Details:\n";
    for (int i = 0; i < num; i++) {
        players[i].displayDetails();
    }

    displayPlayerCount();

    return 0;
}
