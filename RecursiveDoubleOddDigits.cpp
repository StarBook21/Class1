#include <iostream>
using namespace std;
int doubleOdd(int x);
int main(){
  cout << doubleOdd(5966);
  return 0;
}
int doubleOdd(int x){
  if(x == 0) return 0;

  if(x%2 == 1) return 100*doubleOdd(x/10) + 10*(x%10) + x%10;
  return 10*doubleOdd(x/10) + (x%10);
}
