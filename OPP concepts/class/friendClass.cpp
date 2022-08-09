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
  friend class AbburBondu;
};

// friend class access to private data
class AbburBondu
{
public:
  void tellSecret(Parent *ptr)
  {
    cout << "Amount tk:" << ptr->taka << endl;
    cout << "Password" << ptr->password << endl;
  }
};

int main()
{
  Parent pt(1500, 2580);
  AbburBondu bondu;
  bondu.tellSecret(&pt);

  return 0;
}