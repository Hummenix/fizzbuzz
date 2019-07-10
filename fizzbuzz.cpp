#include <iostream>

using namespace std;

int main()
{
    int start = 0;
    int endint = 100;
    while( start < endint ) {

        //fizz check
        if( start%3 == 0){
            //buzz
            if( start%5 == 0) {
                cout << "FizzBuzz" << endl;
            }
            else {
                cout << "Fizz" << endl;
            }
        }
        else {
            if( start%5 == 0) {
                cout << "Buzz" << endl;
            }
            else {
                cout << start << endl;
            }
        }
        start++;
    }

    cout << "Hello world!" << endl;
    return 0;
}
