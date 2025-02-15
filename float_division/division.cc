#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  //
  // Output the header lines.
  //

  cout << setw(5) << "";
  for (int32_t denom=-10; denom<=10; ++denom) {
    cout << setw(11) << showpos << denom;
  }
  cout << endl;

  cout << setfill('-') << setw(5) << "";
  for (int32_t denom=-10; denom<=10; ++denom) {
    cout << setfill('-') << setw(11) << "";
  }
  cout << endl;
  cout << setfill(' '); // need to reset the fill character

  //
  // Fill in the table rows.
  //

  for (float numer=-10; numer<=10; ++numer)
  {
    cout << setw(3) << showpos << static_cast<int>(numer) << ": ";
    for (float denom=-10; denom<=10; ++denom)
    {
      if (denom == 0){
        cout << setw(11) << " inf";
        continue;
      }
      float result = numer/denom;
      cout << setw(11) << showpos << scientific << setprecision(3) << result;
    }
    cout << endl;
  }
}

