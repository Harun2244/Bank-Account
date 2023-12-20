#pragma once
#include <iostream>
#include <queue>

struct Transaction {
  public:

  Transaction() = default;

  Transaction(int amount, std::string date, std::string timee)
      : amount_{amount}, date_{date}, time_{timee} {}


  int getAmount () const {
  return amount_;
  }
 
  const std::string getDate () const {
  return date_;
  }

  const std::string getTime() const {
  return time_;
  }

  void addNewTransaction();
  void ApplyTransaction();
  void PendingTransaction();
  void DiscardPendingTransaction();
  void Balance();

  std::queue<Transaction> newTransactions;

  private:
  int amount_;
  int balance_ = 0;
  std::string date_;
  std::string time_;
};



