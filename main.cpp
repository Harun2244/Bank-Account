#include <iostream>
#include <limits>
#include <string>
#include "transaction.hpp"

std::string stars(40, '*');

void front_screen() {
  std::cout << stars << std::endl;
  std::cout << "Actions:" << std::endl;
  std::cout << "1. New transaction" << std::endl;
  std::cout << "2. Apply transaction" << std::endl;
  std::cout << "3. Pending transaction" << std::endl;
  std::cout << "4. Discard pending transaction" << std::endl;
  std::cout << "5. Balance" << std::endl;
  std::cout << "6. Exit" << std::endl;
}

int main(void) {
  int unos;
  Transaction a;
  do {
    front_screen();
    std::cin >> unos;

    if (std::cin.fail()) {
      std::cout << "Pogresan unos, pokusajte ponovo" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    switch (unos)
    {
      case 1:
        a.addNewTransaction();
        break;

      case 2:
        a.ApplyTransaction();
        break;

      case 3:
        a.PendingTransaction();
        break;

      case 4:
        a.DiscardPendingTransaction();
        break;

      case 5:
        a.Balance();
        break;

      case 6:
        std::cout << "Exit" << std::endl;
        break;

      default:
        std::cout << "Pogresan unos, pokusajte ponovo" << std::endl;
        break;
    }
  } while (unos != 6);

  return 0;
}

