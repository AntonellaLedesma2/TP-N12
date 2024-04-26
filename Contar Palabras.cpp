#include <bits/stdc++.h>
using namespace std;
void ContarPalabras(string frase);

int main() {
    string frase;
    cout<<"Ingrese una frase:"<<endl;
    getline(cin, frase); 
    ContarPalabras(frase); 

    return 0;
}


void ContarPalabras(string frase) {
    string aux; 
    int contador = 0;

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == ' '){ 
            if (aux.size() > 0){ 
                contador++;
                cout<<"P "<<contador<<": "<<aux<<endl;
                aux=' '; 
            }
        } 
        if(frase[i] != ' '){
            aux += frase[i]; 
        }
    }

    if (aux.size() > 0) {
        contador++;
        cout<<"P "<<contador<<": "<<aux<<endl;
    }
}
