#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int choice;

    cout << "if you want bread (1 = yes) (0 = no) " << endl;
    cin >> choice;

    if(choice){
        cout << "Have a piece of bread" << endl;
    }
    else{
        cout << "No bread" << endl;
    }

    return 0;
}

