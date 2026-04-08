#ifndef varianta82.h
#define varianta82.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


//2. Pentru definiţia alăturată a subprogramului f,
//stabiliţi ce valoare are f(2). Dar f(123)?


int f(int x)
{   if(x==0)return 0;
    else{
       if(x%2==0){
            return 1+f(x/10);
       }
       else {
            return 2+f(x/10);
       }
    }
}

/*
f(2) 2==0 nu 2%2==0 da ret 1+f(0)
f(0) 0==0 da ret 0

rezultat : 0+1=1


f(123) 123==0 nu 123%2==0 nu ret 2+f(12)
f(12)   12==0 nu  12%2==0 da ret 1+f(1)
f(1)     1==0 nu   1%2==0 nu ret 2+f(0)
f(0)     0==0 da ret 0----------

rezultat: 0+2+1+2=5
f(123)=5;
*/

/*
3. Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100);
- v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi situate în
intervalul [10,30000]. Funcţia returnează suma numerelor din tabloul v care au ultimele
două cifre identice.
Exemplu: dacă n=4 şi v=(123, 122, 423, 555) funcţia va returna 677 (=122+555).
*/


int suma(int n,int v[]){
    int s=0;
    for(int i=0;i<n;i++){
        int ultimele2=v[i]%100;
        int zecilor=ultimele2/10;
        int unitatilor=ultimele2%10;
        if(zecilor==unitatilor){
            s+=v[i];
        }
    }
    return s;
}

void rezol3(){
    int v[]={123, 122, 423, 555};
    int n=4;
    int rez=suma(n,v);
    cout<<"suma numerelor cu ultimele 2 cifre egale este:"<<rez;
}























#endif // varianta82.h
