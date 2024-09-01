#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    float n1,n2,n3,n4;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    float media = (n1*2 + n2 * 3 + n3*4 + n4)/10.0;
    
    cout << fixed << setprecision(1) << "Media: " << media << endl;
 
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(media < 5.0 ){
        cout << "Aluno reprovado." << endl;
    }else{
        cout << "Aluno em exame." << endl;
        
        float notaex,media2;
        
        cin >> notaex;
        
        cout << "Nota do exame: " << notaex << endl;
        
        
        media2 = (media + notaex)/2;
        if(media2 >= 5.0){
            cout << "Aluno aprovado." << endl;
        }else{
            cout << "Aluno reprovado." << endl;
        }
        cout << fixed << setprecision(1) << "Media final: " << media2 << endl;
    }
    
    return 0;
}
