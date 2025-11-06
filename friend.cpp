#include <iostream>
using namespace std;
class student2;
class student1
{
    private:
    int marks;
    public:
    student1()
    {
        cout<<"Enter marks: ";
        cin>>marks;
    }
    friend void comparemarks(student1,student2);
};
class student2
{
    private:
    int marks;
    public:
    student2()
    {
        cout<<"Enter marks: ";
        cin>>marks;
    }
    friend void comparemarks(student1,student2);
};
void comparemarks(student1 a,student2 b)
{
    if(a.marks>b.marks)
    cout<<"The marks of student 2 is less then student 1.\n";
    else if(a.marks<b.marks)
    cout<<"The marks of student 1 is less then student 2.\n";
    else
    cout<<"the marks of the sstudents is equal.\n";
}
int main()
{
    student1 s1;
    student2 s2;
    comparemarks(s1,s2);
    return 0;
}