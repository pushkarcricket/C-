#include <iostream>

using namespace std;

int decimalToanyBAse (int num,  int base){
int ans =0;
int power=1;
while(num>0){
    int digit=num% base;
    ans= ans+digit*power;
    power=power*10;
    num=num/base;
}

return ans;
}

int main()
{
    int rv=decimalToanyBAse(67,2);
    cout<<rv<<endl;

    return 0;
}