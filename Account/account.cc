#include<iostream>

#include "account.h"

account::account():acc_no("0"),acc_name(""),balance(0) {} ;

account::account(const std::string &number,const std::string &name, double bal): acc_no(number),acc_name(name),balance(bal) {}

account::account(const std::string &number,const std::string &name): acc_no(number),acc_name(name),balance(0) {}

account::account(const account& ref):acc_no(ref.acc_no),acc_name(ref.acc_name),balance(ref.balance) {}

void account::credit(double amount) {
    balance += amount;
}
void account::debit(double amount) {
    if(balance>1000) {
        balance -= amount;
    }
}

std::string account::getCustomerId() {
    return acc_no;
}

std::string account::getCustomerName() {
    return acc_name;
}
double account::getBalance() const {
    return balance;
}

void account::display() const {
    std::cout << acc_no << "," << acc_name << ","<< balance << "\n";
}


