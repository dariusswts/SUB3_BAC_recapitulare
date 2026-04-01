#ifndef varianta76.h
#define varianta76.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
2. Pentru definiţia alăturată a subprogramului
sub, scrieţi ce valoare are sub(3). Dar
sub(132764)?
(6p.)

*/
long sub(long n)
{  if (n!=0){
      if(n%2!=0){
            return n%10*sub(n/10);
      }
      else {
            return sub(n/10);
      }
   }
   else return 1;
}
/*
sub(3): 3!=0 da  n%2!=0 da  ret 3*sub(0)
sub(0): 0!=0 nu ret 1 ----------
sub(3)=3

sub(132764): 132764!=0 da  n%2!=0 nu  ret sub(13276)
sub(13276) :  n!=0 da      n%2!=0 nu  ret sub(1327)
sub(1327)  :  n!=0 da      n%2!=0 da  ret 7*sub(132)
sub(132)   :  n!=0 da      n%2!=0 nu  ret sub(13)
sub(13)    :  n!=0 da      n%2!=0 da  ret 3*sub(1)
sub(1)     :  n!=0 da      n%2!=0 da  ret 1*sub(0)
sub(0)     :  n!=0 nu ret 1 --------

sub(1)=1*1
sub(13)=3*1
sub(132)=3
sub(1327)=7*3=21
sub(13276)=21
sub(132764)=21
*/



/*
3. Scrieţi definiţia completă a unui subprogram s cu trei parametri care primeşte prin
intermediul parametrului n un număr natural de maximum 9 cifre, prin intermediul
parametrului c o cifră şi furnizează prin intermediul parametrului k numărul de cifre ale
numărului n care aparţin intervalului [c-1,c+1].
Exemplu: pentru n=1233 şi c=3, k va avea valoarea 3, iar pentru n=650 şi c=3, k va
avea valoarea 0.
*/

void s(int n,int c,int &k){
    k=0;
    while(n>0){
        int cifra=n%10;
        if(cifra>=c-1&&cifra<=c+1){
            k++;
        }
        n/=10;
    }

}

/*
4. Fişierul BAC.TXT are pe prima linie două numere naturale n şi m (0<n<1000, 0<m<1000)
separate prin câte un spaţiu, pe linia a doua n numere întregi ordonate strict crescător, iar
pe linia a treia m numere naturale distincte. Numerele din fişier aflate pe linia a doua şi a
treia au cel mult 6 cifre fiecare şi sunt despărţite în cadrul liniei prin câte un spaţiu. Să se
scrie un program care citeşte toate numerele din fişier şi afişează pe ecran, despărţite prin
câte un spaţiu, toate numerele de pe a doua linie a fişierului care apar cel puţin o dată şi pe
linia a treia a acestuia.
Exemplu: dacă fişierul are următorul conţinut:
6 5
2 3 4 5 8 9
4 5 2 11 8
atunci se va afişa: 5 2 8, nu neapărat în această ordine.
*/


void citeste(int&n,int&m,int a[],int b[]){
    ifstream cit("numere-in");
    cit>>n>>m;
    for(int i=0;i<n;i++){
        cit>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cit>>b[i];
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
bool verifica(int x,int v[],int dim){
    for(int i=0;i<dim;i++){
        if(v[i]==x){
            return true;
        }
    }
    return false;
}

void r4(){
    int n,m;
    int a[1000],b[1000];
    citeste(n,m,a,b);
    for(int i=0;i<n;i++){
        if(verifica(a[i],b,m)){
            cout<<a[i]<<" ";
        }
    }
}














#endif // varianta76.h
