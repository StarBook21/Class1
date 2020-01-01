#include <iostream>
#include <cstdlib>
int count_prime (int u);
using namespace std;
int main(){
int x, counter = 3, primes = 0;
bool flag;
cout << "You've got " << counter <<" more chances." << endl << " Give me a number between 50 and 100: ";
cin >> x;
  while (x < 50 || x > 100){
        counter--;
          if (counter <= 0){
            cout << "You broke the rules too many times. BYEEEEEEEEE" << endl;
            exit(1);
        }
        cout << "Error: illegal input" << endl << "You've got " << counter <<" more chances." << endl << "Give me a number between 50 and 100: ";
        cin >> x;
      }
      cout << "The prime numbers below " << x << " are: ";
      for (int f = 2; f < x; f++){
        flag = count_prime(f);
        if(flag){
            cout << f << " ";
            primes++;
        }
      }
      cout << endl << "A total of " << primes << " prime numbers less tham " << x << endl;
  return 0;
}

int count_prime (int u){
  bool flag = true;
    for(int j = 2; j <= u/2; ++j)
    {
        if (u%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
