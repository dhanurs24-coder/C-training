#include<iostream>
using namespace std;

class account{
    public:
    double balance;        //instance variable so use constructor
    account(double b){
        balance = b;
    }
    virtual void deposit(double amount)=0;
    virtual void withdraw(double amount)=0;
    virtual void displayBalance()=0;
};

class SavingAccount:public account{
    public:
    SavingAccount(double b):account(b){}
    void deposit(double amount) override{
        balance += amount;
        cout<<"Deposite:"<<amount<<endl;
    }
    void withdraw(double amount) override{
        if(balance - amount>=500){
            balance-=amount;
            cout<<"withdraw:"<<amount<<endl;
        }
        else{
            cout<<"can't withdraw minimum balance 500 required"<<endl;
        }

    }
    void displayBalance() override{
        cout<<"savings balance:"<<balance<<endl;
    }
};
class CurrentAccount:public account{
    public:
    CurrentAccount(double b):account(b){}
    void deposit(double amount) override{
        balance += amount;
        cout<<"Deposite:"<<amount<<endl;
    }
    void withdraw(double amount) override{
        if(balance - amount>=500){
            balance-=amount;
            cout<<"withdraw:"<<amount<<endl;
        }
    }
    void displayBalance() override{
        cout<<"savings balance:"<<balance<<endl;
    }

};

int main (){
    account *accounts[2];
    accounts[0]=new SavingAccount(1000);
    accounts[1]=new CurrentAccount(3000);

    accounts[0]->deposit(500);
    accounts[0]->withdraw(1200);
    accounts[0]->displayBalance();
    
    cout<<endl;

    accounts[1]->deposit(500);
    accounts[1]->withdraw(1200);
    accounts[1]->displayBalance();

    delete accounts[0];
    
    delete accounts[1];

    return 0;
}