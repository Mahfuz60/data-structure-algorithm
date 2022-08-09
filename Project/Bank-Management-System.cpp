#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
  string account_holder;
  string address;
  int age;
  int account_number;

protected:
  int balance;

private:
  string password;

public:
  // constructor
  BankAccount(string account_holder, string address, int age, string password)
  {
    this->account_holder = account_holder;
    this->address = address;
    this->age = age;
    this->password = password;
    this->account_number = rand() % 1000000000;
    this->balance = 0;
    cout << "your account number is:" << this->account_number << endl;
  }

  // balance check
  int show_balance(string password)
  {
    if (this->password == password)
    {
      return this->balance;
    }
    else
    {
      return -1;
    }
  }

  // member function
  void add_money(string password, int amount)
  {
    if (amount < 0)
    {
      cout << "Invaild amount" << endl;
      return;
    }
    if (this->password == password)
    {
      this->balance += amount;
      cout << "Add Money Succesfully done." << endl;
    }
    else
    {
      cout << "password didn't matched!" << endl;
    }
  }

  void deposit_money(string password, int amount)
  {
    if (amount < 0)
    {
      cout << "Invaild amount" << endl;
      return;
    }
    if (this->balance < amount)
    {
      cout << "Insufficient balance" << endl;
      return;
    }
    {
    }
    if (this->password == password)
    {
      this->balance -= amount;
      cout << "Deposit Money Successfully done." << endl;
    }
    else
    {
      cout << "password didn't matched!" << endl;
    }
  }
  friend class MyCash;
};

// Mobile banking system(bank to money add app)
class MyCash
{
protected:
  int balance;

public:
  MyCash()
  {
    this->balance = 0;
  }
  void add_money_from_bank(BankAccount *myAccount, string password, int amount)
  {
    if (amount < 0)
    {
      cout << "Invaild amount" << endl;
      return;
    }
    if (myAccount->balance < amount)
    {
      cout << "Insufficient balance" << endl;
      return;
    }
    if (myAccount->password == password)
    {
      this->balance += amount;
      myAccount->balance -= amount;
      cout << "Add Money from bank account is successfully" << endl;
    }
    else
    {
      cout << "password didn't matched" << endl;
    }
  }
  int show_balance()
  {
    return balance;
  }
};

// create a bank account
BankAccount *create_account()
{
  string account_holder, address, password;
  int age;
  cout << "Create Bank Account:" << endl;
  cin >> account_holder >> address >> age >> password;
  BankAccount *myAccount = new BankAccount(account_holder, address, age, password);
  return myAccount;
}

// add money bank account
void add_money(BankAccount *myAccount)
{
  string password;
  int amount;
  cout << "ADD MONEY" << endl;
  cin >> password >> amount;
  myAccount->add_money(password, amount);
  cout << "bank balance is:" << myAccount->show_balance("abcd") << endl;
}

// Deposit Money
void deposit_money(BankAccount *myAccount)
{
  string password;
  int amount;
  cout << "DEPOSIT MONEY" << endl;
  cin >> password >> amount;
  myAccount->deposit_money(password, amount);
  cout << "bank balance is:" << myAccount->show_balance("abcd") << endl;
}

// bank acoount to add money mobile apps
void add_money_form_bank(MyCash *myCash, BankAccount *myAccount)
{
  string password;
  int amount;
  cout << "ADD MONEY BANK TO MOBILE APP" << endl;
  cin >> password >> amount;
  myCash->add_money_from_bank(myAccount, password, amount);
  cout << "bank acount  balance is:" << myAccount->show_balance("abcd") << endl;
  cout << " myCash bank balance is:" << myCash->show_balance() << endl;
}

int main()
{
  BankAccount *myAccount = create_account();

  MyCash *myCash = new MyCash();

 Flag:
 cout << "Select Options" << endl;
    cout << "1.Add Money to Bank" << endl;
    cout << "2.Deposit Money from Bank" << endl;
    cout << "3.Add money to Mycash from bank" << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
      add_money(myAccount);
    }
    else if (option == 2)
    {
      deposit_money(myAccount);
    }
    else if (option == 3)
    {
      add_money_form_bank(myCash, myAccount);
    }
    else
    {
      cout << "Invaild Options" << endl;
    }
    goto Flag;
  // if (myAccount->show_balance("abcd") == -1)
  // {
  //   cout << "password didn't matched!" << endl;
  // }
  // else
  // {
  //   cout << "bank balance is:" << myAccount->show_balance("abcd") << endl;
  // }
  return 0;
}