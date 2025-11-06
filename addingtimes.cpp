#include <iostream>
using namespace std;
class time1
{
    private:
    int hours,minutes;

    public:
    void gettime();
    void addtime(time1 x1, time1 x2);
    void display();
};

void time1::gettime()
{
    cout<<"Enter the hours: "<<endl;
    cin>>hours;
    cout<<"Enter the minutes: "<<endl;
    cin>>minutes;
}

void time1::addtime(time1 x1,time1 x2)
{
    minutes = (x1.minutes+x2.minutes);
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours+x1.hours+x2.hours;
}

void time1::display()
{
    cout<<"Hours"<<hours<<endl;
    cout<<"Minutes"<<minutes<<endl;
}

int main()
{
    time1 t1,t2,t3;
  
    t1.gettime();
    t2.gettime();
    t3.addtime(t1,t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}