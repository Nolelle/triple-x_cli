#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty) 
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room. \n";
    std::cout << "Enter the correct codes to continue... \n\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntroduction(Difficulty);

  const int CodeA = rand() % Difficulty + Difficulty;
  const int CodeB = rand() % Difficulty + Difficulty;
  const int CodeC = rand() % Difficulty + Difficulty;

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
    std::cout << "You guessed correctly, time to move on to the next level! \n";
    return true;
  }
  else 
  {
    std::cout << "That is incorrect, time to try again! \n";
    return false;
  }
};

int main() 
{
  srand(time(NULL));
  
  int LevelDiffculty = 1;
  int const MaxLevel = 6;
 
  while(LevelDiffculty <= MaxLevel)
  {
    bool bLevelComplete = PlayGame(LevelDiffculty);
    std::cin.clear(); // Clears any errors
    std::cin.ignore(); //Discards the buffer
    if (bLevelComplete)
    {
      ++LevelDiffculty;
    } 
  };

  std::cout << "You have won! Congratualations!\n";   
 
  return 0;
};