#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin >> a >> b >>c;
   string d= "vertebrado" , e="ave", f="mamifero", g="carnivoro", h="onivoro",i="onivoro", j="herbivoro";
   string k="invertebrado", l="inseto",m="anelideo", n="hematofago", o="herbivoro",p="hematofago", q="onivoro";
   if(a==d && b==e && c==g)
    cout << "agula\n";
   else if(a==d && b==e && c==h)
    cout << "pomba\n";
   else if(a==d && b==f && c==i)
    cout << "homem\n";
   else if(a==d && b==f && c==j)
    cout << "vaca\n";


    if(a==k && b==l && c==n)
    cout << "pulga\n";
   else if(a==k && b==l && c==o)
    cout <<  "lagarta\n";
   else if(a==k && b==m && c==p)
    cout << "sanguessuga\n";
   else if(a==k && b==m && c==q)
    cout << "minhoca\n";
}
