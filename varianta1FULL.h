#ifndef varianta1FULL.h
#define varianta1FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Variabila x este de tip real. Care dintre următoarele expresii C/C++ are valoarea 1 dacă şi
numai dacă numărul real memorat în variabila x aparţine intervalului (5,8]? (4p.)
a. (x<8) && (x>=5) b. (x<=8) || (x>5)
c. (x>8) || (x<=5) d. (x<=8) && (x>5)

x > 5
x ≤ 8
d

*/

/*
2. Se consideră algoritmul alăturat, descris în pseudocod.
S-a notat cu x%y restul împărţirii numărului întreg x la numărul
întreg nenul y şi cu [a] partea întreagă a numărului real a.
a) Scrieţi valoarea care se va afişa dacă se citeşte
n=103456. (6p.)
b) Scrieţi toate numere naturale impare, distincte, fiecare
având exact două cifre, care pot fi citite pentru variabila
n astfel încât să se afişeze valoarea 3. (4p.)
c) Scrieţi în pseudocod un algoritm, echivalent cu cel dat,
în care să se înlocuiască structura cât timp...execută
cu o structură repetitivă de alt tip. (6p.)
citeşte n (număr natural)
zÅ0
pÅ1
┌cât timp n>0 execută
│ cÅn%10
│ nÅ[n/10]
│┌dacă c%3=0 atunci
││ zÅz+p*(9-c)
││ pÅp*10
│└■
└■
scrie z
d) Scrieţi programul C/C++ corespunzător algoritmului dat.


a))
pentru 6 → 9-6 = 3
pentru 3 → 9-3 = 6
pentru 0 → 9-0 = 9

Numărul obținut: 963








5.Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mică dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu.
5.
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată.


*/

void ex5(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(i < j)
                cout << i << " ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
}

/*
Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(121,1);? (6p.)
2.
//C++
void f(long n, int i)
{ if(n!=0)
 if(n%3>0)
 { cout<<i; f(n/3,i+1); }



 121 % 3 = 1 → afișează 1
40 % 3 = 1 → afișează 2
13 % 3 = 1 → afișează 3
4 % 3 = 1 → afișează 4
1 % 3 = 1 → afișează 5

rezultat 12345

 */


 /*
 3. Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program
C/C++ care citeşte de la tastatură un număr natural nenul n (n≤999) şi numerele din fişierul
bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
care sunt divizibile cu n. Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul bac.txt conţine numerele: 3 100 40 70 25 5 80 6 3798,
pentru n=10 atunci pe ecran se va afişa: 100 40 70 80
*/

void rezolvare3(){
    ifstream f("numere-in");
    int n, x;
    cin >> n;
    bool gasit = false;
    while(f >> x)
    {
        if(x % n == 0)
        {
            cout << x << " ";
            gasit = true;
        }
    }

    if(!gasit)
        cout << "NU EXISTA";
}

/*
4. Subprogramul sub, cu trei parametri, primeşte prin intermediul parametrilor:
– v un tablou unidimensional cu cel mult 100 de componente ce memorează numere
întregi de cel mult 4 cifre fiecare;
– n un număr natural nenul mai mic sau egal cu 100 ce reprezintă numărul efectiv de
componente ale tabloului primit prin intermediul parametrului v;
– a un număr întreg cu cel mult 4 cifre.
Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul
parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
Exemplu: pentru valorile n=5, v=(1,21,9,21,403), a=20 ale parametrilor, în urma
apelului, subprogramului sub va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului sub.
*/
int sub(int v[], int n, int a)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(v[i] < a)
            cnt++;

    return cnt;
}




#endif // varianta1FULL.h
