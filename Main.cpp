#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
  string output = "yes";
  while(output == "yes"){
  int yourScore;
  int comScore;
  int money = 100;
  int bet = 0;
  int random;
  do{
  cout << "\nEnter your bet: ";
  cin >> bet;
  }
  while (bet > money);
  yourScore = 0;
  comScore = 0;
  while (comScore <= 21 && yourScore <= 21)  {
    cout << "\n\nYour Score: " << yourScore << "\nComputer Score: " << comScore << "\nYour Cash: " << money;
    cout << "\n\nWill you hit or stand? (hit/stand): ";
    cin >> output;
    if(output=="hit"){
      random = rand() % 13 + 1;
      cout << "\nYou got a(n) " << random << "!\n";
      yourScore += random;
    }
    if(output=="stand"){
      cout << "\nYou stand.";
      output = "youStand";
      break;
  }
  random = rand() % ((comScore+3)/3);
  if(random==0){
    random = rand() % 13 +1;
    cout << "\nThe computer hits, and gets a " << random << "!";
    comScore += random;
  }
  else{
    cout << "\nThe computer stands.";
    output = "comStand";
    break;
  }
  }
  if(yourScore > 21){
    cout << "You're busted! You lose " << bet << " coins.";
    money -= bet;
  }
  else if(comScore > 21){
    cout << "The CPU is busted, and you win " << bet << " coins!";
    money += bet;
  }
  else if(output=="youStand"){
      random = rand() % ((comScore+3)/3);
  if(random==0){
    random = rand() % 13 +1;
    cout << "\nThe computer hits, and gets a " << random << "!";
    comScore += random;
  }
  else{
    cout << "\nThe computer stands.";
    output = "comStand";
    break;
  }
      
  }
  
  
  
  
  
  std::cout << "\nPlay Game? (yes/no): ";
  std::cin >> output;  
  
}
