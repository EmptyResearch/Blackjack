#include <iostream>
#include <math.h>
#include <string>
#include <ctime>
using namespace std;
int main(){
  string output = "yes";
  while(output == "yes"){
  srand(clock());
  int yourScore;
  int comScore;
  int money = 100;
  int bet = 0;
  int random;
  do{
  cout << "\n\nYour Score: " << yourScore << "\nComputer Score: " << comScore << "\nYour Cash: " << money;
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
    cout << "\nYou're busted! You lose " << bet << " coins.";
    money -= bet;
  }
  else if(comScore > 21){
    cout << "\nThe computer is busted, and you win " << bet << " coins!";
    money += bet;
  }
  else if(output=="youStand"){
      while(comScore <= 21){
      random = rand() % ((comScore+3)/3);
  if(random==0){
    cout << "\n\nYour Score: " << yourScore << "\nComputer Score: " << comScore << "\nYour Cash: " << money;
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
  if(comScore > 21){
    cout << "\nThe computer is busted, and you win " << bet << " coins!";
  }
  else{
    if(comScore > yourScore){
      cout << "\nThe computer wins by more points, and you lose " << bet << " coins.";
      money -= bet;
    }
    if(yourScore > comScore){
      cout << "\nYou win " << bet << " coins by point";
      money += bet;
    }
    if(yourScore == comScore){
      cout << "\nIt's a tie!";
    }
  }  
  }
  else if(output=="comStand"){
      while(yourScore <= 21){
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
      }
      if(yourScore > 21){
        cout << "You're busted! You lose " << bet << " coins.";    
      }      
      else{
    if(comScore > yourScore){
      cout << "The computer wins by more points, and you lose " << bet << " coins.";
      money -= bet;
    }
    if(yourScore > comScore){
      cout << "You win " << bet << " coins by point";
      money += bet;
    }
    if(yourScore == comScore){
      cout << "It's a tie!";
    }
  }
      
  }
  
  std::cout << "\nPlay Game? (yes/no): ";
  std::cin >> output;  
  }
  
  
  
  
  
  
}
