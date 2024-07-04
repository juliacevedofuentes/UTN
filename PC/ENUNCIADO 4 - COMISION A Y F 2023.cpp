#include <iostream>
using namespace std;

bool esVocal(char);
bool sonConsecutivas(char, char, char, char);
int cantidadVocales(char, char, char, char);


int main(int argc, char *argv[]) {
    char x, y, z, w;
    
    cin >> x >> y >> z >> w;
    
    
    if (x == 'a' and y == 'e' and z == 'i' and w == 'o') cout << "CUATRO VOCALES ORDENADAS" << endl;
    else {
        if (sonConsecutivas(x, y, z, w)) cout << "Las cuatro letras son consecutivas" << endl;
        
        int vocales = cantidadVocales(x, y, z, w);
        if (vocales >= 3) cout << "Hay al menos 3 letras que son vocales" << endl;
        cout << "Hay " << vocales << " vocales y " << 4 - vocales << " consonantes" << endl;
    }
    return 0;
}

bool esVocal(char letra) {
    return letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u';
}

bool sonConsecutivas(char letra1, char letra2, char letra3, char letra4) {
    return letra1 == letra2 - 1 and letra2 == letra3 - 1 and letra3 == letra4 - 1;
}

int cantidadVocales(char letra1, char letra2, char letra3, char letra4) {
    int cantidadVocales = 0;
    if (esVocal(letra1)) cantidadVocales++;
    if (esVocal(letra2)) cantidadVocales++;
    if (esVocal(letra3)) cantidadVocales++;
    if (esVocal(letra4)) cantidadVocales++;
    return cantidadVocales;
}
