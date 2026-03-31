#ifndef varianta74.h
#define varianta74.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
2. Se consideră funcţia Suma, definită
alăturat. Ce valoare are Suma(3)? Dar
Suma(8)?
(6p.
)
int Suma(int x)
{ if(x == 1 ) return 0;
 if(x%2==0) return Suma(x-1)+(x1)*x;
 return Suma(x-1)-(x-1)*x;
}
Suma(1) = 0
Suma(2) = Suma(1) + 1*2 = 0 + 2 = 2
Suma(3) = Suma(2) - 2*3 = 2 - 6 = -4
pentru s(3)=-4


Suma(1) = 0
Suma(2) = 0 + 2 = 2
Suma(3) = 2 - 6 = -4
Suma(4) = -4 + 3*4 = -4 + 12 = 8
Suma(5) = 8 - 4*5 = 8 - 20 = -12
Suma(6) = -12 + 5*6 = -12 + 30 = 18
Suma(7) = 18 - 6*7 = 18 - 42 = -24
Suma(8) = -24 + 7*8 = -24 + 56 = 32
pentru s(8)=32
*/

/*
3. a) Scrieţi definiţia completă a subprogramului Cifra, cu doi parametri, n şi x, care primeşte
prin intermediul parametrului n un număr natural de cel mult nouă cifre şi furnizează prin
parametrul x cea mai mare cifră a numărului transmis prin parametrul n. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n,
n<1000000000, şi afişează pe ecran mesajul Da în cazul în care numărul citit este format
doar din cifre aparţinând mulţimii {0,1,2,3,4} şi afişează mesajul Nu în caz contrar. (4p.)
*/
void Cifra(int n, int &x)
{
    x = 0;
    while(n > 0)
    {
        int c = n % 10;
        if(c > x)
            x = c;
        n = n / 10;
    }
}

void rezol3(){
    int n;
    cin >> n;
    int ok = 1;
    while(n > 0)
    {
        int c = n % 10;

        if(c > 4)
            ok = 0;

        n = n / 10;
    }

    if(ok == 1)
        cout << "Da";
    else
        cout << "Nu";

}
/*
4. Se numeşte “număr mare” orice număr natural care are mai mult de nouă cifre.
a) Scrieţi un program C/C++ care citeşte de pe prima linie a fişierului text NUMERE.IN un
număr natural n (10<n<1000), iar de pe a doua linie n cifre despărţite prin câte un spaţiu,
dintre care cel puţin una nenulă, şi afişează pe ecran cel mai mic “număr mare” format cu toate
cele n cifre din fişier. Alegeţi o metodă eficientă din punct de vedere al utilizării memoriei.
(6p.)
b) Descrieţi succint în limbaj natural metoda de rezolvare folosită explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
Exemplu: dacă fişierul NUMERE.IN conţine
10
7 9 4 0 9 0 1 1 8 8
atunci se va afişa pe ecran ”numărul mare” :
1001478899
*/

void rezolvare4(){
    ifstream fin("NUMERE.IN");
    int n, v[1000];
    fin >> n;
    for(int i = 0; i < n; i++)
        fin >> v[i];
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    int i = 0;
    while(v[i] == 0)
        i++;
    cout << v[i];
    for(int j = 0; j < i; j++)
        cout << 0;
    for(int j = i+1; j < n; j++)
        cout << v[j];
}



#endif // varianta74.h
