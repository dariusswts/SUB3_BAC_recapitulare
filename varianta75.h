#ifndef varianta75.h
#define varianta75.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
1. Ce valoare are F(2758), pentru
funcţia F definită alăturat? (4p.)
int F(int x)
{
 if(x == 0) return 0;
 if(x%10%2 == 0) return 2 + F(x/10);
 return 10 – F(x/10);
}
a. 0 b. 20 c. 12 d. 4

F(0) = 0
F(2):
2 este par → 2 + F(0) = 2
F(27):
7 impar → 10 - F(2) = 10 - 2 = 8
F(275):
5 impar → 10 - F(27) = 10 - 8 = 2
F(2758):
8 par → 2 + F(275) = 2 + 2 = 4





Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
2. Variabilele i, j şi aux sunt de tip întreg, iar
elementele tabloului unidimensional x sunt
urmatoarele: x0=10, x1=5, x2=-6, x3=7,
x4=0, x5=-2.
Ce valori se vor afişa în urma executării
secvenţei de program alăturate? (6p.)
for(int i = 0; i < 4; i++)
 for(int j = i + 1; j< 6; j++)
 if(x[i] > x[j])
 { aux = x[i];
 x[i] = x[j];
 x[j] = aux;
 }
for(i = 0; i < 6; i++)
 cout<<x[i]<<“ “;
 | printf(“%d “,x[i]);

 i = 0:
devine: -6 10 5 7 0 -2
i = 1:
 -6 -2 10 7 5 0
i = 2:
 -6 -2 0 10 7 5
i = 3:
 -6 -2 0 5 10 7
i = 4:
 -6 -2 0 5 7 10

 raspuns
  -6 -2 0 5 7 10


 */

/*
3. a) Scrieţi definiţia completă a funcţiei UltimaCifra care primeşte prin cei doi parametri a
şi b câte un număr natural (0<a<1000000, 0<b<1000000), calculează în mod eficient din
punct de vedere al timpului de executare şi returnează ultima cifră a numărului ab (a la
puterea b). (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri) (4p.)
c) Fişierul text SIR.IN conţine pe prima sa linie un număr natural n (0<n<1001), iar pe
fiecare dintre următoarele n linii câte o pereche de numere naturale, xi yi (1≤i≤n,
xi≤30000, yi≤30000).
Scrieţi programul C/C++ care citeşte numerele din fişierul SIR.IN şi scrie în fişierul text
SIR.OUT ultima cifră expresiei: 1 2 yn
n
y
2
y x1 +x +...+x ,folosind apeluri ale funcţiei
UltimaCifra.
Exemplu: dacă fişierul SIR.IN are conţinutul alăturat, atunci
SIR.OUT va conţine cifra 0. (10p.)
3
25 6
8 10
1 4589
*/




#endif // varianta75.h
