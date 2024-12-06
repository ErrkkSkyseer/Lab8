#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;

  int n = rank == 'S' ? 5 : rank == 'A' ? 4
                        : rank == 'B'   ? 3
                        : rank == 'C'   ? 2
                        : rank == 'D'   ? 1
                                        : -1;

  if (n > 0)
  {
    if (n > 1)
    {
      if (n > 2)
      {
        if (n > 3)
        {
          if (n > 4)
          {
            cout << "You have received Super Ultra Rare Unit!!!\n";
          }
          cout << "You have received 5 gems.\n";
        }
        cout << "You have received 1 gems.\n";
      }
      cout << "You have received 2000 coins.\n";
    }
    cout << "You have received very KAK items.\n";
  }
  return 0;
}
