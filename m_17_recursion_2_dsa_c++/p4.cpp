/*---------------------Predict the output------------------------


*/

int fun(n){
    if(n<=1) return 1;
    if(n%2==0) return fun(n/2);
   else  return fun(n/2) +fun(n/2+1);
}