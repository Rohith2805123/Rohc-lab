#include <iostream> 
#include <string>
using namespace std;
  
class BankAccount {
    private:
        string owner;
        double balance;
    public:
        void openAccount(const string& ownerName, double initialBalance) {
            owner = ownerName;
            balance = (initialBalance >= 0) ? initialBalance : 0;
          
        }
        
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
            }
        }
        bool withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                return true;
            }
            return false;
        }
        double getBalance() const {
            return balance;
        }
        string getOwner() const {
            return owner;
        }
}; 

 int main() {
    BankAccount a;
    a.openAccount("Asha", 1000.0);
    a.deposit(500.0);
    if (!a.withdraw(2000)) 
    cout <<"Withdraw Denied (Insufficient).\n" << endl;
    a.withdraw(300.0);
    cout << a.getOwner() <<  "balance = " << a.getBalance() << endl;
    return 0;
}