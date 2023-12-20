#include "transaction.hpp"
#include <limits>

void Transaction::addNewTransaction() {
  int unos;
  int amount;
  std::string date, timme;
  do {
    std::cout << std::string(40, '*') << std::endl;
    std::cout << "Transaction" << std::endl;
    std::cout << std::string(40, '*') << std::endl;
    std::cout << "Actions: " << std::endl;
    std::cout << "1. Deposit money" << std::endl;
    std::cout << "2. Withdraw money" << std::endl;
    if (!(std::cin >> unos)) {
      std::cout << "Invalid input. Please try again." << std::endl;
      std::cin.clear(); 
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
      continue;               
    }
    


    if (unos == 1) {
 std::cout << "Balance: " << balance_ << std::endl;
      std::cout << "Enter the amount you want to deposit" << std::endl;
      std::cin >> amount;
      std::cout << "Date: " << std::endl;
      std::cin >> date;
      std::cout << "Time: " << std::endl;
      std::cin >> timme;
    }

    else if (unos == 2) {
      std::cout << "Balance: " << balance_ << std::endl;
      std::cout << "Enter the amount you want to withdraw" << std::endl;
      std::cin >> amount;
      if(amount > balance_){
      std::cout << "Funds unavailable!" << std::endl;
      return;
      }
      std::cout << "Date: " << std::endl;
      std::cin >> date;
      std::cout << "Time: " << std::endl;
      std::cin >> timme;
      amount = amount - amount - amount;
    }

    else {
      std::cout << "Invalid input, please try again"<<std::endl;
    }

  } while (unos != 1 && unos != 2);
  
  Transaction trans(amount, date, timme);
  newTransactions.push(trans);
  std::cout << "Transaction successfully added!" << std::endl;
}


void Transaction::ApplyTransaction(){
  if(newTransactions.empty()){
  std::cout << "No transactions to apply!" << std::endl;
  return;
  }
balance_ = balance_ + newTransactions.front().amount_;
newTransactions.pop();
std::cout << "Transaction successfuly applied!" << std::endl;
}


void Transaction::PendingTransaction(){
if(newTransactions.empty()){
std::cout << "No pending transactions" << std::endl;
return;
}

std::cout << "Pending transaction" << std::endl;
std::cout << "Amount: "<< newTransactions.front().amount_ << std::endl;
std::cout << "Date: "<< newTransactions.front().date_ << std::endl;
std::cout << "Time: "<< newTransactions.front().time_ << std::endl;

}


void Transaction::DiscardPendingTransaction(){
if(newTransactions.empty()){
std::cout << "No transactions to discard" << std::endl;
return;
}

else{
newTransactions.pop();
std::cout << "Transaction successfulz=y discarded" << std::endl;
}
}

void Transaction::Balance() {
std::cout << "Balance: " << std::endl;
std::cout << balance_ << std::endl;
}

