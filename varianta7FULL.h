#ifndef varianta7FULL.h
#define varianta7FULL.h
/*
1. Fiecare dintre variabilele întregi x şi y memorează câte un număr natural. Care dintre
expresiile C/C++ de mai jos are valoarea 1 dacă şi numai dacă numărul memorat în x este
strict mai mare decât 0 şi numărul memorat în y este strict mai mare decât 5? (4p.)
a. x*y-5!=0 b. x*(y-5)!=0
c. x*(y-5)>=0 d. !(x*(y-5)<=0)

d. !(x*(y-5)<=0)


 5. Se consideră un text cu maximum 255 de caractere, format din litere mici ale alfabetului
englez şi spaţii. Textul conţine cel puţin o consoană. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi apoi determină transformarea acestuia, eliminând numai ultima
consoană care apare în text, ca în exemplu. Programul va afişa pe ecran textul obţinut.
Exemplu: dacă de la tastatură se introduce textul: mare frig saci
pe ecran se va afişa: mare frig sai (10p.)
*/
void rezolvare5sub2(){
    char s[256];
    cin.getline(s,256);

    int poz=-1;

    for(int i=0;i<strlen(s);i++)
        if(!strchr("aeiou",s[i]))
            poz=i;

    if(poz!=-1)
        for(int i=poz;i<strlen(s);i++)
            s[i]=s[i+1];

    cout<<s;
}

//1. Se consideră subprogramul f definit
//alăturat. Ce se va afişa în urma
//apelului f(12345);? (4p.)
void f(long int n)
{ if (n!=0)
 {if (n%2 == 0)
 cout<<n%10; | printf(“%d”,n%10);
 f(n/10);
 }
}
//a. 513 b. 24 c. 42 d. 315
//raspuns b 42
/*
 3. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100)şi cele
3*n elemente ale tabloului unidimensional v, fiecare element fiind un număr natural cu cel
mult patru cifre fiecare. Tabloul este împărţit în trei zone, cu câte n elemente: prima zonă
conţine primele n elemente din tablou, a doua zonă conţine următoarele n elemente din
tablou, restul elementelor fiind în zona a treia. Programul va interschimba primul element
par (dacă există) al zonei unu cu ultimul element impar (dacă există) al zonei trei şi apoi va
scrie pe prima linie a fişierului text BAC.TXT toate elementele tabloului, separate prin câte
un spaţiu. În cazul în care unul dintre aceste două elemente, care urmează a fi
interschimbate, nu există, programul nu va efectua nici o modificare asupra tabloului dat.
Exemplu: pentru n=3 şi v=(1 2 3 4 5 6 7 8 9), fişierul BAC.TXT va conţine:
1 9 3 4 5 6 7 8 2 (10p.)
*/




#endif // varianta7FULL.h
