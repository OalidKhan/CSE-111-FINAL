#include <bits/stdc++.h>
using namespace std;

class Employee{
    public:
    string name;
    int id;
    Employee(string n, int i){
        name = n;
        id = i;
    }
    virtual int calcAnnualPayment() = 0;
    void displayE(){
        cout << "Name: " << name << "\nID: " << id << endl;
    }
};

class FullTimeEmployee : public Employee{
    public:
    int monthlySalary;
    FullTimeEmployee(string n, int i, int ms) : Employee(n,i){
        monthlySalary = ms;
    }
    int calcAnnualPayment(){
        return (12 * monthlySalary);
    }
    void displayFTE(){
        Employee : displayE();
        cout << "Salary: " << calcAnnualPayment() << endl;
    }
};

class PartTimeEmployee : public Employee{
    public:
    int hourlySalary, totalWorkHours;
    PartTimeEmployee(string n, int i, int hs, int twh) : Employee(n,i){
        hourlySalary = hs;
        totalWorkHours = twh;
    }
    int calcAnnualPayment(){
        return (hourlySalary * totalWorkHours);
    }
    void displayPTE(){
        Employee : displayE();
        cout << "Salary: " << calcAnnualPayment() << endl;
    }
};

class Freelancer : public Employee{
    public:
    int projectCost, projectDuration;
    Freelancer(string n, int i, int pc, int pd) : Employee(n,i){
        projectCost = pc;
        projectDuration = pd;
    }
    int calcAnnualPayment(){
        return (projectCost * projectDuration);
    }
    void displayFL(){
        Employee : displayE();
        cout << "Salary: " << calcAnnualPayment() << endl;
    }
};

int main() {
    FullTimeEmployee obj1("Oalid Khan", 248, 50000);
    PartTimeEmployee obj2("Muntaha Mou Jim", 245, 300, 1460);
    Freelancer obj3("Estial Ahmed Turnab", 272, 500, 365);
    
    obj1.displayFTE();
    obj2.displayPTE();
    obj3.displayFL();
    
    return 0;
}
