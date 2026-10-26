#include<iostream>
using namespace std;
class Account
{
    protected:
    double balance=0;
    public:
    void deposit(double a)
    {
        balance+=a;
    }
    double get() const
    {
        return balance;
    }
};
class savings:public Account
{
    public:
    void addinterest()
    {
        balance*=1.04;
    }
};
class Current:public Account
{
    public:
void charge (double fee)
{
    balance -= fee;
}
};
int main()
{
    savings s;s.deposit(1000);s.addinterest();
    Current c;c.deposit(1000);c.charge(50);
    cout<<"savings="<<s.get()<<",current="<<c.get()<<endl;
    return 0;
    }
