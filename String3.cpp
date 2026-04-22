#include <iostream>
using namespace std;

int main() 
{
   string s ="Abhishek";
   
   int len = s.size();
   
   s[len-5] = 'o';
   
   cout << s[len-5];
   
   
   return 0;
}