#include <bits/stdc++.h>
using namespace std;

// create a Student Node
class Student
{
public:
  int rollNumber;
  string name;
  string phone;
  string section;
  int attendance;
  Student *Next;

  // create a Node Constructor
  Student(int roll, string nam, string phon, string sec, int attend)
  {
    rollNumber = roll;
    name = nam;
    phone = phon;
    section = sec;
    attendance = attend;
    Next = NULL;
  }
};
void insertAtStudent(Student *&head, int roll, string name, string phone, string section, int attend);
void printDisplay(Student *&head);
void searchAtStudent(Student *&head, int roll);
void deleteAtStudent(Student *&head, int roll);

// insert a student head
void insertAtStudent(Student *&head, int roll, string name, string phone, string section, int attend)
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
      cout << "Roll Number:" << roll << endl;
      cout << "Name:" << temp->name << endl;
      cout << "phone:" << temp->phone << endl;
      cout << "section:" << temp->section << endl;
      return;
    }
    temp = temp->Next;
  }
  cout << "Student Roll is not found!" << endl;
}

void deleteAtStudent(Student *&head, int roll)
{
  Student *temp1 = head;
  Student *temp2 = head;
  while (temp1 != NULL)
  {
    if (temp1->rollNumber == roll)
    {
      if (temp1 == temp2)
      {
        head = head->Next;
        free(temp1);
      }
      else
      {
        temp2->Next = temp1->Next;
      }
      return;
    }
    temp2 = temp1;
    temp1 = temp1->Next;
  }
  cout << "Not found this Student" << endl;
}
void updateAtStudent(Student *&head, int roll)
{
  Student *temp = head;
  while (temp != NULL)
  {
    if (temp->rollNumber == roll)
    {
      cout << "Update data" << endl;
      cout << "update name:";
      cin >> temp->name;
      cout << endl;
      cout << "update section:";
      cin >> temp->section;
      return;
    }
    temp = temp->Next;
  }

  cout << "Not found Student!";
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
  string phone;
  string section;
  int attend;

  int choice;
  cout << "choice-1:Insert a Student at Head" << endl
       << "choice-2:Search a Student" << endl
       << "choice-3:Delete a Student" << endl
       << "choice-4:Update a Student" << endl
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
      cout << "Student searching Roll Number:";
      cin >> roll;
      searchAtStudent(head, roll);
      break;
    case 3:
      cout << "Delete a Student roll Number:";
      cin >> roll;
      deleteAtStudent(head, roll);

      break;
    case 4:
      cout << "UpdateStudent roll Number:";
      cin >> roll;
      updateAtStudent(head, roll);

      break;
    default:
      break;
    }
    cout << "Next Choice:";
    cin >> choice;
    cout << endl;
  }

  printDisplay(head);

  return 0;
}