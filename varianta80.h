#ifndef varianta80.h
#define varianta80.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


//2. Pentru definiţia alăturată a subprogramului sub,
//ce valoare are sub(9)? Dar sub(132764)?


int sub(long n){
    if (n!=0){
        if(n%2!=0){
            return n%10+sub(n/10);
        }
        else return sub(n/10);
    }
    else return 0;
}
/*
sbu(9)  9!=0 da n%2!=0 da  ret 9+sub(0)
sub(0)  0!=0 nu ret 0
rez 9+0=9

sub(132764) 132764!=0 da 132764%2!=0 nu ret sub(13276)
sub(13276)   13276!=0 da  13276%2!=0 nu ret sub(1327)
sub(1327)     1327!=0 da   1327%2!=0 da ret  7+sub(132)
sub(132)       132!=0 da    132%2!=0 nu ret  sub(13)
sub(13)         13!=0 da     13%2!=0 da ret  3+sub(1)
sub(1)           1!=0 da      1%2!=0 da ret  1+sub(0)
sub(0)           0!=0 nu ret 0---------------

rezultat == 1+3+7=11
*/




/*
3. Fişierul text bac.in conţine cel mult 1000 de numere naturale cu cel mult patru cifre
fiecare, despărţite prin câte un spaţiu. Scrieţi programul C/C++ care citeşte numerele din
fişier şi afişează pe ecran, în ordine crescătoare, acele numere din fişier care au toate cifrele
egale. Dacă fişierul nu conţine niciun astfel de număr, se va afişa pe ecran mesajul NU
EXISTA.
Exemplu: dacă fişierul bac.in conţine numerele: 30 44 111 7 25 5 atunci pe ecran
se va afişa 5 7 44 111.
*/


bool toateCIfreleEgale(int n){
    int cifra=n%10;
    n/=10;
    while(n>0){
        if(n%10!=cifra){
            return false;
        }
        n/=10;
    }
    return true;
}

void rez3(){
    ifstream f("bac.in");
    int v[1000],x;
    int n=0;
    while(f>>x){
        if(toateCIfreleEgale(x)){
            v[n++]=x;
        }
    }
    if(n==0){
        cout<<"NU EXISTA";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
              int aux=v[i];
              v[i]=v[j];
              v[j]=aux;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

/*
4. a) Scrieţi definiţia completă a unui subprogram divi cu doi parametri, care primeşte prin
intermediul parametrului n un număr natural nenul cu cel mult 6 cifre şi returnează prin
intermediul parametrului d cel mai mic divizor propriu al lui n sau 0 in cazul în care n nu are
niciun divizor propriu. De exemplu, pentru n=15, d va avea valoarea 3. (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural nenul n
(1<n<1000000) şi afişează pe ecran cel mai mare numar natural mai mic decât n care îl
divide pe n. Se vor folosi apeluri utile ale subprogramului divi.
Exemple: dacă n=120, se afişează pe ecran 60, iar dacă n=43, se afişează 1.
*/


void divi(int n,int &d){
    d=0;
    for(int i=2;i<n;i++){
        if(n%i==0&&d==0){
            d=i;
        }
    }
}

void rezolvare4(){
    int n;
    cin>>n;
    int d;
    divi(n,d);
    if(d==0){
        cout<<1;
    }
    else{
        cout<<n/d;
    }
}
















#endif // varianta80.h
