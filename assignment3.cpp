// Copyright (c)
// 2021 Zack Isingoma
// Creared by: Zack Isingoma
// Created on: Dec, 15 2021.

#include<iostream>
 
using namespace std;
int main()
{
  float amount, discount, topaid;
  cout<<"Enter Total Amount: ";
  cin>>amount;
  if(amount<1000)
     cout<< " Amount to be Paid: "<<amount;
  else
  {
     if(amount==1000)
     {
        discount = (amount*10)/100;
        topaid = amount-discount;
     }
     else if(amount>1000)
     {
        discount = (amount*10)/100;
        topaid = amount-discount;
     }
     else if(amount<1000)
     {
        discount = (amount*0)/100;
        topaid = amount-discount;
     }
     else
     {
        discount = (amount*25)/100;
        topaid = amount-discount;
     }
     cout<<"Amount to be Paid: "<<topaid;
  }
  cout<<endl;
  return 0;
}
