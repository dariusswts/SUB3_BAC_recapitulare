#ifndef varianta81.h
#define varianta81.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


//2. Pentru definiţia alăturată a subprogramului f,
//scrieţi ce valoare are f(0,0). Dar f(525,5)?

int f(int x,int y){
    if(x==0)return 0;
    else{
        if(x%10==y){
            return f(x/10,y)+1;
        }
        else return f(x/10,y);
    }
}
/*
f(0,0) x==0 da ret 0

f(525,5)  x==0 nu x%10==y da f(52,5)+1;
f(52,5)   x==0 nu x%10==y nu f(5,5);
f(5,5)    x==0 nu x%10==y da f(0,5)+1;
f(0,5)    x==0 da ret 0

rez : 0+1+1=2; f(525,5)=2;
*/

/*
3. Scrieţi în C/C++ definiţia completă a subprogramului medie care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100) ;
- v, prin care primeşte un tablou unidimensional cu n elemente, numere naturale, fiecare
element având cel mult patru cifre.
Subprogramul returnează media aritmetică a elementelor din tablou.
*/

int medie(int n,int v[]){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=v[i];
    }
    return (double)suma/n;
}

void rezo3(){
    int n=5;
    //cin>>n;
    int v[100]={10,20,30,40,50};
    //for(int i=0;i<n;i++){
    //    cin>>v[i];
    //}
    double m=medie(n,v);
    cout<<m;
}


/*
4.Fişierul text NUMERE.IN conţine, pe mai multe linii, cel mult 30000 de numere naturale
nenule mai mici sau egale cu 500, despărţite prin câte un spaţiu.
a) Scrieţi programul C/C++ care, utilizând un algoritm eficient din punct de vedere al timpului
de executare, afişează pe ecran, în ordine crescătoare, toate numerele care au apărut o
singură dată din fişierul NUMERE.IN, despărţite prin câte un spaţiu.
Exemplu: dacă fişierul NUMERE.IN conţine numerele scrise alăturat, se vor
afişa valorile următoare: 3 4 5 6 34 (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul a),
explicând în ce constă eficienţa ei (3 – 4 rânduri). (4p.)
2 23 34 3
8 9 9 23
6 8 9 2
4 5 23 9
*/

void rezo4(){
    ifstream f("numere-in");
    int frec[100]{0};
    int x;
    while(f>>x){
        frec[x]++;
    }
    for(int i=1;i<=100;i++){
        if(frec[i]==1){
            cout<<i<<" ";
        }
    }
}










#endif // varianta81.h
