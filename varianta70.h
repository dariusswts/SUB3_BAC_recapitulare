#ifndef varinata70.h
#define varinata70.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
Se consideră subprogramul recursiv definit alăturat.
Ce valoare are expresia bac(10,4)? Care este cea
mai mică valoare de 2 cifre a lui u pentru care funcţia
bac(u,2) are valoarea 1? (6p.)
*/
int bac(int u, int x){
    if (u<x)return 0;
    if (x==u)return 1;
    if (u%x==0)return 0;
    return bac(u,x+1);
}
/*
bac(10,4) u=10 x=4
          u<x    x==u   u%x==0    return bac(u,x+1)
bac(10,4)  nu     nu      nu           bac(10,5);
bac(10,5)  nu     nu      da       return 0;
Cea mai mica valoare de 2 cif a lui u pentru functia bac(u,2) si are valoarea 1 este 11
*/


/*
3. Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin parametrul n un număr natural nenul de cel mult 9 cifre şi furnizează prin parametrul x
numărul obţinut prin alăturarea cifrelor pare ale lui n considerate de la dreapta către
stânga. Dacă n nu conţine nicio cifră pară, x primeşte valoarea 0. (10p.)
Exemplu: în urma apelului calcul(9278,x), x primeşte valoarea 82
*/

void calcul(int n, int x){
    while(n!=0){
        int c=n%10;
        if(c%2==0){
            x=x*10+c;
        }
        n/=10;
    }
    cout<<x;
}

/*
4.Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, n numere naturale cu cel mult 9 cifre fiecare, numere nu neapărat distincte.
Aceste numere sunt dispuse în ordine crescătoare şi separate între ele prin câte un
spaţiu.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare şi al spaţiului de memorie utilizat, afişează pe
ecran, cu un spaţiu între ele, valoarea care apare de cele mai multe ori în fişier şi de câte
ori apare ea. Dacă există mai multe valori care apar de un număr maxim de ori, se va afişa
cea mai mică dintre ele. (6p.)
 Exemplu: dacă fişierul
NUMERE.TXT are conţinutul
alăturat,
8
711 711 711 11111 11111 11111 191111 231111
atunci programul va afişa pe ecran 711 3.
*/

void rezolvareVectorFrecventa(){
    ifstream f("numere.txt");
    int n,x;
    f>>n;
    int frec[100000]{};
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        f>>x;
        frec[x]++;
        cout<<x<<endl;
    }
    for(int i=0;i<100000;i++){
        if(frec[i]>0){
            cout<<i<<"apare de "<<frec[i]<<endl;
        }
    }
    int maxCT=0,maxVal=0;
    for(int i=0;i<=10000;i++){
        if(frec[i]>maxCT){
            maxCT=frec[i];
            maxVal=i;
        }
    }
    cout<<endl;
    cout<<maxVal<< " "<<maxCT;



}

void altModel(){
   ifstream f("numere.txt");
   int n,x;
   int v[100000];
   f>>n;
   for(int i=0;i<n;i++){
        f>>v[i];
   }
   int maxCT=0,maxVal=v[0];

   for(int i=0;i<n-1;i++){
       int val=v[i];
          int ct=1;
       if(v[i]==v[i+1]){
          while(v[i]==v[i+1]){
            ct++;
            i++;
          }
          if(maxCT<ct){
             maxCT=ct;
             maxVal=val;
          }
          i--;
       }
   }
   cout<<maxVal<<" "<<maxCT;
}




#endif // varinata70.h
