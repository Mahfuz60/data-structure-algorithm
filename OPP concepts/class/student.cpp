#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
  char name[100];
  int roll;
  int id;
};

int main()
{
  Student rahim;
  strcpy(rahim.name, "Md. Rahim Ali");
  rahim.roll = 16;
  rahim.id = 202216;

  cout << "name:" << rahim.name << endl;
  cout << "Roll:" << rahim.roll << endl;
  cout << "student id:" << rahim.id << endl;

  return 0;
}