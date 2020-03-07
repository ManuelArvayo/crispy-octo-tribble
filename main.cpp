#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;


int main() {
  
ifstream arEncriptado;
ofstream arSalida;
char a,b,c,d,e,f,g,h,i,j,k,l,m,n;
string x, y, z;
int num=0, num1=0, resultado=0;

arEncriptado.open("entrada1.txt");
arSalida.open("Salida1.txt");
arEncriptado>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m>>n;


while(arEncriptado>>x>>y>>z){


for(int i= 0; i<x.length(); i++){
  
if(x[i]==66) //Condicional para convertir de B a 0
  x[i]=x[i]-18;
if(x[i]==121)
  x[i]=x[i]-72;
if(x[i]==47)
  x[i]=x[i]+3;
if(x[i]==56)
  x[i]=x[i]-5;
if(x[i]==84)
  x[i]=x[i]-32;
if(x[i]==38)
  x[i]=x[i]+15;
if(x[i]==81)
  x[i]=x[i]-27;
if(x[i]==69)
  x[i]=x[i]-14;
if(x[i]==80)
  x[i]=x[i]-24;
if(x[i]==70)
  x[i]=x[i]-13;
num+=(x[i]-48)*(pow(10,(x.length()-i-1)));
}

for(int i2= 0; i2<z.length(); i2++)
{
if(z[i2]==66)
  z[i2]=z[i2]-18;
if(z[i2]==121)
  z[i2]=z[i2]-72;
if(z[i2]==47)
  z[i2]=z[i2]+3;
if(z[i2]==56)
  z[i2]=z[i2]-5;
if(z[i2]==84)
  z[i2]=z[i2]-32;
if(z[i2]==38)
  z[i2]=z[i2]+15;
if(z[i2]==81)
  z[i2]=z[i2]-27;
if(z[i2]==69)
  z[i2]=z[i2]-14;
if(z[i2]==80)
  z[i2]=z[i2]-24;
if(z[i2]==70)
  z[i2]=z[i2]-13;

num1+=(z[i2]-48)*(pow(10,z.length()-i2-1));


}
for(int i1= 0; i1<=y.length(); i1++){
if(y[i1]==67){
  y[i1]-=24;
  resultado=num+num1;
}
if(y[i1]==99){
   y[i1]-=54;
   resultado=num-num1;
}
if(y[i1]==35){
  y[i1]+=7;
  resultado=num*num1;
}
if(y[i1]==64){
  y[i1]-=17;
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