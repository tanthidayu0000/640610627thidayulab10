#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){ 
 double money,interest,total,payment,NewBal;
 cout << "Enter initial loan: ";
 cin >> money;
 cout << "Enter interest rate per year (%): ";
 cin >> interest;
 cout << "Enter amount you can pay per year: ";
 cin >> payment;
 NewBal = money;

 //use 'setw' to set width of table and 'left' to set left-alignment
 //you can change input argument of 'setw()' to see the effect
 //Try to change from 'left' to 'right' and see the effect
 cout << setw(13) << left << "EndOfYear#"; 
 cout << setw(13) << left << "PrevBalance"; 
 cout << setw(13) << left << "Interest"; 
 cout << setw(13) << left << "Total";
 cout << setw(13) << left << "Payment";
 cout << setw(13) << left << "NewBalance";
 cout << "\n";
 
 //use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
 //you can change input argument of 'setprecision()' to see the effect
 for(int x = 1; money > 0; x++)
 {
     cout << fixed << setprecision(2); 
     cout << setw(13) << left << x; 
     cout << setw(13) << left << money;
     cout << setw(13) << left << money*interest/100;

  total = NewBal + money*interest/100;
  NewBal = total - payment;
     cout << setw(13) << left << total;
  if(payment > money + money*interest/100)
  {
   cout << setw(13) << left << total;
   cout << setw(13) << left << 0.0;
   break;
  }else{
    cout << setw(13) << left << payment;
   cout << setw(13) << left << NewBal;}
     cout << "\n"; 
  money = NewBal;
 }
 
 return 0;
}
