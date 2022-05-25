#include<iostream>
using namespace std;

float impostoMensal(float s)
{
  float p, v;
  
  if(s<=1903.98)
  {
     p=0;
     v=0;
  }
  
  else if(s <= 2826.65)
  {
      p=7.5;
      v=142.80;
  }
  else if(s <= 3751.05)
  {
      p=15;
      v=354.80;
  }
  else if(s <= 4664.68)
  {
      p=22.5;
      v=636.13;
  }
  else
  {
      p=27.5;
      v=869.36;
  }
   return (((s*p)/100)-v);

}

float impostoAnual(float s)
{ 
      return(12*impostoMensal(s));
}


int main()
{
    float s, mensal, anual;

        cout <<"insira seu salario para o calculo do imposto de renda\n";
        cin >>s;

    while(s!=0)
    {
        mensal=impostoMensal(s);
        anual=impostoAnual(s);

        cout <<"Imposto mensal:"<< mensal << endl;
        cout <<"Imposto anual:"<< anual << endl;
      
        return main();

    }
   
}
