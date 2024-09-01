#include <iostream>

using namespace std;

int main()
{
    int ti,mi,tf,mf,p;
    int dif;
    
    cin >> ti >> mi >> tf >> mf;
    
    int x = ti*60 + mi;
    int y = tf*60 + mf;

    if(x>y){
        p=(1440-x)+y;
    }else if (y>x){
        p=y-x;
    }else{
        p=1440;
    }
    
    cout << "O JOGO DUROU " << p/60 << " HORA(S) E " << p%60 << " MINUTO(S)" << endl;
    
    return 0;
}
