#include <iostream>
#include <string>
using namespace std;

class Player {
protected:
    string name;
    int age;
    string team;
    int jerseyNumber;
    string position;
    static int playerCount;

public:
    Player() {
        name = "Unknown";
        age = 0;
        team = "None";
        jerseyNumber = 0;
        position = "None";
    }

    Player(string n, int a, string t, int jn, string p)
        : name(n), age(a), team(t), jerseyNumber(jn), position(p) {
        playerCount++;
    }

    Player(const Player &p)
        : name(p.name), age(p.age), team(p.team),
          jerseyNumber(p.jerseyNumber), position(p.position) {
        playerCount++;
    }

    ~Player() {
        cout << "Destroying Player: " << name << endl;
    }

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

    void displayDetails() {
        cout << "Player Name: " << name << "\nAge: " << age << "\nTeam: " << team
             << "\nJersey Number: " << jerseyNumber << "\nPosition: " << position << "\n";
    }

    friend void displayPlayerCount();

    static int getTotalPlayers() {
        return playerCount;
    }
};

int Player::playerCount = 0;

class ProfessionalPlayer : public Player {
private:
    string contractType;

public:
    ProfessionalPlayer() : Player(), 
    contractType("Standard") {}

    ProfessionalPlayer(string name, int age, string team, int jerseyNumber, string position, string contract)
        : Player(name, age, team, jerseyNumber, position), 
        contractType(contract) {}

    void inputDetails() {
        Player::inputDetails(); 
        cout << "Enter Contract Type (Full-time/Part-time): ";
        cin >> contractType;
    }

    void displayDetails() {
        Player::displayDetails(); 
        cout << "Contract Type: " << contractType << "\n\n";
    }

    void registerPlayer() {
        inputDetails(); 
        playerCount++;
    }
};

void displayPlayerCount() {
    cout << "\nTotal Registered Players :" << Player::getTotalPlayers() << endl << endl;
}

int main() {
    cout << "\n<<<<<---------------------------SPORTS LEAGUE MANAGEMENT - PLAYER REGISTRATION--------------------------->>>>>\n\n";
    int num;
    cout << "Enter number of players to register: ";
    cin >> num;

    ProfessionalPlayer *players = new ProfessionalPlayer[num];

    for (int i = 0; i < num; i++) {
        cout << "\nRegistering Player " << (i + 1) << "\n";
        players[i].registerPlayer();
    }

    cout << "\n------------------------------------------Player Details------------------------------------------\n";
    for (int i = 0; i < num; i++) {
        players[i].displayDetails();
    }
    displayPlayerCount();

    delete[] players;
    return 0;
}
