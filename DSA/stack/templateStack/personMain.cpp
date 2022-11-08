#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;

int globalId = 1001;

class person
{
  string name;
  int id;
  float salary;

public:
  // null constructor
  person()
  {
    name = "";
    id = -1;
    salary = -1.0;
  }
  // setter function
  void setName(string name)
  {
    this->name = name;
  }
  void setSalary(float salary)
  {
    this->salary = salary;
  }
  // parse by value constructor
  person(string name, float salary)
  {
    setName(name);
    setSalary(salary);
    this->id = globalId;
    globalId++;
  }

  // get function
  int getId()
  {
    return id;
  }
  string getName()
  {
    return name;
  }
  float getSalary()
  {
    return salary;
  }

  void print()
  {
    cout << name << " | " << id << " | " << salary << " | " << endl;
  }
};

int main()
{
  Stack<person> st;
  person a("Tonmoy Roy", 25000.0);
  person b("Taki Kauser", 20000.0);
  person c("Mahfuz Alam", 15000.0);
  person d("Rafsan Faruk", 30000.0);
  person e("Khairul Islam", 40000.0);
  st.push(a);
  st.push(b);
  st.push(c);
  st.push(d);
  st.push(e);

  // while (!st.empty())
  // {
  //   person printObj;
  //   printObj = st.pop();
  //   printObj.print();
  // }

  person printObj;
  printObj = st.Top();
  printObj.print();

  cout << "size:" << st.size() << endl;

  return 0;
}