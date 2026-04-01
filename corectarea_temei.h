#ifndef corectarea_temei.h
#define corectarea_temei.h
#include <iostream>
#include <fstream>
#include <string.h>
#include <cmath>

using namespace std;


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



//a  u(123^5
int ultimaCifra(int a,int b){
    int ultima=a%10;
    int rezultat=1;
    for(int i=1;i<=b;i++){
       rezultat=(rezultat*ultima)%10;
    }
    return rezultat;
}




//c
void rezolvare1(){
    ifstream f("sir-in");
    ofstream fin("sir-out");
    int n,x,y;
    f>>n;
    int suma=0;
    for(int i=1;i<=n;i++){
        f>>x>>y;
        suma+=ultimaCifra(x,y);
    }
    fin<<suma%10;;


}







/*
3. a) Scrieţi definiţia completă a subprogramului Cautare, cu trei parametri, n, x şi v, care
primeşte prin parametrul n un număr natural (1≤n≤1000), prin parametrul x un tablou
unidimensional format din n componente (numere întregi de cel mult patru cifre fiecare: x1,
x2, …, xn) memorate în ordine crescătoare şi prin parametrul v un număr întreg de cel mult
patru cifre, diferit de oricare dintre elementele tabloului unidimensional x.
Subprogramul va căuta, în mod eficient din punct de vedere al timpului de executare, poziţia
pe care ar trebui inserată valoarea v în şirul x astfel încât să se obţină tot un şir ordonat şi
returnează această poziţie. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
c) Fişierul text sir.in conţine cel mult 1000 numere naturale de maximum patru cifre
fiecare, numerele fiind diferite două câte două şi despărţite prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte numerele din fişierul sir.in şi, folosind apeluri utile
ale subprogramului Cautare, construieşte în memorie un tablou unidimensional care va
conţine toate numerele din fişierul sir.in ordonate crescător. Programul scrie în fişierul
text sir.out şirul obţinut, câte 10 elemente pe un rând, elementele de pe acelaşi rând
fiind despărţite printr-un singur spaţiu.
Exemplu: dacă fişierul sir.in conţine numerele: 7 -5 635 -456 0 8 587 -98 65 3 -8
atunci după executarea programului fişierul sir.out va conţine:
-456 -98 -8 -5 0 3 7 8 65 587
635
*/


///a)
int cauta(int n,int x[],int v){
    int i=n;
    while(i>=1&&x[i]>v){
        x[i+1]=x[i];
        i--;
    }
    x[i+1]=v;
    return i+1;
}
/*
x=[ 1 ,5 ,8 ,12 ,17]  v= 7

i=5    while(i>=1&&x[i]>v)   x[i+1]=x[i]           i--}    x[i+1]=v
 5               da          1 5 8 12 17 17         4
 4               da          1 5 8 12 12 17         3
 3               da          1 5 8  8 12 17         2
 2               nu                                        x[3]=7  1 5 7 8 12 17

 ------------------------------------ return i+1 == 2+1=3
*/

///c)

void rezolvare2(){
    ifstream f("numere-in");
    ofstream ins("numere-out");
    int x[1001];
    int n=0,v;
    while(f>>v){
        n++;
        cauta(n,x,v);
    }
    for(int i=1;i<=n;i++){
       ins<<x[i]<<" ";
       if(i%10==0){
        ins<<endl;
       }
    }
}


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
///a)
int Ecuatie(int a, int b, int c)
{
    int delta = b*b - 4*a*c;

    if(delta < 0)
        return -32000;

    int x1=(-b+sqrt(delta))/(2*a);
    int x2=(-b-sqrt(delta))/(2*a);
    if(x1==x2&&x1>0){
        return x1;
    }
    if(x1!=x2){
        if(x1>x2)return x1;
        else return x2;
    }
    return -32000;
}

///b

void rezolare4(){
    int k;
    cin>>k;
    int poz=1;
    while(k>poz){
        k-=poz;
        poz++;
    }
    cout<<k;

}
/*
3. Un număr natural se numeşte palindrom dacă numărul citit de la stânga la dreapta este egal
cu numărul citit de la dreapta la stânga.
a) Scrieţi definiţia completă a subprogramului Palindrom care primeşte prin intermediul
parametrului n un număr natural de cel mult nouă cifre şi returnează 1 dacă acesta este
palindrom şi 0 în caz contrar. (10p.)
b) Fişierul text NUMERE.IN conţine cel mult 100000 numere naturale de cel mult nouă cifre
fiecare, numerele fiind despărţite prin câte un spaţiu. Cel puţin unul dintre numere este
palindrom.
Scrieţi programul C/C++ care citeşte numerele din fişierul NUMERE.IN şi, folosind apeluri
utile ale subprogramului Palindrom determină în mod eficient, din punct de vedere al
memoriei utilizate şi al timpului de executare, care este cel mai mare număr palindrom citit şi
de câte ori apare el în fişierul NUMERE.IN. Programul scrie în fişierul text NUMERE.OUT
numărul astfel determinat precum şi numărul de apariţii ale acestuia, pe rânduri diferite.
Exemplu: dacă NUMERE.IN conţine numerele:
23 565 78687 7887 7865 78687 7887 23 78687 98798
atunci NUMERE.OUT va conţine:
78687
3
*/

int Palindrom(int n)
{
    int ogl = 0, copie = n;

    while(n > 0)
    {
        ogl = ogl * 10 + n % 10;
        n = n / 10;
    }

    if(ogl == copie)
        return 1;
    else
        return 0;
}

void rezolvare5(){
    ifstream fin("numere-in");
    ofstream f("numere-out");
    int x;
    int maxim=0;
    int apariti=0;
    while(fin>>x){
        if(Palindrom(x)==1){
            if(x>maxim){
            maxim=x;
            apariti=1;
            }
            else if(x==maxim){
                apariti++;
            }
        }
    }

    f<<maxim<<endl;
    f<<apariti;

}



#endif // corectarea_temei.h
