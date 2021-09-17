#include<iostream>
using namespace std;

int main()
{
  int num1,num2,sum;
  cout<<"enter first num1 ";
  cin>> num1;

  cout<<"enter the second num2  ";
  cin>> num2;

  cout<<"sum  num1 + num2 is ="<< num1+num2<<endl;
  cout<<" subraction of num1 - num2 is ="<< num1-num2<<endl;
  cout<<" multiplication of num * num2 is ="<< num1*num2<<endl;
  cout<<" division of num1 / num2 is ="<< num1/num2<<endl;
  cout<<" remainder num1%num2 is ="<< num1%num2<<endl; //if denominator is gretaer than num the num is mudulas ans eg 3%4 = 3, 7%8= 7
  cout<<" postincrement of num1++ is ="<< num1++ <<endl;
  cout<<"postdecrement of num1-- is ="<< num1--<<endl;
  cout<<"preincrement of ++num ="<< ++num1<<endl;


  // assignment operatoor 
  //a = 2, b= 3;

  // comparison operator ,greater or smaller
  cout<<"value of (num1>=num2)"<< (num1>=num2)<<endl;
   cout<<"value of (num1=<num2)"<< (num1<=num2)<<endl;
    cout<<"value of (num1==num2)"<< (num1==num2)<<endl;
     cout<<"value of (num1!=num2)"<< (num1!=num2)<<endl;
      cout<<"value of (num1>num2)"<< (num1>num2)<<endl;
  

  //logical operator
  cout<<"value of a == b is " <<((num1== num2) && (num1>num2))<<endl;
   cout<<"value of a == b is " <<((num1== num2) || (num1 > num2))<<endl;
   cout<<"value of a == b is " <<(!(num1== num2) )<<endl;
 return 0;

}