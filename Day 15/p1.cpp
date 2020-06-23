/*

Lee was cleaning his house for the party when he found a messy string under the carpets. Now he'd like to make it clean accurately and in a stylish way...

The string s he found is a binary string of length n (i. e. string consists only of 0-s and 1-s).

In one move he can choose two consecutive characters si and si+1, and if si is 1 and si+1 is 0, he can erase exactly one of them (he can choose which one to erase but he can't erase both characters simultaneously). The string shrinks after erasing.

Lee can make an arbitrary number of moves (possibly zero) and he'd like to make the string s as clean as possible. He thinks for two different strings x and y, the shorter string is cleaner, and if they are the same length, then the lexicographically smaller string is cleaner.

Now you should answer t test cases: for the i-th test case, print the cleanest possible string that Lee can get by doing some number of moves.

Small reminder: if we have two strings x and y of the same length then x is lexicographically smaller than y if there is a position i such that x1=y1, x2=y2,..., xi−1=yi−1 and xi<yi.

Input
The first line contains the integer t (1≤t≤104) — the number of test cases.

Next 2t lines contain test cases — one per two lines.

The first line of each test case contains the integer n (1≤n≤105) — the length of the string s.

The second line contains the binary string s. The string s is a string of length n which consists only of zeroes and ones.

It's guaranteed that sum of n over test cases doesn't exceed 105.

Output
Print t answers — one per test case.

The answer to the i-th test case is the cleanest string Lee can get after doing some number of moves (possibly zero).

Example
input
5
10
0001111111
4
0101
8
11001101
10
1110000000
1
1
output
0001111111
001
01
0
1

*/


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int i=0,j=n;
        
        
        while(i<n && s[i]=='0')
        {
            i++;
        }
        while(j>0 && s[j-1]=='1')
        {
            j--;
        }
        
        
        if(i==j)
            cout<<s<<endl;
        else
            cout<<s.substr(0,i)+'0'+s.substr(j)<<endl;
    }

    return 0;
}
