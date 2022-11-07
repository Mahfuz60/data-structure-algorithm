#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;

bool balanceParentThesis(string s)
{

  int n = s.size();
  Stack<char> st;
  bool isBalanced = true;
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
};

int main()
{

  string chk;
  cin >> chk;
  balanceParentThesis(chk);

  return 0;
}
