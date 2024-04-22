#include<iostream>
#include<string>
using namespace std;
class Employee
{
  public:
  int id;
  string name;
   Employee(string empName, int empId) : name(empName), id(empId) {}
  
  int outp()
  {
      cout << "Name: " << name << endl;
      cout << "ID: " << id << endl;
      return 0;
  }
};
class manager :public Employee
{
    protected:
    string title;
    int dues;
    public:
    manager(string empName, int empId,string ti,int du) : Employee(empName, empId),title(ti), dues(du){}
    void oou()
    {
        Employee::outp();
        cout<<title<<endl;
        cout<<dues<<endl;
    }


};
class researcher: public Employee
{
    protected:
    int publication;
    public:
    researcher(string empName, int empId,int pu) : Employee(empName, empId),publication(pu){}
     void oor()
    {
        Employee::outp();
        cout<<publication<<endl;
    }
};
class labour:public Employee
{

};
int main()
{
    cout << "Employee Details:" << endl;
    Employee dom("Anharo", 1001);
    dom.outp();
    manager mgr1("Loki", 2001, "IT",400);
    cout << "Manager Details:" << endl;
    mgr1.oou();
    cout<<"Dues:"<<endl;
    researcher res("Sahil",200,20);
    res.oor();
     return 0;

}
