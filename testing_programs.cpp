// This file will contain code snippets for bank_Hasrell
// By made Dmitriy Yershov

#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

//======================================================================================================================
/*
  double choice_of_loan(string *value)
   {
    if( (value[0] == "15%") || (value[0]) == "15" )
    {
        double loan = 0.15;                                                      ЗАМЕННИТЬ
        return loan;
    }
    else if( (value[0] == "8%") || (value[0] == "8") )
    {
        double loan = 0.08;
        return loan;
    }
    else 
        cout << "Под такой процент мы не даем кредит!" << endl;
    }
*/
//========================================================================================================================
//======================|Решение на процент выбора|=======================================================================
//========================================================================================================================
 double choice_of_loan(string numb)
 {
     double b,c;
     string fifty = "15%",eqy = "8%",eq = "8", fif = "15";
     try
     {
         if((numb == fif) || (numb == fifty))
         {
             throw b = 0.15;
         }    
         if((numb == eq) || (numb == eqy))
         {
             throw c = 0.08;
         }
         cout << "Под такой процент мы не даем кредит!" << endl; 
     }
     catch(double b)
     {
         cout << "Ваш процент " << b << endl;
     }
     catch(double c)
     {
         cout << "Ваш процент " << c << endl; 
     }
     return 0;
 }
//======================================================================================================================== 
/* 
   int main()
   {
       string symbols;
       double choice_of_loan(string numb);
       cout << "ввести ";
       cin >> symbols;
       cout << "symbols " << symbols << endl;
       choice_of_loan(symbols);
   } 
*/
//=========================================================================================================================
 
 double choice_deposit(double sum, double monthe, double percent)
 {
     double totals = sum + (monthe * (sum * percent));
     cout << "totals " << totals << endl;
     return 0;
 }
 
 double loan(string percent)
 {
     string nuk = "0";
     try
     {
         if(percent != nuk)
         {
             throw percent;
         }    
     }
     catch(double b)
     {
         cout << "percent" << b << endl;
     }
     return 0;
 }
 
 int main()
 {
     double loan(string percent);
     double s,m,p;
     double choice_deposit(double sum, double monthe, double percent);
     cout << "sum ";
     cin >> s;
     cout << "monthe ";
     cin >> m;
     cout << "percent ";
     cin >> p;
     choice_deposit(s,m,p);
     
 }
