#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){

  string eL[] = {">","o","O","0","U","u","@","^","X","$","\bII","\b==","\b--","\b-=","~","\b{}","\b[]"}; //Left eye  | Kreisā acs
  string eR[] = {"<","o","O","0","U","u","@","^","X","$","\bII","\b==","\b--","\b=-","~","\b{}","\b[]"}; //Right eye | Labā acs

  string d[] = {"U","u","Y","o","."}; //Nose  |  Deguns
  string m[] = {"W ","^ ","w ","\bUU ","X ","V "}; //Mouth  | Mute

  srand(time(NULL));

  //Draw the cat  | Uzzīmēt kaķi
  //VVVVVVVVVV
  cout << "\n\t/\\-----/\\" << endl;
  int x = rand() % (sizeof(eL)/sizeof(*eL));
  cout << "\t| " << eL[x] << "   " << eR[x] << " |  _" << endl;
  cout << "\t>   " << d[rand() % (sizeof(d)/sizeof(*d))] <<"   < / /" << endl;
  cout << "\t|   " << m[rand() % (sizeof(m)/sizeof(*m))] <<"  |/ /" << endl;
  cout << "\t|       | /" << endl;
  cout << "\t|_o___o_|/\n" << endl;
}

