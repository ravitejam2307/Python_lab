/*  C++ Program for Rational Operations using Operator Overloading  */

#include<stdio.h>
 #include<iostream>
 using namespace std;
 class rational
 {
         int numer;
         int denom;
         public:
         void getdata()
         {
                 cout<<"\n enter the numerator part of the rational no. :: ";
                 cin>>numer;
                 cout<<"\n enter the denominator part of the rational no. :: ";
                 cin>>denom;
         }
         void operator+(rational);
         void operator-(rational);
         void operator *(rational);
         void operator /(rational);
 };
 void rational ::operator+(rational c1)
 {
         rational temp;
         temp.numer=(numer*c1.denom)+(c1.numer*denom);
         temp.denom=denom*c1.denom;
         cout<<"\nrational no. after addition :: ";
         cout<<"\n numerator = "<<temp.numer<<"\n denominator = "<<temp.denom;
 }
 void rational ::operator -(rational c1)
 {
         rational temp;
         temp.numer=(numer*c1.denom)-(c1.numer*denom);
         temp.denom=denom*c1.denom;
         cout<<"\n rational no. after subtraction :: ";
         cout<<"\n numerator = " <<temp.numer<<"\n denominator = "<<temp.denom;
 }
 void rational ::operator *(rational c1)
 {
         rational temp;
         temp.numer=numer*c1.numer;
         temp.denom=denom*c1.denom;
         cout<<"\n rational no. after multiplication :: ";
         cout <<"\n numerator = "<<temp.numer<<"\n denominator = "<< temp.denom;
 }
 void rational :: operator /(rational c1)
 {
         rational temp;
         temp.numer= numer*c1.denom;
         temp.denom=c1.numer*denom;
         cout<<"\n rational no. after dividation :: ";
         cout <<"\n numerator = "<<temp.numer<<"\n denominator = "<<temp.denom;
 }
 int main()
 {

         rational c1, c2;
         int n;
         do
         {
                 cout<<"\n\n 1.Input data for rational no. ";
                 cout<<"\n 2. Addition of rational no. ";
                 cout<<"\n 3. Subtraction of rational no. ";
                 cout<<"\n 4. Multiplication of rational no.";
                 cout<<"\n 5. Division of rational no. ";
                 cout<<"\n 6. Quit";
                 cout<<"\n\n Enter your choice :: ";
                 cin>>n;
                 switch(n)
                 {
                         case 1:
                         cout<<endl<<"\n enter the data for first rational no.:: ";
                         c1.getdata();
                         cout<<endl<<"\n enter the data for second rational no. :: ";
                         c2.getdata ();
                         break;

                         case 2:
                         c1+c2;
                         break;

                         case 3:
                         c1-c2;
                         break;

                         case 4:
                         c1*c2;
                         break;

                         case 5:
                         c1/c2;
                         break;

                         case 6:
                         exit(1);
                         break;
                 }
         } while (n!=6);
         return 0;
 }
