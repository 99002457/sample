#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string.h>
#include<iostream>


class account {

    std::string acc_no;
    std::string acc_name;
    double balance;

  public:
    account();
    account (const std::string &,const std::string &,double);
    account (const std::string &,const std::string &);
    account (const account &);
    void credit(double);
    void debit(double);
    std::string getCustomerId();
    std::string getCustomerName();
    double getBalance() const;
    void display() const;

};

#endif
