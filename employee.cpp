#include <iostream>
#include <iomanip>
using namespace std;
class employee{
    int id;
    string name;
    float salary;
    public:
    void getdetails(int i){
        cout<<"Enter details for emplolyee"<<i<<":\n";
        cout<<"Id: ";
        cin>>id;
        cout<<"Name: ";
        cin>>name;
        cout<<"Salary: ";
        cin>>salary;
        cout<<endl;
    }
    void display(){
        cout<<left<<setw(10)<<id<<left<<setw(15)<<name<<left<<setw(10)<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of employees:";
    cin>>n;

    employee emp[n];
    
    for(int i=0;i<n;i++){
        emp[i].getdetails(i+1);
    }

    cout<<"\n__________________________________________________\n";
    cout<<left<<setw(10)<<"Id"<<left<<setw(15)<<"Name"<<left<<setw(10)<<"Salary"<<endl;

    for(int i=0;i<n;i++){
        emp[i].display();
    }
    cout<<"______________________________________________________\n";
    return 0;
}