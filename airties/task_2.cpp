// you can use includes, for example:
// #include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/*
QUESTION : Gıven a string for example "011100" representation of 28 number.
    This number
         when is odd, substract it 1;
         when is even, devide it 2;
         this process continues when the number is 0;
         how many steps in this process ınclude;
    For ex:
         011100 -> 28
         step 1 : 28(even) /= 2 -- 14
         step 2 : 14(even) /= 2 -- 7;
         step 3 : 7 (odd)  -= 1 -- 6;
         step 4 : 6 (even) /= 2 -- 3;
         step 5 : 3 (odd)  -= 1 -- 2;
         step 6 : 2 (even) /= 2 -- 1;
         step 7 : 1 (even) -= 1 -- 0;
              RESULT : 7 
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

int solution(char *S) {

    int size = strlen( S ), sum = 0 ;
    long int l = atol( S );

    for (int i = 0; i < size; i++) {
        sum += (l % 10) * (pow( 2, i ));
        l /= 10;
    }

    int count = 0;
    while ( sum != 0 ) {
        if ( sum % 2 == 0 )
           sum /= 2;
        else if ( sum % 2 != 0 )
           sum -= 1;
        ++count;
    }

    return count;
}

int main(){

    char *S = (char*) malloc (sizeof(char) * 8);
    cin >> S ;

    cout << solution( S );
    return 0;
}
