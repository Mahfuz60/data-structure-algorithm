#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;

int prefixEvalation(string chk)
{
  Stack<int> st;
  for (int i = chk.length() - 1; i >= 0; i--)
  {
    if (chk[i] >= '0' && chk[i] <= '9') // chk[i]=>0 to 9---operand
    {
      st.push(chk[i] - '0');
    }
    else // chk[i]---->operator
    {
      int a = st.pop();
      int b = st.pop();

      switch (chk[i])
      {
      case '+':
        st.push(a + b);
        break;
      case '-':
        st.push(a - b);
        break;
      case '*':
        st.push(a * b);
        break;
      case '/':
        st.push(a / b);
        break;
      case '^':
        st.push(pow(a, b));
        break;

      default:
        break;
      }
    }
    // }
  }

  int main()
  {

    return 0;
  }