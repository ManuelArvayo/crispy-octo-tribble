#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;


int main() {
  
ifstream arEncriptado;
ofstream arSalida;
char a,b,c,d,e,f,g,h,i9,j,k,l,m,n;
string x, y, z, nombreEntrada, nombreSalida;
int num=0, num1=0, resultado=0;

cout<<"Ingrese el nombre del archivo a decodificar"<<endl;
cin>>nombreEntrada;
cout<<"Ingrese el nombre del archivo final"<<endl;
cin>>nombreSalida;
arEncriptado.open(nombreEntrada.c_str());
arSalida.open(nombreSalida.c_str());

arEncriptado>>a>>b>>c>>d>>e>>f>>g>>h>>i9>>j>>k>>l>>m>>n;


while(arEncriptado>>x>>y>>z){


for(int i= 0; i<x.length(); i++){
  
if(x[i]==a) //Condicional para convertir de B a 0
  x[i]='0';
if(x[i]==b)
  x[i]='1';
if(x[i]==c)
  x[i]='2';
if(x[i]==d)
  x[i]='3';
if(x[i]==e)
  x[i]='4';
if(x[i]==f)
  x[i]='5';
if(x[i]==g)
  x[i]='6';
if(x[i]==h)
  x[i]='7';
if(x[i]==i9)
  x[i]=56;
if(x[i]==j)
  x[i]='9';
num+=(x[i]-48)*(pow(10,(x.length()-i-1)));
}

for(int i2= 0; i2<z.length(); i2++)
{
if(z[i2]==a) //Condi2cional para convertir de B a 0
  z[i2]='0';
if(z[i2]==b)
  z[i2]='1';
if(z[i2]==c)
  z[i2]='2';
if(z[i2]==d)
  z[i2]='3';
if(z[i2]==e)
  z[i2]='4';
if(z[i2]==f)
  z[i2]='5';
if(z[i2]==g)
  z[i2]='6';
if(z[i2]==h)
  z[i2]='7';
if(z[i2]==i9)
  z[i2]=56;
if(z[i2]==j)
  z[i2]='9';
num1+=(z[i2]-48)*(pow(10,z.length()-i2-1));


}
for(int i1= 0; i1<=y.length(); i1++){
if(y[i1]==k){
  y[i1]='+';
  resultado=num+num1;
}
if(y[i1]==l){
   y[i1]='-';
   resultado=num-num1;
}
if(y[i1]==m){
  y[i1]='*';
  resultado=num*num1;
}
if(y[i1]==n){
  y[i1]='/';
  resultado=num/num1;
}
}


arSalida<<"("<<x<<")"<<" "<<y<<" "<<"("<<z<<")"<<" = "<<resultado<<endl;
num=0;
num1=0;
}
// cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l<<m<<n;

arEncriptado.close();
arSalida.close();

return 0;  
}