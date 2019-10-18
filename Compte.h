#ifndef COMPTE_H
#define COMPTE_H
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//class Client;
class Compte
{
private:
	float solde ;
    float Retrait;
	int NumUnique;
   
	//Client * client;


public:

	Compte();	

    void Menu();
    float Crediter(float solde);
    float Debiter(float solde , float Retrait);
    void Consulter(float solde , float Retrait);
    void Commander();
    void Afficher();
};

#endif