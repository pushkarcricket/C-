 # include <iostream>
 using namespace std;

 int AnyBaseToDecimal( int num, int base){
    int ans=0;
    int power=1;
    while(num>0){
        int digit=num%base;
        ans= ans+digit*power;
        power=power*8;
        num=num/base;

    }

 }
 
 int main(){

    int rv=AnyBaseToDecimal(356,10);
    cout<<rv<<endl;
    return 0;
 }