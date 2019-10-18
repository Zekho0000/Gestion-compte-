#include <iostream>
#include "Compte.h"
#include </usr/include/mysql/mysql.h> // pour utiliser mysql.h


using namespace std;


void Compte::Menu()
{
int n;
Compte a;
float c , d;


cout << "-------------------------------------------------------------------"<< endl;
cout << "                           Opération                               "<< endl;
cout << "-------------------------------------------------------------------\n"<< endl;

cout << "1) Déposer \n" << endl;
cout << "2) Faire un retrait \n" << endl;
cout << "3) Consulter votre compte \n" << endl;
cout << "4) Commander un chèquier \n" << endl; 
cout << "5) Quitter \n" << endl;

cin >> n;

switch(n) 
   {
      case 1:
        a.Crediter(c);
        a.Menu( );


         break;

      case 2:
         a.Debiter(c,d);
         a.Menu();
          break;

      case 3:
         a.Consulter(c,d);
         a.Menu();
         
          break;

      case 4:
         a.Commander();
         a.Menu();
         
          break;




      default:
         break;


   }






}

Compte::Compte(){
	solde = 0 ;
	Retrait = 0;
	NumUnique = 0;


	if(NumUnique == NumUnique)
	{
		NumUnique = NumUnique + 1;
	}
}

float Compte::Crediter(float solde)
{   
	float Depot;
	solde = solde;

	cout <<"Votre solde est de "<< solde << endl;


	cout << "Entrer la sommme que vous voulez déposer : " << endl;
	cin >> Depot;

	solde = solde + Depot;

	cout << "Vous avez "<< solde << " euro sur votre compte ." << endl;

	cout <<"Votre solde est de "<< solde << endl;


	return solde;
	
}

float Compte::Debiter(float solde , float Retrait)
{
	
	float Retirer;

	cout <<"Votre solde est de "<< solde << endl;

	cout << "Entrer la sommme que vous voulez retirer : " << endl;
	cin >> Retirer;

	solde = solde - Retirer;
	Retrait = Retirer;

	cout << "Vous avez "<< solde << " euro sur votre compte ." << endl;

	cout << "Vous avez retirer " << Retrait << " euro ." << endl;

	return solde;
	
}

void Compte::Consulter(float solde , float Retrait)
{
	
	cout <<"Votre solde est de "<< solde << endl;
	cout <<"Votre dernier retrait est de "<< Retrait << endl;

	





}
	
void Compte::Commander()
{
	int valide ;
	int nbr;

	cout << "Voulez vous commander une chèque ? (Oui = 1 et Non = 0) " << endl;
	cin >> valide;
	if (valide == 1){
		cout << "Combien de feuille de chèquier voulez vous commander : " << endl;
		cin >> nbr;
		cout << "Votre commande à bien été pris en charge !" << endl;
		cout << "Vous avez recevoir un chèque de " << nbr << " feuilles chez vous." << endl;

	}
	else if (valide == 0){
		cout << "Vous avez quitté l'opération Commander un chèquier" << endl;
	}





}