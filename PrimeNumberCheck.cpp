#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
  int num, p_factor;
  string prime;
  cout << "Give me a positive integer less than 1000, if you please: ";
  cin >> num;
  while (num >= 1000 ||  num <= 0){
    cout << "Not a positive integer less than 1000. Read the rules\n";
    cout << "Give me a positive integer less than 1000, if you please: ";
    cin >> num;
  }
  if (num == 2 || num == 1){
    prime = " is a prime number :)";
    cout << num << prime << endl;
  }
  for (int c=2; c < num; ++c){
    p_factor = num%c;
    if (p_factor == 0){
      prime = " isn't a prime number! :(\n";
      cout << num << prime << num << " is divisible by " << c << " at the very least"<<endl;
      exit(0);
  }
  else{
    prime = " is a prime number :)\n";
  }
}
  cout << num << prime << endl;
  return 0;
}
