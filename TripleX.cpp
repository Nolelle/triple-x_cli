#include <iostream>

void PrintIntroduction(int Difficulty) 
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room. \n";
    std::cout << "Enter the correct codes to continue... \n\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntroduction(Difficulty);

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
  std::cin >> GuessA >> GuessB >> GuessC;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
  {
    std::cout << "You win! \n";
    return true;
  }
  else 
  {
    std::cout << "That is incorrect, you lose! \n";
    return false;
  }
};

int main() 
{
  int LevelDiffculty = 1;

  while(true)
  {
    bool bLevelComplete = PlayGame(LevelDiffculty);
    std::cin.clear(); // Clears any errors
    std::cin.ignore(); //Discards the buffer
    if (bLevelComplete)
    {
      ++LevelDiffculty;
    } 
  };   
 return 0;
};