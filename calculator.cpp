/*This is a simplle calculator where we can perform more thanone task in singal use */
#include <iostream>
using namespace std;
int calculation(int a, int b)
{   static int c;
   string op, ans;
   char operation;
   cout << "enter a choice for calculation: " << endl;
   cin >> operation;
   if (operation == '+')
   {
      cout << "The addition of " << a << " and " << b << " is ";
      c=a+b;
      cout<<c<<endl;
   }
   else if (operation == '-')
   {
      cout << "The subtraction of " << a << " and " << b << " is ";
      c=a-b;
      cout<<c<<endl;
   }
   else if (operation == '*')
   {
      cout << "The multiplication  of " << a << " and " << b << " is ";
      c=a*b;
      cout<<c<<endl;
   }
   else if (operation == '/')
   {
      cout << "The division of " << a << " and " << b << " is ";
      c=a/b;
      cout<<c<<endl;
   }
   else if (operation == '%')
   {
      cout << "The modulo of " << a << " and " << b << " is ";
      c=int(a) % int(b) ;
      cout<<c<<endl;
   }
   else
   {
      cout << "Enter a correct oprection or input " << endl;
   }
   cout << "do you want to do any more operation " << endl;
   cin >> op;
   if (op == "yes")
   {
      cout << "do you wnat to do oprection on previes ans " << endl;
      cin >> ans;
      if (ans == "yes")
      {
         cout << "enter a second value" << endl;
         cin >> b;
         calculation(c, b);
      }
      else
      {
         cout << "enter a first value" << endl;
         cin >> a;
         cout << "enter a second value" << endl;
         cin >> b;
         calculation(a, b);
      }
   }
   return c;
}
int main()
{
   float a, b;
   cout << "enter a 1 number: " << endl;
   cin >> a;
   cout << "enter a 2 number: " << endl;
   cin >> b;
   calculation(a,b);
   return 0;
}