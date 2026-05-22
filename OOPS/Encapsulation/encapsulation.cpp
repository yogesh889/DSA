#include<iostream>
using namespace std;

class BankAccount{
    private: 
        string accountHolder;
        double balance;
    public:
        // Constructor 
        BankAccount(string name, double initialDeposit){
            accountHolder = name;
            balance = initialDeposit;
        }

        // public method to deposit
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
            }
        }

        // public method to withdraw
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
            };
        }

        //public method to check balance
        double getBalance(){
            return balance;
        }
};

int main(){
    BankAccount acc("yogesh", 1000);
    acc.deposit(500);
    acc.withdraw(200);

    cout<<"final balance: "<<acc.getBalance()<<endl;

    acc.balance = 9999;

    return 0;
}