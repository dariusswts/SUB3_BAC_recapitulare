#ifndef varianta69.h
#define varianta69.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
Se consideră subprogramul recursiv
definit alăturat. Ce valori vor fi
afişate pe ecran în urma apelului
beta(15);? (6p.)
*/
void beta(int n){
    if (n!=1){
      cout<<n<<" ";
      if(n%3==0)
        beta(n/3);
    else beta(2*n-1);
    }
 else cout<<1;
 }

/*
beta(15) n=15

         n!=1  cout<<n   if n%3==0  beta(n/3) else beta(2*n-1)   else cout<<-1

beta(15)  da      15         da         5
beta(5)   da       5         nu                10-1=9
beta(9)   da       9         da         3
beta(3)   da       3         da         1
beta(1)   nu ------------------------------

afisare :  15 5 9 3 1

*/


/*
a) Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
parametrului întreg n un număr natural de cel mult 9 cifre şi returnează valoarea absolută a
diferenţei dintre numărul de cifre pare şi numărul de cifre impare conţinute de n.
Exemplu: dacă n=92465, în urma apelului se va returna valoarea 1 (2 cifre impare, 3 cifre
pare).
*/


int calcul(int n){
    int pare=0;
    int impare=0;
    while(n!=0){
        int c=n%10;
        if(c%2==0){
            pare++;
        }
        else impare++;
        n/=10;
    }
    if(pare>impare){
        return pare-impare;
    }
    else
        return impare-pare;
}







#endif // varianta69.h
