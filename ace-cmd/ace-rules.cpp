#include <iostream>

int main() {
  bool loop = true;
  while (loop) {
    std::cout << "How much do you love ACE?" << std::endl
      << "(1) ACE is chill AF (as fudge)." << std::endl
      << "(2) DUUUUDDEEE! ACE is da BOMB!" << std::endl
      << "(3) Why would you even ask that man?????" << std::endl
      << "Choose an Option, or enter (4) to quit: ";

    int selection = 0;
    std::cin >> selection;
    std::string output;

    switch (selection) {
      case 1:
        output = "Hey! Watch your language!";
      break;
      case 2:
        output = "YOOOOO! CHILLLLLLL! It's OK!";
      break;
      case 3:
        output = "That's what I'm sayin' bro! I feel you!";
      break;
      case 4:
        output = "Bye!";
        loop = false;
      break;
      default:
        output = "Invalid Selection. Please try again.";
    }
    std::cout << std::endl << output << std::endl << std::endl;
  }
}
