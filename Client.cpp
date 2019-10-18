#include <iostream>
#include "Client.h"
#include <string>
#include "/usr/include/mysql/mysql.h" // pour utiliser mysql.h

using namespace std;


void Client::Creation(/*string Nom , int mdp*/)
{
	cout << "-------------------------------------------------------------------" << endl;
	cout << "                          Inscription                              " << endl;
	cout << "------------------------------------------------------------------- \n" << endl;

	cout<<"Entrer votre nom : " << endl;
	cin >> Nom;
	//Nom = Nom;

	cout<<"Entrer votre prénom : " << endl;
	cin >> Prenom;

	cout <<"Entrer le numéro de votre carte d'identité :"<< endl;
	cin >> CIN;

	cout << "Entrer votre numéro de téléphone : "<< endl;
	cin >> Num;

	cout << "Entrer votre mot de passe(uniquement en chiffre) : "<< endl;
	cin >> mdp;
	//mdp = mdp;
	
}

void Client::Connexion(/*string Nom , int mdp*/)
{
	/*string VerifNom;
	int Verifmdp;

	VerifNom = this ->Nom;
	Verifmdp = this -> mdp;

	while ()
*/

	cout << "-----------------------------------------------------------------" << endl;
	cout << "                          Connexion                              " << endl;
	cout << "----------------------------------------------------------------- \n" << endl;
	
	cout << "Nom : " << endl;
	cin >> Nom;
	
	cout << "Mot de passe : " <<endl;
	cin >> mdp;


	cout << "Vous êtes connecté à votre compte LCL ! " <<endl;


}

