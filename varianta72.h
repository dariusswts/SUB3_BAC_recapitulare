#ifndef varianta72.h
#define varianta72.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


/*
2. Scrieţi ce se va afişa în urma
executării subprogramului alăturat,
la apelul F(57);. (6p.)
void F(int x)
{ if(x != 0)
 { F(x/2);
 cout << x%2; | printf(“%d”, x%2);
 }
}

57 / 2 = 28 r1
28 / 2 = 14 r0
14 / 2 = 7  r0
7 / 2  = 3  r1
3 / 2  = 1  r1
1 / 2  = 0  r1

raspuns 111001
*/x
/*
3. a) Scrieţi definiţia completă a subprogramului Ecuatie care primeşte prin parametrii a, b şi
c trei numere întregi, a ≠ 0, de cel mult patru cifre fiecare, reprezentând coeficienţii ecuaţiei
de gradul al II-lea: ax 2 +bx+c=0. În funcţie de soluţiile ecuaţiei subprogramul va returna:
• cea mai mare dintre soluţii dacă ecuaţia are două soluţii reale distincte, dintre care cel
puţin una pozitivă.
• una dintre soluţii dacă ecuaţia are două soluţii egale şi pozitive.
• -32000 în celelalte cazuri. (10p.)
b) Se consideră şirul s: 1, 1, 2, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 1, 2,... .
Pentru un număr natural k, 0<k≤10000, se cere să se determine valoarea elementului ce
se află pe poziţia k în şirul s.
Exemplu: pentru k=5 numărul cerut este 2.
*/
int Ecuatie(int a, int b, int c)
{
    int delta = b*b - 4*a*c;

    if(delta < 0)
        return -32000;

    if(delta == 0)
    {
        int x = -b / (2*a);
        if(x > 0)
            return x;
        else
            return -32000;
    }


#endif // varianta72.h
