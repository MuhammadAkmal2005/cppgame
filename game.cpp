#include <iostream>

using namespace std;

int main() {

  int hits = 0, numberOfHits = 0;
  int ships[4][4] = {
    {0,1,0,1,},
    {0,0,1,0,},
    {1,0,0,1,},
    {0,0,1,1,}
  };

  cout << "You must destroy five boats in as few turns as you can.\n\n";

  while (hits < 5) {

    int row, column;

    cout << "Enter the no. of row you want to hit from 0 to 3: ";
    cin >> row;

    cout << "Enter the no. of column you want to hit from 0 to 3: ";
    cin >> column;

    if (ships[row][column] == 1) {

      cout << "Yah! You hit the ship! " << (4 - hits) << " left. \n\n";
      hits++;
    } else cout << "Missed! Try again.\n\n";

    numberOfHits++;
  }

  cout << "Victory! You hit 5 ships in " << numberOfHits << " turns!";

  return 0;
}
