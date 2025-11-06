#include <iostream>
using namespace std;
class student 
{
    private:
    int value;
    public:
    student(){
        value=0;
        cout<<"default constructor is called"<<endl;
    }
    student(int v){
        value=v;
        cout<<"constructor is called"<<endl;
    }
    ~student()
    {
    cout<<"destructor is called"<<endl;
}
    void display(){
        cout<<"Value: "<<value<<endl;
    }
};
int main(){
    cout<<"Creating object d1"<<endl;
    student d1(10);
    d1.display();
    cout<<"Program starts"<<endl;
    student obj;
    cout<<"inside main funtion"<<endl;
    return 0;
}