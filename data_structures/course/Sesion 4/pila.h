
// Implementacion de la clase pila con una estructura de datos dinamica

#include <iostream>
using namespace std;
struct nodopila
{
   int dato;
   nodopila *sig;
};


typedef nodopila *pnodopila;

class pila
{
   private:
   pnodopila pcima;
   public:
   pila();
   ~pila();
   void apilar(int x);
   int desapilar();
   void imprimir();
};

pila::pila()
{
    pcima = NULL;
}

pila::~pila()
{
    pnodopila p,q;
    if(pcima!=NULL)
    {
      p = pcima;
      while(p!=NULL)
      {
        q=(*p).sig;
        delete p;
        p=q;
      }
    }
}


void pila::apilar(int x)
{
    pnodopila p;
    p = new nodopila;
    (*p).dato=x;
    (*p).sig=pcima;
    pcima=p;
}

int pila::desapilar()
{
    pnodopila p;
    int x;
    p = pcima;
    pcima=(*p).sig;
    x=(*p).dato;
    delete p;
    return x;
}

void pila::imprimir()
{
    pnodopila p;
    if(pcima==NULL)
      cout<<"Pila vacia"<<endl;
    else
    {
       p=pcima;
       while(p!=NULL)
       {
          cout<<(*p).dato<<"->";
          p=(*p).sig;
       }
       cout<<"NULO"<<endl;
    }
}

