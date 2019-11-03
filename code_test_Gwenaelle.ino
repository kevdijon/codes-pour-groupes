//*********************************************//
//*       Simulateur de portes logiques       *//
//*      Crée le 03/11/2019 Par kevDijon      *//
//*              Version 1_Beta               *//
//*********************************************//



const int SA = 12; // Led representant l'etat de l'entrée A
const int SB = 11; // Led representant l'etat de l'entrée B
const int S = 4;   // Led representant l'etat de la sortie de la porte logiue
const int EA = 3;  // entre 3 symbolisant l'entrée A de la porte logique
const int EB = 2;  // entre 3 symbolisant l'entrée B de la porte logique

bool EtatA; // type boolean --> pour stocker uniquement les etat 0 et 1 (false et true) il n'est pas utile de crér une variable de type int 
bool EtatB;
bool EtatS;

void setup() {
pinMode(SA, OUTPUT);// déclaration de la broche SA (12) en sortie
pinMode(SB, OUTPUT);// déclaration de la broche SB (11) en sortie
pinMode(S, OUTPUT); // déclaration de la broche S   (4) en sortie
pinMode(EA, INPUT); // déclaration de la broche EA  (3) en entrée
pinMode(EB, INPUT); // déclaration de la broche EB  (2) en entrée

}

void loop() {
EtatA = digitalRead(EA);// lecture entrée A
EtatB = digitalRead(EB);// lecture entrée B


//PORTE NON
/*digitalWrite(SA, EtatA);
digitalWrite(SB, 0); // ici la led B est eteinte car l'etat de sa sortie n'est pas importante dans la porte non
EtatS = !EtatA; // inversion de l'etat de l'entree (si A=1, S=0 et si A=0, S=1)
digitalWrite(S, EtatS);
*/

//PORTE ET
/*digitalWrite(SA, EtatA);
digitalWrite(SB, EtatB);
if (EtatA && EtatB){ // si l'entree A et B sont a un niveau haut --> sortie en niveau haut.
  EtatS = 1;
  digitalWrite(S, EtatS);
  }else{             // sinon sortie en niveau bas (cf tableau sur les portes logiques)
    EtatS = 0;
    digitalWrite(S, EtatS);
    }
*/ 
    
//PORTE NAND
/*digitalWrite(SA, EtatA);
digitalWrite(SB, EtatB);
if (EtatA && EtatB){ // si l'entree A et B sont a un niveau haut --> sortie en bas.
  EtatS = 0;
  digitalWrite(S, EtatS);
  }else{             // sinon sortie en niveau haut (cf tableau sur les portes logiques)
    EtatS = 1;
    digitalWrite(S, EtatS);
    }
*/

delay(1); // pas utile pour le code mais c'est une bonne pratique de penser a le mettre 
}
