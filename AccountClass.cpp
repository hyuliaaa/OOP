#include <iostream>
using namespace std;

class Account{
private:
    string name;
    double balance;
    
    ///methods
    
public:
    void setBalance(double bal)
    {
        balance=bal;
    }
    double getBalance()
    {
        return balance;
    }
    void setName(string n)
    {
        name=n;
    }
    
    string getName()
    {
        return name;
    }
    bool deposit(double amount);
    bool withdraw (double amount);
    
 };
 
 
 bool Account::deposit(double amount)
 {
     balance+=amount;
     return true;
 }
 
 bool Account::withdraw(double amount)
 {
     if (balance-amount>=0)
        return true;
     return false;
 }
 
 
    
int main()
{
    
    Account frankAcc;
    frankAcc.setName("Frank");
    frankAcc.setBalance(1000);
    
    
    
    
    return 0;
}
