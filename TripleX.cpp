#include <iostream>

int main() {
  std::cout << "You are a secret agent breaking into a secure server room. \n";
  std::cout << "Enter the correct codes to continue... \n";

  const int CodeA = 4;
  const int CodeB = 3;
  const int CodeC = 4;

  const int CodeSum = CodeA + CodeB + CodeC; 
  const int CodeProduct = CodeA * CodeB * CodeC;
  int GuessA, GuessB, GuessC;

  std::cout << "There are three numbers in the code \n";
  std::cout << "The codes add up to: " << CodeSum << "\n";
  std::cout << "The codes multiple to give: " << CodeProduct << "\n";

  std::cout << "Please enter your three guesses separated with a space. \n";

  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;


  return 0;
}