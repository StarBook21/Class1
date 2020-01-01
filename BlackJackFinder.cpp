#include <iostream>
using namespace std;
char get_suit(int i) {
    if(i<13) return 'C';
    else if(i >=13 && i < 26) return 'D';
    else if (i >= 26 && i < 39) return 'H';
    else return 'S';
}
void printDeck_Before_Shuffle(int deck[], char suit[], int size) {
  for(int i = 0; i < 52; i++){
      cout << suit[i] << deck[i%13] << " ";
  }
  cout << endl << endl;
}
void shuffle(int deck[], char suit[], int size){
    int repeat = rand()%100 + 100;
    for(int i=0;i<repeat;i++) {
        for(int p = 0; p < size; p++){
          int r = rand()%size;
        char temporary;
         temporary = suit[p];
         suit[p] = suit[r];
          suit[r] = temporary;
          int temp;
          temp = deck[p];
          deck[p] = deck[r];
          deck[r] = temp;
        }
    }
}
void printDeck_After_Shuffle(int deck[], char suit[], int size){
    for(int i = 0; i < 52; i++){
        cout << suit[i] << deck[i]%13 + 1 << " ";
    }
    cout << endl;
    }
void black_jack(int deck[], char suit[]){
    for(int i = 0; i < 52; i++){
        if(deck[i]%13 + 1 + deck[i+1]%13 +1 == 21){
            cout << endl << "Black Jack found at: " << suit[i+1] << deck[i+1]%13 +1 << ", " << suit[i] << deck[i]%13 + 1 << endl;
            exit(0);
        }
    }
cout << endl << "No black jack :(" << endl;
}
int main(){
    srand(time(0));
    int deck[52], size=52;
    char suit[52];
    for(int i=0;i<52;i++) deck[i] = i+1;
    for(int i=0; i < 52; i++){
      suit[i] = get_suit(i);
      }
    printDeck_Before_Shuffle(deck,  suit, size);
    shuffle(deck, suit, size);
    printDeck_After_Shuffle(deck,  suit, size);
    black_jack(deck, suit);
return 0;
}
