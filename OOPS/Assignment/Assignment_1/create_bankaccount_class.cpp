#include <iostream>
using namespace std;

class BankAccount
{
private:
    int account_number;
    float balance;

public:
    void setData(int acc, float bal)
    {
        account_number = acc;
        balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        balance = balance - amount;
    }

    void display()
    {
        cout << "Final Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;

    b1.setData(101, 0);

    b1.deposit(500);
    b1.withdraw(200);

    b1.display();

    return 0;
}