#ifndef varianta71.h
#define varianta71.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
2. Ce valoare va avea variabila întreagă x, în
urma apelului F(1,x), ştiind că, înainte de
apel, variabila x are valoarea 0, iar
subprogramul F este definit alăturat?
(6p.)
void F(int i, int &x)
{ if (i <= 10)
 { if(i % 2) x = x + 2;
 else x = x – 1;
 F(i + 1, x);
 }
}

i	   tip	       operație	x
1	  impar	         +2	    2
2	  par	         -1	    1
3	  impar	         +2	    3
4	  par	         -1	    2
5	  impar	         +2	    4
6	  par	         -1	    3
7	  impar	         +2	    5
8	   par	          -1	4
9	  impar	          +2	6
10	   par	-1	5
*/

/*
3. Un număr natural se numeşte palindrom dacă numărul citit de la stânga la dreapta este egal
cu numărul citit de la dreapta la stânga.
a) Scrieţi definiţia completă a subprogramului Palindrom care primeşte prin intermediul
parametrului n un număr natural de cel mult nouă cifre şi returnează 1 dacă acesta este
palindrom şi 0 în caz contrar. (10p.)
b) Fişierul text NUMERE.IN conţine cel mult 100000 numere naturale de cel mult nouă cifre
fiecare, numerele fiind despărţite prin câte un spaţiu. Cel puţin unul dintre numere este
palindrom.
Scrieţi programul C/C++ care citeşte numerele din fişierul NUMERE.IN şi, folosind apeluri
utile ale subprogramului Palindrom determină în mod eficient, din punct de vedere al
memoriei utilizate şi al timpului de executare, care este cel mai mare număr palindrom citit şi
de câte ori apare el în fişierul NUMERE.IN. Programul scrie în fişierul text NUMERE.OUT
numărul astfel determinat precum şi numărul de apariţii ale acestuia, pe rânduri diferite.
Exemplu: dacă NUMERE.IN conţine numerele:
23 565 78687 7887 7865 78687 7887 23 78687 98798
atunci NUMERE.OUT va conţine:
78687
3
*/

int Palindrom(int n)
{
    int ogl = 0, copie = n;

    while(n > 0)
    {
        ogl = ogl * 10 + n % 10;
        n = n / 10;
    }

    if(ogl == copie)
        return 1;
    else
        return 0;
}

void rezol1(){
    ifstream fin("NUMERE.IN");

}

#endif // varianta71.h
