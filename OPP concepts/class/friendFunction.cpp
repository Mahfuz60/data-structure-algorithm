#include <bits/stdc++.h>
using namespace std;

class Parent
{
private:
  int taka;

protected:
  int password;

public:
  Parent(int tk, int pass) // constructor
  {
    taka = tk;
    password = pass;
  }
  friend void tellSecret(Parent *ptr);
};

// friend function access to private data
void tellSecret(Parent *ptr)
{
  cout << "Amount tk:" << ptr->taka << endl;
  cout << "Password" << ptr->password << endl;
}

int main()
{
  Parent pt(1500, 2580);
  tellSecret(&pt);

  return 0;
}