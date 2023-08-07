#include <catdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
 float pecahan, vround, vcell, vfloor, vtrunc;
 
 //minta masukan bilangan pecahan 
 cout<< "Masukan bilangang pecahan : ";
 cin >> pecahan;
 
 //melakukan pembulatan
 vround = round(pecahan);
 cveil = ceil(pecahan);
 vfloor = floor(pecahan);
 vtrunc = trunc(pecahan);
 
//menampilkan hasil pembulatan
cout << "Hasil pembulatan Round: " << vround <<endl;
cout << "Hasil pembulatan Ceil: " << vceil <<endl;
cout << "Hasil pembulatan Floor: " << vfloor <<endl;
cout << "Hasil pembultan Trunc: " << vtrunc <<endl;

 system ("PAUSE");
 return 0;
}
