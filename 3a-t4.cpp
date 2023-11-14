#include <iostream>
using namespace std;
int main()
{
int number = 0;
cout << "Enter a number from 1 to 5 : ";
cin >> number;
switch(number)
{ 
     case 1:
           cout << "one";
           break;
     case 2:
           cout << "two";
           break;
     case 3:
           cout << "three";
           break;
     case 4:
           cout << "four";
           break;
     case 5:
           cout << "five";
break;
default :
     cout << "The number is not within 1 to 5 range";
}
return 0; 
}
