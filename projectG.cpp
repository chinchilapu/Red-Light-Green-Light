#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    srand(time(0));
    int playerPosition = 0;
    int finishLine = 10;
    char move;
    int light;
    cout << "Welcome to Red Light, Green Light!" << endl;
    cout<<endl;
    cout << "Try to reach the final line without moving during red light" << endl;
    while (playerPosition < finishLine) {
        cout << "Player's current position: " << playerPosition << "/" << finishLine << endl;
        light = rand() % 2;
        if (light == 0) {
            cout << "Red Light! Stop!" << endl;
        } else {
            cout << "Green Light! Go!" << endl;
        }
        if (light == 1) {
            cout << "Do you want to step ? (y/n): ";
            cin >> move;
            if (move == 'y' || move == 'Y') {
                playerPosition++;
                cout << "You moved one step forward" << endl;
            }
        }

        if (playerPosition >= finishLine) {
            cout << "Congratulations! You reached the finish line!" << endl;
            break;
        }
    }

    return 0;
}
