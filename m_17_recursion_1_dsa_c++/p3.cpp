#include <bits/stdc++.h>
bool isPowerOfTwo(int n) {
if(n == 1) {
return true;
}
if(n % 2 == 0) {
return isPowerOfTwo(n / 2);
}
return false;
}
int main() {
int n;
cin >> n;
if(isPowerOfTwo(n)) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}

/*-------------------------QUESTION-----------------------
leetcode:231
 Given a positive integer, return true if it is a power of 2

*/