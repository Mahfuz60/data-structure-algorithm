#include <bits/stdc++.h>
using namespace std;

// create a Student Node
class Student
{
public:
  int rollNumber;
  string name;
  int phone;
  string section;
  int attendance;
  Student *Next;

  // create a Node Constructor
  Student(int roll, string nam, int phon, string sec, int attend)
  {
    rollNumber = roll;
    name = nam;
    phone = phon;
    section = sec;
    attendance = attend;
    Next = NULL;
  }
};

// insert a student head
void insertAtStudent(Student *&head, int roll, string name, int phone, string section, int attend)
{

  Student *newNode = new Student(roll, name, phone, section, attend);

  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Student *temp = head;

  while (temp->Next != NULL)
  {
    temp = temp->Next;
  }
  temp->Next = newNode;
}
// search At Student
void searchAtStudent(Student *&head, int roll)
{
  Student *temp = head;
  while (temp != NULL)
  {
    if (temp->rollNumber == roll)
    {
      cout << "Searching Student Roll Number:" << roll << endl;
      cout << "Name:" << temp->name << endl;
    }
    else
    {
      cout << "Student Roll Number is not found!";
    }
    temp = temp->Next;
  }
}

// display Function
void printDisplay(Student *&head)
{
  Student *temp = head;
  while (temp != NULL)
  {
    cout << "Roll:" << temp->rollNumber << endl;
    cout << "Name:" << temp->name << endl;
    cout << "Phone Number:" << temp->phone << endl;
    cout << "section:" << temp->section << endl;
    cout << "Attendace:" << temp->attendance << endl;
    temp = temp->Next;
  }
  cout << endl
       << endl;
}

int main()
{
  // create a Node head
  Student *head = NULL;

  // Student Details Data
  int roll;
  string name;
  int phone;
  string section;
  int attend;

  int choice;
  cout << "choice-1:Insert a Student at Head" << endl
       << "choice-2:Search a Student" << endl
       << "choice-0:Exit" << endl
       << endl
       << endl;
  cout << "Next Choice:";
  cin >> choice;
  cout << endl;
  while (choice != 0)
  {
    switch (choice)
    {
    case 1:
      cout << "Enter Roll Number:";
      cin >> roll;
      cout << "Enter Name:";
      cin >> name;
      cout << "Enter Phone Number:";
      cin >> phone;
      cout << "Enter Your Section:";
      cin >> section;
      cout << "Enter your attendace:";
      cin >> attend;
      cout << endl
           << endl;
      insertAtStudent(head, roll, name, phone, section, attend);

      break;
    case 2:
      cout << "Enter your student Roll Number:";
      int searchRoll;
      cin >> searchRoll;
      searchAtStudent(head, searchRoll);

    default:
      break;
    }
    cout << "Next Choice:";
    cin >> choice;
    cout << endl
         << endl;
  }

  printDisplay(head);

  return 0;
}