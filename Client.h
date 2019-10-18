#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//class Compte;
class Client
{
protected:
    int CIN;
    string Nom;
    string Prenom;
    int Num;
    int mdp;
    //string VerifNom;
    //int Verifmdp
    //Compte * compte;

public:
   
    void Creation();
    void Connexion();
    
};

#endif

