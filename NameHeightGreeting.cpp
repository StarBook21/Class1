#include <iostream>
using namespace std;
int main()
{
  string name;
  cout << "What's your name?\n";
  cin >> name;
  cout << "Hello, there " << name << "!" << endl;
  int height;
  cout << "What's your height in inches, " << name << "?" << endl;
  cin >> height;
  cout << name <<", you are " << height / 12 << " feet and " << height % 12 << " ich(es) tall!" << endl;
  if ( height < 64 )
 {     cout << "In terms of height, you're below average. But so am I! Wanna be short buddies?\n";
 }
 else if ( height > 70)
 {
    cout << "Wooooow! You're talllllllllllll! <insert obligatory 'what's the weather like up there?' joke>\n" ;
 }
 else
 {
     cout << "Eh. You're average. No fun.\n";
 }
  return 0;
}
