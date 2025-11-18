#include <iostream>
using namespace std;
int main() {
    const int SIZE = 100;
    int radar[SIZE];

    cout << "Podaj 100 liczb od 1 do 9 oddzielonych spacjami:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> radar[i];
        if (radar[i] < 1 || radar[i] > 9) {
            cout << "Blad: liczba poza zakresem 1-9!\n";
            return 1;
        }
    }

    int minEnergy = radar[0];
    int maxEnergy = radar[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (radar[i] < minEnergy) {
            minEnergy = radar[i];
            minIndex = i;
        }
        if (radar[i] > maxEnergy) {
            maxEnergy = radar[i];
            maxIndex = i;
        }
    }

    cout << "Najmniejszy poziom energii: " << minEnergy
        << " na pozycji " << minIndex << endl;
    cout << "Najwiekszy poziom energii: " << maxEnergy
        << " na pozycji " << maxIndex << endl;

    return 0;
}





















































