#include <iostream>
#include<cmath>
using namespace std;
/*
An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

For instance, a 3 digit number will be considered an Armstrong number if the sum of the cubes of its digits is equal to the number itself.

For example, 153 is an Armstrong number,
          as 1^3 + 5^3 + 3^3 = 153
Armstrong Numbers : 1,153,370,371,407,8208,9474
*/
int Armstrongcheck(int);
int main()
{
 int no;
// cout<<"Enter a Number:";
 cin>>no;
// for(no=1;no<=1000;no++)
  if(Armstrongcheck(no) == 1)
   cout<<no<<" is Armstrong Number."<<endl;
 else
   cout<<no<<" is Not Armstrong Number."<<endl;
return 0;
}
int Armstrongcheck(int no)
{
 int n,sum,rem,digit=0;
 float p;
 n=no; // 153
 while(n!=0)
 {
  digit++;
  n=n/10; 
 }
 n=no; //153
 sum=0;
 while(n!=0)
 {
   rem=n%10; //3
   p=pow(rem,digit);
   sum+=p;
   n=n/10; //15
 }
 if(sum==no)
   return 1;
 else
   return 0;
}
