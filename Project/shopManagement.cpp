#include <bits/stdc++.h>
using namespace std;

class Shop
{
public:
  string product_name[10];
  int product_price[10];
  int product_quantity[10];

protected:
  int total_income = 0;

public:
  int get_total() // getter
  {

    return total_income;
  }
  void set_total(int total_income) // setter
  {
    this->total_income += total_income;
  }
};
int main()
{
  Shop *myShop = new Shop;
  cout << "Number of Product:";
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << "product " << i << " name:";
    cin >> myShop->product_name[i];
    cout << "product " << i << " price:";
    cin >> myShop->product_price[i];
    cout << "Product " << i << " Quantity:";
    cin >> myShop->product_quantity[i];
  }

flag:
  cout << endl;

  cout << "\t\tBUY   PRODUCT" << endl;
  cout << "\t\t--------------" << endl;
  cout << "product Index\t\t";
  for (int i = 1; i <= n; i++)
  {
    cout << i << "\t";
  }
  cout << endl;

  cout << "Product Name\t\t";
  for (int i = 1; i <= n; i++)
  {
    cout << myShop->product_name[i] << "\t";
  }
  cout << endl;
  cout << "Product Price\t\t";
  for (int i = 1; i <= n; i++)
  {
    cout << myShop->product_price[i] << "\t";
  }
  cout << endl;
  cout << "Product Quantity\t";
  for (int i = 1; i <= n; i++)
  {
    cout << myShop->product_quantity[i] << "\t";
  };
  cout << endl
       << endl;
  cout << "Which product do you want? 1 to" << n << ":";
  int index, quantity;
  cin >> index;
  cout << "what is the quantity do you want of " << myShop->product_name[index] << ":";
  cin >> quantity;
  if (myShop->product_quantity[index] < quantity)
  {
    cout << "This quantity is not available";
  }
  else
  {

    myShop->set_total(quantity * (myShop->product_price[index]));
    myShop->product_quantity[index] -= quantity;
    cout << endl;

    cout << myShop->product_name[index] << " bought " << quantity << " pc successfully" << endl;
    cout << "your total income:" << myShop->get_total() << " tk" << endl;
  }
  goto flag;

  return 0;
}