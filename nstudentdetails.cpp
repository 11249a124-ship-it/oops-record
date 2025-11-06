#include <iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3;
    float total,avg;
    char name[50];
    public:
    void getdata();
    void calculate();
    void print();
};
void student::getdata()
{
    cout<<"Enter your rollno: ";
    cin>>rollno;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your marks:  ";
    cin>>m1;
    cin>>m2;
    cin>>m3;
}
void student::calculate()
{
    total=m1+m2+m3;
    avg=total/3;
}
void student::print()
{
    cout<<"name: "<<name<<endl;
    cout<<"rollno: "<<rollno<<endl;
    cout<<"mark1: "<<m1<<endl;
    cout<<"mark2: "<<m2<<endl;
    cout<<"mark3: "<<m3<<endl;
    cout<<"total: "<<total<<endl;
    cout<<"avg: "<<total<<endl;
}
int main()
{
    student s[5];
    int i,n;
    cout<<"Enter the n value: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
    s[i].getdata();
    s[i].calculate();
    s[i].print();    
    }
    
}