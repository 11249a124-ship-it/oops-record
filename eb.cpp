#include <iostream>
using namespace std;
class EB
{
    private:
    int currentunits,customerid;
    char name[50];
    float amount;
    public:
    void getdetails();
    void calculate();
    void print();
};
void  EB::getdetails()
{
    cout<<"Enter customerid: ";
    cin>>customerid;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"current units: ";
    cin>>currentunits;
}
void EB ::calcluate()
{
    if (units <= 100)
        amount = 0;
    else if(units <= 200)
        amount = (units - 100)*2.25;
    else if(units <= 400)
        amount = (100*2.25)+(units-200)*4.25;
    else if(units <=600)
      amount = (100*2.25)+(units-400)*6.00;
    else (Units >600)
      amount = (100*2.25)+(200*4.25)+(200*6.00)+(units-600)*9.00;
}
void EB::print()
{
    cout<<"Bill"<<endl;
    cout<<"Customer_id "<<cust_id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"Units: "<<units<<endl;
    cout<<"Amount: "<<amount<<endl;
}
int main()
{
    EB E1;
    E1.getdetails();
    E1.calculate();
    E1.print();
}