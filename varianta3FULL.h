#ifndef varianta3FULL.h
#define varianta3FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Care dintre următoarele expresii C/C++ are valoarea 1 dacă şi numai dacă numărul real
memorat în variabila x se află în intervalul (-2,2)? (4p.)
a. x*x-4<=0 b. 4-x*x>0 c. (2<x)&&(x<-2) d. (x-2)*(x+2)>0
b
*/
/*
2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului întreg x la
numărul întreg nenul y.
a) Scrieţi ce se va afişa dacă se citesc, în această
ordine, numerele: 2 5 16 9 12 13 5 0. (6p.)
z=2, x=5

y=16
2 < 16-5    2 < 11 adevărat
5
x=16

y=9
2 < 9-16  2 < -7 fals
= 9
x=9

y=12
2 < 12-9  2 < 3  adevărat
 9
x=12

y=13
2 < 13-12  2 < 1  fals
 3
x=13

y=5
2 < 5-13  2 < -8  fals
 5
x=5

y=0
2 < 0-5  2 < -5  fals
 0
x=0 stop

Se afișează:599350
*/

/*
2. Pentru definiţia alăturată a
subprogramului f, ce se afişează ca
urmare a apelului f(26);? (6p.)
*/
void f (int x)
{
 if(x>0)
 if(x%4==0)
 { cout<<’x’; | printf(”%c”,’x’);
 f(x-1); }
 else
 { f(x/3);
 cout<<’y’; | printf(”%c”,’y’);
 }
}
/*
f(26)
26%4=2  else
f(8)

8%4=0  x
f(7)

7%4!=0  f(2) cout y

2%4!=0  f(0) cout y

f(0) stop

Rezultat:xyyy
*/
/*
4. Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre
şi care determină şi afişează pe ecran, folosind apeluri utile ale subprogramului cif, cel mai
mare număr palindrom ce poate fi obţinut prin rearanjarea tuturor cifrelor numărului n. Dacă
nu se poate obţine un palindrom din toate cifrele numărului n, programul va afişa pe ecran
numărul 0. Un număr natural este palindrom dacă este egal cu numărul obţinut prin scrierea
cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 53211235, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0.
*/
int cif(long long a, int b)
{
    int cnt=0;

    while(a>0)
    {
        if(a%10==b)
            cnt++;
        a/=10;
    }

    return cnt;
}

#endif // varianta3FULL.h
