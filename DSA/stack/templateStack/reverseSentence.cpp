#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;

void reverseSentence(string chk)
{
  Stack<string> st;
  for (int i = 0; i < chk.length(); i++)
  {
    string word = "";
    while (i < chk.length() && chk[i] != ' ')
    {
      word = word + chk[i];
      i++;
    }
    st.push(word);
  }

  while (!st.empty())
  {
    cout << st.Top()<<" ";
    st.pop();
  }
}

int main()
{
  string sen = "I am Mahfuz Alam";
  reverseSentence(sen);

  return 0;
}