#ifndef recapitulareSUB3.h
#define recapitulareSUB3.h
#include <iostream>
#include <fstream>
#include <fstream>
#include <string.h>
using namespace std;



///varianta 67

///sub2
/*
5. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt format din cel mult 50
caractere, doar litere mari ale alfabetului englez, şi afişează pe ecran, fiecare pe câte o linie,
toate sufixele acestuia, în ordine crescătoare a lungimilor. Un sufix de lungime k al unui
cuvânt este un subşir format din ultimele k caractere ale acestuia. (10p.)
Exemplu: dacă se citeşte cuvântul EXAMEN se vor afişa sufixele :
N
EN
MEN
AMEN
XAMEN
EXAMEN
*/

void SUB2(){
    char s[100]="EXAMEN";
    for(int i=0;i<=strlen(s);i++){
        for(int j=strlen(s)-i;j<strlen(s);j++){
            cout<<s[j];
        }
        cout<<endl;
    }
}




/*
Se consideră subprogramul recursiv definit
alăturat. Ce valoare are alfa(6)? Pentru ce
valoare a parametrului u, alfa(u) are
valoarea 25 ? (6p.)
int alfa(int u)
{if (u==0) return 3;
else return alfa(u-1)+3*u-2;


alfa(6)  6==0 nu  alfa(5)+3*6-2= alfa(5)+16
alfa(5)  5==0 nu  alfa(4)+3*5-2= alfa(4)+13
alfa(4)  4==0 nu  alfa(3)+3*4-2= alfa(3)+10
alfa(3)  3==0 nu  alfa(2)+3*3-2= alfa(2)+7
alfa(2)  2==0 nu  alfa(1)+3*2-2= alfa(1)+4
alfa(1)  1==0 nu  alfa(0)+3*1-2= alfa(0)+1
alfa(0)  0==0 da  return 3;

raspuns 3+1+4+7+10+13+16=54
alfa(6)=54
alfa(4)=25
*/




/*
Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin intermediul parametrului n un număr natural nenul (1≤n≤10000), iar prin intermediul
parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
aceste valori având cel mult 9 cifre. Subprogramul returnează numărul de numere prime
din tablou. (10p.)
Exemplu: pentru n=5 şi tabloul unidimensional (12,37,43,6,71) în urma apelului se va
returna 3
*/

int nrPrim(int x){
    for(int i=2;i*i<=x;i++){
        if(x%1==0){
            return 0;
        }
    }
    return 1;
}

int contorPrime(int v[], int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(nrPrim(v[i])==1){
            cnt++;
        }
    }
    return cnt;
}

void rez1(){
    int n,v[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<contorPrime(v,n);
}

/*
Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie un şir crescător de n numere naturale, fiecare având cel mult 9 cifre. Numerele
de pe a doua linie sunt separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care, utilizând o metodă eficientă din punct de vedere al
timpului de executare şi al spaţiului de memorie, afişează pe ecran elementele distincte ale
şirului aflat pe a doua linie a fişierului. (6p.)
Exemplu: dacă fişierul NUMERE.TXT are
conţinutul alăturat
7
111 111 111 2111 4111 71111 71111
atunci programul va afişa pe ecran 111 2111 4111 71111.

*/

void rez2(){
    ifstream citire("numere.txt");
    int n,nr;
    int ant;
    citire>>n;
    if(n>0){
        citire>>ant;
        cout<<ant<<" ";
    }
    for(int i=2;i<=n;i++){
       citire>>nr;
       if(nr!=ant){
        cout<<nr<<" ";
        ant=nr;
       }
    }


}



















#endif // recapitulareSUB3.h
