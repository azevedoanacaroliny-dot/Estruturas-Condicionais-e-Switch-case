#include <iostream> 
using namespace std; 

  
    int main() 
{ 

   int dia;   

   cout << "digite um numero de 1 a 7: "; 
   cin >> dia; 

    
   switch(dia) { 

    case 1:  
       cout <<" Domingo;"; 
    break; 

     case 2:  
       cout << " Segunda"; 
    break; 

     case 3:  
       cout << "Terca"; 
    break; 

    case 4:  
       cout << " Quarta "; 
    break; 

    case 5:  
       cout << " Quinta "; 
    break; 

    case 6:  
       cout << " Sexta "; 
    break; 
     
    case 7:  
       cout << " Sabado "; 
    break; 

    default: cout << " dia invalido!"; 
   } 

    return 0; 
} 
