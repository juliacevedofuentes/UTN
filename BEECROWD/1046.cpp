#include <iostream>

using namespace std;
 
int main() {
 
    int ti,tf,tempo;
    
    cin >> ti >> tf;
    
    if(ti<tf){
        tempo = tf - ti;
    }else if(ti>tf){
        tempo = 24 - ti + tf;
    }else if(ti == tf){
        tempo = 24;
    }
    
    cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
 
    return 0;
}
