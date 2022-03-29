//Assignment 04
//Question 02
//2021PGCACA054
#include<iostream>
using namespace std;

class Partners
{

    int partnerid;
    double contribute_amount;

public:
    static double companyfund;

    Partners(int partnerid, double contribute_amount)
    {
        this->partnerid = partnerid;
        this->contribute_amount = contribute_amount;

        companyfund += contribute_amount;
    }

    void addamount(double amount)
    {
        contribute_amount += amount;
        companyfund += amount;
    }

    static void payBills(double amount)
    {
        companyfund -= amount;
    }

    void withdrawamount(double amount)
    {
        contribute_amount -= amount;
        companyfund -= amount;
    }
};

//int Partners::companyfund = 0;

int main()
{
    Partners data;


    int ch=1;
    while(ch!=4)
    {
        int input;
        cout<<"----------------------"<<endl;
        cout<<"choose one option"<<endl;
        cout<<"1 - Add amount"<<endl;
        cout<<"2 - Pay bills"<<endl;
        cout<<"3 - Withdraw Amount"<<endl;
        cout<<"4 - Exit"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"Enter your choice";
        cin>>ch;
        switch(ch)
        {
             case 1;
             cout<<"Enter the amount :";
             ///>>dtadamount(input):


    }
    return 0;
}
