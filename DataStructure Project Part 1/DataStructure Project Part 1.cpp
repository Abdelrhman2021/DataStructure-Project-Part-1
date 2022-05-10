#include <iostream>
using namespace std;

void TowerHanoi(int n, char source, char destination, char through) {
    if (n == 1) {
        cout << "Moved the ring " << n << " from " << source << " to " << destination << " by " << through << endl;
    }
    else {
        TowerHanoi(n - 1, source, through, destination);
        cout << "Moved the ring " << n << " from " << source << " to " << destination << " by " << through << endl;
        TowerHanoi(n - 1, through, destination, source);
    }
}

int main()
{
    int rings;
    char source = 'A';
    char destination = 'B';
    char through = 'C';
    cout << "Please Enter the number of rings in The Tower Of Hanio : ";
    cin >> rings;
    TowerHanoi(rings, source, destination, through);

    return 0;
}
