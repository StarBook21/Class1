#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
/*Question 1*/
int x;
cout << "Give me a positive number, if you please\n";
cin >> x;
//Checking the number is positive
if (x < 0){
  cout << "Not a positive number. Byyyyyeeee"<< endl;
  exit(1);
}
for (int c = 1; c <= 10; c++){
   cout << x <<"*"<< c <<" = "<< x*c << endl;
}
return 0;
}
