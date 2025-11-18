#include <iostream>
#include <string>
using namespace std;
int main() {
    string commands;
    cout << "Podaj ciąg komend autopilota (zakończ '@'):\n";
    getline(cin, commands);

    int x = 0, y = 0;

    for (char c : commands) {
        if (c == '@') {
            break; 
        }
        else if (c == 'N') {
            y += 1;
        }
        else if (c == 'S') {
            y -= 1;
        }
        else if (c == 'E') {
            x += 1;
        }
        else if (c == 'W') {
            x -= 1;
        }
       
    }

    cout << x << " " << y << endl;
    return 0;
}
