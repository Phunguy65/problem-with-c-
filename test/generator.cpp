#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int n = Random::integer(1,100000);
    cout<<n<<endl;
    for(int i = 0; i< n; i++){
        int x = Random::integer(1,100000);
        cout<<x<<endl;
    }
}