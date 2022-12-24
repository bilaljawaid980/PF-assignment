#include<iostream>

using namespace std;
main() {
        int start, end, sum = 0, product = 1;
        cout << "ENTER THE STARTING NUMBER" << endl;
        cin >> start;
        cout << endl << "ENTER THE ENDING NUMBER" << endl;
        cin >> end;
        for (int i = start; i <= end; i++) {
                if (i % 2 == 0) {
                	 cout << "EVEN NUMBER ARE :" << i << endl;
                	sum = sum + i;
                       

                }
                

        }
        cout << endl << "SUM OF EVEN NUMBERS ARE :" << sum << endl;

        for (int j = start; j <= end; j++) {
                if (j % 2 != 0) {
                        cout << endl << "ODD NUMBERS ARE :" << j << endl;
                        product = product * j;
                }
                
        }
        cout << endl << "PRODUCT OF ODD NUMBERS ARE :" << product << endl;
      
}
