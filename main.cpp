/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
     int segundo = 0;
     int primero = 0;
     int valor1 = 1;
     int tercero = 0;
     cout<<"introduce un numero";
     while(valor1 != 0){
         cin>>valor1;
         if(valor1 > primero){
             tercero = segundo;
             segundo = primero;
             primero = valor1;
         }
         else {
             if(valor1 > segundo){
                 tercero = segundo;
                 segundo = valor1;
             }
             else{
                 if(valor1 > tercero){
                     tercero = valor1;
                 }
             }
         }
        
     }
       cout<<"orden"<<primero<<","<< segundo<<","<<tercero; 
        
    }

