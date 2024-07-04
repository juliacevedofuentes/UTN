#include <iostream>
 
using namespace std;

#define a 2001

int main() {

   int vec[a]={};
   int n;
    cin >> n;
    
    for(int i = 0; i<n; i++){
        int ing;
        cin >> ing;
        vec[ing]++;
    }
    for(int j = 0; j < a; j++){
        if(vec[j] != 0)
        cout << j << " aparece " << vec[j] << " vez(es)" << endl;
    }
 
    return 0;
}
