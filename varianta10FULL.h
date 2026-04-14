#ifndef varianta10FULL.h
#define varianta10FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
1. Care este valoarea expresiei C/C++ alăturate? (4p.) 9/2*2-5
a. 3 b. 4
c. -3 d. -3.75

a 3

Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
2. Se consideră algoritmul alăturat, descris în
pseudocod
S-a notat cu [c] partea întreagă a numărului real c,
iar cu a%b restul împărţirii numărului întreg a la
numărul întreg nenul b.
a) Scrieţi valoarea care se afişează, în urma
executării algoritmului, dacă se citeşte pentru
n valoarea 23456 şi pentru k valoarea 3. (4p.)
n	   n%2	[n/10]%10	nr	p	k
23456	0	 -	        0	1	2
2345	1	  4	        4	10	2
234    	0	-	        4	10	1
23	    1	3	       34	100	1
2	    0	-	       34	100	0


citeşte n,k
 (numere naturale nenule)
 nrÅ0
 pÅ1
┌cât timp n≠0 şi k≠0 execută
│┌dacă n%2≠0 atunci
││ nrÅnr + [n/10]%10*p
││ pÅp*10
││altfel
││ kÅk-1
│└■
│ nÅ[n/10]
└■
 scrie nr
 */

 /*
1. Se consideră subprogramul cu definiţia
alăturată. Ce valoare are f(3,1)?
(4p.)
a. 9 b. 6 c. 7 d. 8
*/
int f(int n,int y)
{ if(n!=0)
 { y=y+1;
 return y+f(n-1,y);
 }
 else return 0;
}
/*
f(3,1)  3!=0 da y=2 ret 2+f(2,2)
f(2,2)  2!=0 da y=3 ret 3+f(1,3)
f(1,3)  1!=0 da y=4 ret 4+f(0,4)
return 9  a.9
*/
/*
 3. Scrieţi definiţia completă a subprogramului sub cu trei parametri: n (număr natural,
5<n≤30000), a şi b; subprogramul furnizează prin intermediul parametrilor a şi b cele mai
mari două numere prime distincte mai mici decât n.
Exemplu: dacă n= 28 la apelul subprogramului se va furniza prin parametrul a valoarea
23 şi prin parametrul b valoarea 19. (10p.)
*/
int prim(int x)
{
    if(x<2) return 0;
    int d;
    for(d=2;d<x;d++)
        if(x%d==0) return 0;
    return 1;
}

void sub(int n,int &a,int &b)
{
    int i;
    a=0;
    b=0;
    for(i=n-1;i>=2;i=i-1)
    {
        if(prim(i)==1)
        {
            if(a==0){
                a=i;
            }
            else
            {
                b=i;
                i=1;
            }
        }
    }
}



#endif // varianta10FULL.h
