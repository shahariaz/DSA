#include <bits/stdc++.h>
using namespace std;

class Account {
  string name;
  int balance;
  int pin;
  static int total_account;
  static int total_bank_balance;

public:
  Account(string name, int balance, int pin) {
    this->name = name;
    this->balance = balance;
    this->pin = pin;
    total_account++;
    total_bank_balance += balance;
  }

  void deposit(int amount) {
    if (amount < 0) {
      cout << "Can't deposit negative amount" << endl;
    } else {
      this->balance += amount;
      total_bank_balance += amount;
      cout << "Your new balance is: " << this->balance << endl;
    }
  }

  void withdraw(int pin, int amount) {
    if (pin != this->pin) {
      cout << "Enter Correct Pin!!!" << endl;
    } else if (amount < 0) {
      cout << "Enter Positive Amount" << endl;
    } else if (amount > this->balance) {
      cout << "Insufficient Balance" << endl;
    } else {
      this->balance -= amount;
      total_bank_balance -= amount;
      cout << "Your new balance is: " << this->balance << endl;
    }
  }

  static void display() {
    cout << "Bank total customer and balance is " << total_account << " " << total_bank_balance << endl;
  }
};

int Account::total_account = 0;
int Account::total_bank_balance = 0;

int main() {
  Account Shahariaz("Shahariaz", 1000, 1221);
  Account Shahariaz1("Shahariaz1", 2000, 1111);
  Account Shahariaz2("Shahariaz2", 3000, 2222);
  
  Account::display(); 
}
