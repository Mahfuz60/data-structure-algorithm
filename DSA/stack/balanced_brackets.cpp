#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

bool balanceParentThesis(string s)
{
  Stack<char> st;

  int n = s.size();

  bool isBalanced = true;

  if (s[0] == ')' || s[0] == '}' || s[0] == ']')
  {
    return false;
  }

  for (int i = 0; i < n; i++)
  {

    // opening Bracket->({[
    if (s[i] == '(' || s[i] == '{' || s[i] == '[')
    {
      st.push(s[i]);
    }

    // Closing Bracket->)}]
    // st.top=='(' else isBalanced=false ,break
    else if (s[i] == ')')
    {
      if (st.Top() == '(')
      {
        st.pop();
      }
      else
      {
        isBalanced = false;
        break;
      }
    }
    else if (s[i] == '}')
    {
      if (st.Top() == '{')
      {
        st.pop();
      }
      else
      {
        isBalanced = false;
        break;
      }
    }
    else if (s[i] == ']')
    {
      if (st.Top() == '[')
      {
        st.pop();
      }
      else
      {
        isBalanced = false;
        break;
      }
    }
  }

  if (!st.empty())
  {

    isBalanced = false;
  }

  return isBalanced;
};



int main()
{

  string chk;
  cin >> chk;
  if (balanceParentThesis(chk))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}
