#include "../include/turtlecoin-crypo.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string privateView;
    string privateSpend;
    
    cout << ( "Enter Priv ViewKey :");
    getline (cin, privateView);
    cout << ( "Enter Priv SpendKey :");
    getline (cin, privateVeiw);
    
    cout << "Your Priv ViewKey is : " << privateView << ".\n";
    cout << "Your Priv SpendKey is : " << privateSpend << ".\n";
    
    return 0;
}
