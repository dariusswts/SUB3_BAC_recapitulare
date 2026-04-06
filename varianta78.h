#ifndef varianta78.h
#define varianta78.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

//2. Pentru definiţia alăturată a subprogramului
//sub, scrieţi ce valoare are sub(4). Dar
//sub(123986)? (6p.)
int sub(long n){
     if(n!=0){
        if(n%2!=0){
            return 1+sub(n/10);
        }
        else return sub(n/10);
     }
     else return 0;
}

/*
sub(123986)
123986!=0 da 123986%2!=0 nu  ret 1+sub(12398);
 12398!=0 da 12398 %2!=0 nu  ret 1+sub(1239);
  1239!=0 da 1239%2!=0  da   ret sub(123);
   123!=0 da 123 %2!=0  da   ret sub(12);
    12!=0 da 12%2!=0 nu      ret 1+sub(1);
     1!=0 da 1%2!=0  da      ret 1+sub(0);
     0!=0 nu ret 0

return 0+1+1+1+1=4
*/


/*
3. a) Scrieţi doar antetul unui subprogram prim cu doi parametri, care primeşte prin
intermediul parametrului n un număr natural cu cel mult patru cifre şi returnează prin
intermediului parametrului p valoarea 1 dacă n este prim şi 0 în caz contrar.
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (3<n<10000)
şi afişează pe ecran, despărţite prin câte un spaţiu, primele n numerele prime, folosind
apeluri utile ale subprogramului prim.
Exemplu: pentru n=4 pe ecran vor fi afişate numerele 2 3 5 7
*/

//a) void prim(int n,int &p)


//b)
void prim(int n,int &p){
    if(n<2){
        p=0;
    }
    p=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            p=0;
        }
    }
}
void rezolvare3(){
    int n;
    cin>>n;
    int ct=0;
    int numar=2;
    int p;
    while(ct<n){
        prim(numar,p);
        if(p==1){
            cout<<numar<<" ";
            ct++;
        }
        numar++;
    }
}


/*
4. Fişierul text bac.in conţine pe prima sa linie un număr natural n (0<n<10000), iar pe
următoarea linie n numere naturale din intervalul [1,100]. Se cere să se citescă din fişier
toate numerele şi să se afişeze pe ecran, în ordine descrescătoare, toate numerele care
apar pe a doua linie a fişierului şi numărul de apariţii ale fiecăruia. Dacă un număr apare de
mai multe ori, el va fi afişat o singură dată. Fiecare pereche „valoare - număr de apariţii” va
fi afişată pe câte o linie a ecranului, numerele fiind separate printr-un spaţiu, ca în exemplu.
Alegeţi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fişierul bac.in are următorul conţinut:
12
1 2 2 3 2 2 3 3 2 3 2 1
pe ecran se vor afişa, în această ordine, perechile:
3 4
2 6
1 2
a) Explicaţi în limbaj natural metoda utilizată justificând eficienţa acesteia (4-6 rânduri) (4p.)
b) Scrieţi programul C/C++ ce rezolvă problema enunţată, corespunzător metodei
descrise la punctul a
*/


void rezolvare4(){
    ifstream f("bac.in");
    int n;
    f>>n;
    int frec[100]{0};
    int nr;
    for(int i=0;i<n;i++){
        f>>nr;
        frec[nr]++;
    }
    for(int i=100;i>=1;i--){
        if(frec[i]!=0){
            cout<<i<<" "<<frec[i]<<endl;
        }
    }
}




#endif // varianta78.h
