#include <iostream>
#include <iomanip>

using namespace std;
#include "Compte.h"
#include "Client.h"


int main() 
{
   int n ;
   Client a;
   Compte b;
   //b.Crediter();




	cout << "--------------------------------------------------------"<< endl;
   cout << "                   BIENVENUE À LCL                      "<< endl;
   cout << "-------------------------------------------------------- \n"<< endl;

   cout << "1) Inscription \n" << endl;
   cout << "2) Connexion \n" << endl;
   cout << "3) Quitter \n" << endl;

   cin >> n ;

   switch(n) 
   {
      case 1:
         a.Creation();
         a.Connexion();
         b.Menu();


         break;

      case 2:
          a.Connexion();
          b.Menu();
          break;

      default:
         break;


   }



   /*Client a;
   a.Creation();
   a.Connexion();*/

   //Compte b;
  //b.Crediter();





   
   return 0;

}
