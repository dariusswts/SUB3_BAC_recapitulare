#ifndef varianta9FULL.h
#define varianta9FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Care dintre expresiile C/C++ de mai jos este
echivalentă cu expresia alăturată? (4p.)
((a>3) && (a<15)) || (a!=b)
a. ((a>3) || (a<15)) && (a==b) b. !((a<=3) || (a>=15)) || (a!=b)
c. ((a>3) || (a<15)) && (a!=b) d. !(a<3 || a>15) && (a!=b)

b. !((a<=3) || (a>=15)) || (a!=b)

Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
2. Se consideră algoritmul alăturat, descris în pseudocod:
S-a notat cu [c] partea întreagă a numărului real c, iar cu
a%b restul împărţirii numărului întreg a la numărul întreg nenul
b.
a) Scrieţi valoarea care se afişează, în urma executării
algoritmului, dacă se citeşte pentru n valoarea 1239.
 (6p.)
 n	   n%10	s înainte	Condiție	s după
1239	9	  10	      9<10	       9
123	    3	   9	      3<9	       3
12	    2	   3	      2<3	       2
1	    1	   2	      1<2	       1
afisare 1


d) Scrieţi programul C/C++ corespunzător algoritmului
dat. (10p.)
citeşte n (număr natural)
sÅ10
┌cât timp n>0 execută
│┌dacă n%10<s atunci
││ sÅn%10
││altfel
││ sÅ-1
│└■
│ nÅ[n/10]
└■
 scrie s
 */
void rezolvare2D(){
    int n,s=10;
    cin>>n;

    while(n>0)
    {
        if(n%10 < s)
            s = n%10;
        else
            s = -1;

        n = n/10;
    }

    cout<<s;
}
/*
 4. Se consideră declararea de mai jos:
char s[50], x[50];
Ce se afişează în urma executării secvenţei de
program scrisă alăturat dacă variabila s memorează
şirul abcdefg? (6p.)
strcpy(x,s+4);
strcpy(s+4,”123”);
strcat(s,x);
cout<<s; | printf(”%s”,s);

s = "abcdefg"
x = "efg"
s devine "abcd123"
s = "abcd123efg"

*/
/*
1. Se consideră subprogramul f cu definiţia
alăturată. Ce valoare are f(1213111,1)?
 (4p.)
int f (long n, int k){
 if (n!=0)
 if(n%10==k)
 return 1+f(n/10,k);
 else return 0;
 else return 0;}
a. 5 b. 3 c. 2 d. 1

d 1
*/
/*
 3. Scrieţi definiţia completă a subprogramului sub cu doi parametri: n (număr natural,
0<n≤50) şi k (număr natural, 0<k≤20). Subprogramul determină afişarea pe o linie nouă a
ecranului, în ordine descrescătoare, a primelor n numere naturale nenule divizibile cu k.
Numerele vor fi separate prin câte spaţiu.
Exemplu: dacă n=3 şi k=5 la apelul subprogramului se va afişa pe ecran:
15 10 5 */
void sub(int n,int k)
{
    for(int i=n;i>=1;i--)
        cout<<i*k<<" ";
}


#endif // varianta9FULL.h
