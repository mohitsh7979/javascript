// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int i,k,j;
    int a=5;
      for (i = 1; i <= a; i++) {

            for (k = 1; k <= (a - i); k++) {


                cout<<" ";
            }

            for (j = 1; j <= i; j++) {

                cout<<"*";
            }

            cout<<"\n";

        }

    return 0;
}