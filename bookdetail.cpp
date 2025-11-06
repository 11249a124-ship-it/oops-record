#include<iostream>
using namespace std;
class books
{
    private:
    char isbno[50],bookname[50],author[50];
    int pages,accno;
    float price;
    public:
    void getdata()
   {
       cout<<"Enter isbno: ";
       cin>>isbno;
       cout<<"Enter book name: ";
       cin>>bookname;
       cout<<"Enter author name: ";
       cin>>author;
       cout<<"Enter pages: ";
       cin>>pages;
       cout<<"Enter accno: ";
       cin>>accno;
       cout<<"Enter price: ";
       cin>>price; 
   }

    void display()
    {
        cout<<"isbno: "<<isbno<<endl;
        cout<<"bokkname: "<<bookname<<endl;
        cout<<"author: "<<author<<endl;
        cout<<"pages: "<<pages<<endl;
        cout<<"accno: "<<accno<<endl;
        cout<<"price: "<<price<<endl;
    }
};
int main()
{
    books b;
    b.display();
    b.getdata();
}
    
