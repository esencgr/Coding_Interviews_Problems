/* Google coding interview questions.Daily Coding Problem: Problem #181 [Hard]
Good morning! Here's your coding interview problem for today.
This problem was asked by Google.
Given a string, split it into as few strings as possible such that each string is a palindrome.
For example:
   - Given the input string racecarannakayak, return ["racecar", "anna", "kayak"].
   - Given the input string abc, return ["a", "b", "c"].
*/
#include <iostream>
#include <string.h>
#define SIZE 50
using namespace std;

bool palindrome( char[ ] );
bool same( char[ ] );

int main(){
    char str[ SIZE ], temp[ SIZE ];
    cout << "Enter a string : ";
    cin >> str;


    if (same( str ))
        cout << "include same  !" << endl;
    else
        cout << "not include same !" << endl;

    return 0;
}


bool palindrome( char s[] ){
    int l = strlen( s );
    for (int i = 0; l-1 > i; i++, l--)
        if (s[ i ] != s[ l-1 ])
            return 0;
    return 1;
}

bool same( char s[] ){
    int l = strlen( s );
    for (int i = 0; i < l-1; i++)
        for (int j = i+1; j < l; j++)
            if (s[ i ] == s[ j ])
                return 1;
    return 0;
}
