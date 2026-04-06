#ifndef varianta79.h
#define varianta79.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
2. Pentru definiţia alăturată a subprogramului f, scrieţi
ce valoare are f(8). Dar f(1209986)?
*/
int f(long x){
   int y,z;
   if (x==0) return x;
   else {
     y=x%10;
     z=f(x/10);
     if(y>z) return y;
     else return z;
   }
}

/*
f(8)                          y>z
8==0 nu  y=8 z=f(0) ret y=8   8>0 da ret 8
0==0 da ret 0 ----

ret 8


f(1209986)
x==0           y     z                     if y>z
1209986==0 nu y=6 z=120998    f(120998)    9>6 da   ret 9
120998==0  nu y=8 z=12099     f(12099)     9>8 da   ret 9
12099==0   nu y=9 z=1209      f(1209)      9>9 nu   ret 9
1209==0    nu y=9 z=120       f(120)       9>2 da   ret 9
120==0     nu y=0 z=12        f(12)        0>2 nu   ret 2
12==0     nu  y=2 z=1         f(1)         2>1 da   ret 2
1==0      nu  y=1 z=0         f(0)         1>0 da   ret 1
0==0 da ret x=0-----

ret 9
*/

/*


3. Scrieţi definiţia completă a subprogram max, cu trei parametri, a, b, c, care primeşte prin
intermediul parametrilor a şi b două numere reale cu exact două cifre la partea întreagă şi
exact două zecimale fiecare. Subprogramul determină cel mai mare număr real dintre
următoarele patru valori: a, b şi numerele reale obţinute din a şi b prin interschimbarea
părţii întregi cu partea fracţionară în cadrul aceluiaşi număr. Această valoare este furnizată
prin intermediul parametrului real c.
Exemplu: dacă a=33.17 şi b=15.40, c va avea valoarea 40.15 (cea mai mare valoare
dintre 33.17, 15.40, 17.33 şi 40.15)
*/

void max(double a,double b,double &c){
    int a_int=int(a);
    int b_int=int(b);

    int a_fra=(a-a_int)*100;
    int b_fra=(b-b_int)*100;
    cout<<a_fra<<endl;
    cout<<b_fra<<endl;
    cout<<a_int<<endl;
    cout<<b_int;

    double a_inv=(a_fra*100+a_int)/100;
    double b_inv=(b_fra*100+b_int)/100;

    c=a;
    if(b>c){
        c=b;
    }
    if(a_inv>c){
        c=a_inv;
    }
    if(b_inv>c){
        c=b_inv;
    }

}

void rezolvare3(){
    double a,b,c;
    a=33.17;
    b=15.40;
    max(a,b,c);
    cout<<"Max : "<<c<<endl;
}




#endif // varianta79.h
