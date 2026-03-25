#ifndef varianta68.h
#define varianta68.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
Se consideră subprogramul
recursiv definit alăturat. Ce valori
vor fi afişate pe ecran în urma
apelului gama(6);? (6p.)
*/
void gama(int n)
{int i;
 if(n>=3)
 {for(i=3;i<=n;i++)
   cout<<n<<” ”;
 gama(n-3);
 }
}

// n=6  6>=3 da   i=3  i<=6 cout<<n  i++
//  6     da       3    da      6     4
//  6     da       4    da      6     5
//  6     da       5    da      6     6
//  6     da       6    da      6     7
//gama(3)
//  3     da       3   3<=3da   3     4
//  3     da       4    -----
//afisare  6 6 6 6 3

/*
a) Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
celor doi parametri ai săi două numere întregi, n şi k (1≤n≤100000000 şi 1≤k≤9), şi
returnează cifra de rang k a numărului n. Rangul unei cifre este numărul său de ordine,
numerotând cifrele de la dreapta la stânga; cifra unităţilor având rangul 1. Dacă numărul k
este mai mare decât numărul de cifre ale lui n, atunci funcţia returnează valoarea -1.
Exemplu: dacă n=9243 şi k=3, în urma apelului se va returna 2.
*/
int calcul(int n, int k)
{
    int i;
    for(i = 1; i < k; i++)
    {
        if(n == 0){
            return -1;
        }
        n =n/10;
    }
    if(n == 0){
        return -1;
    }
    return n%10;
}

#endif // varianta68.h
