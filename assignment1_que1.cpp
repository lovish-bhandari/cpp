// write a program to input a temp in F and convert it into celsiusmys
#include <iostream>
using namespace std ;

int main(){float ftemp,ctemp;
    cout<< " Enter the temperature in fahrenheit :  "<<endl;
    cin>>ftemp;
    ctemp= ((ftemp-32)*5)/9;
    cout<<"The temp in celsius is "<<ctemp;
return 0;
}
