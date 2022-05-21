/*
01. Define a class Account, which contains following instance member variables
    a. account_no
    b. balance
    Also declare static member variable for rate of interest. Now define
    following member functions. (Analyze and decide which function has to
    be static and which has to be instance member)
    a. setBalance();
    b. setAccountNo();
    c. getBalance();
    d. getAccountNo();
    e. setRateOfInterest();
    f. getRateOfInterest();
*/
#include<iostream>
using namespace std;
class Account
{
private:
    int accountNo;
    float balance;
    static float rateOfInt;
public:
    void setBalance()
    {
        cout<<"Enter Account Balance: ";
        cin>>balance;
    }

    void setAccountNo()
    {
        cout<<"Enter Account Number: ";
        cin>>accountNo;
    }

    float getBalance()
    {
        return balance;
    }

    int getAccountNo()
    {
        return accountNo;
    }

    static void setRateOfInterest()
    {
        cout<<"Enter Rate of Interest: ";
        cin>>Account::rateOfInt;
    }

    static float getRateOfInterest()
    {
        return Account::rateOfInt;
    }
};
int main()
{
    Account a1;
    a1.setAccountNo();
    a1.setBalance();
    cout<<"Account Number is: "<<a1.getAccountNo()<<endl;
    cout<<"Account Balance is: "<<a1.getBalance()<<endl;
    Account::setRateOfInterest();
    cout<<"Rate of Interest is: "<<Account::getRateOfInterest();
    return 0;
}
