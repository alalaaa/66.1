#include <iostream>
#include <fstream>
using namespace std;


const int SIZE = 1000;
int suma(int n) 
{
	int suma=0;
	while(n > 0) 
	{
    suma+=n%10;
    n/=10;
  }
  return suma;
}

void oblicz() 
{
  ifstream plik("c:\\a.txt");
  int a,b,c;
  
  for(int i=0; i<SIZE; i++) 
  {
    plik>>a>>b>>c;
    if(suma(a) + suma(b) == c)
	{
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
  }
  
  
  
  plik.close();
  cout<<endl;
}

int main(int argc, char** argv) {
	oblicz();
	return 0;
}
