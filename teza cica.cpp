# include <iostream>
# include <conio.h>
using namespace std;
struct lista
{
int info;
lista *leg;
};
lista *p, *prim, *ultim;
int n;
void creare(lista *&prim, lista *&ultim)
{
 int i,inf;
 cout<<"Dati numarul de elemente al listei n = ";
 cin>>n;
 cout<<"Dati prima informatie ";cin>>inf;
 prim=new lista;
 prim->info=inf;
 prim->leg=NULL;
 ultim=prim;
 for(i=2;i<=n;i++)
 {
cout<<"Dati informatia "<<i<<" : ";
cin>>inf;
p=new lista;
p->info=inf;
p->leg=prim;
prim=p;
 }
}
void afisare(lista *prim)
{
 p=prim;
 while(p!=NULL)
 {
cout<<p->info<<" ";
p=p->leg;
 }
}
int suma(lista *prim)
{
 int suma=0;
 p=prim;
 while(p!=NULL)
 {
suma+=p->info;
p=p->leg;
 }
 return suma;
}
int maxim(lista *prim)
{
 int max=-10000;
 p=prim;
 while(p!=NULL)
 {
if( p->info > max ) max=p->info;
p=p->leg;
 }
 return max;
}
int main(void)
{
creare(prim,ultim);
afisare(prim);
cout<<endl<<"Suma elementelor = "<<suma(prim)<<endl;
cout<<endl<<"Maximul elementelor = "<<maxim(prim)<<endl;
}
