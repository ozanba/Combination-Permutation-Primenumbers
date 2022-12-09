/* Write a c program which gets 2 integer from  user. Note integers must be greater than 0. also n1 must greater than n2 Create a function for factoriels.
 create another 2 function named caombination and permutation. Cretate  primeNumber function which prints prime numbers between combination and permutation 
 and its also print how many there areprime number between Permutation and combination. DO NOT use math libary */
#include <stdio.h>
int factorial(int);
int combination(int, int, int );
int permutation(int, int );
void primeNumber(int, int);
int main(){
    int n1, n2;
    int f1, f2, f3;
    int p, c;
    // getting inputs 
    do
    {
        printf("Enter 2 integer: ");
        scanf("%d%d",&n1,&n2);
    } while (n1<0|| n2<0|| n1<n2);
    // calling factorial functions
    f1 = factorial(n1);
    f2 = factorial(n2);
    f3= factorial(n1-n2);
    // calling combination
    c = combination(f1, f2, f3);

    //calling permuation
    p = permutation(f1, f3);

    //print combination
    printf("C(%d,%d) = %d\n",n1,n2,c);

    //print permuation
    printf("P(%d,%d) = %d\n",n1,n2,p);

    //calling primeNumber
    primeNumber(p, c);

    
    return 0;
}
int factorial(int num){
    int res= 1, i;
    for(i=1; i<=num; i++)
        res= res* i;
    return res;
}
int combination(int n, int r, int nr){
    // combination formaula is = n!/(n-r)!* r!
    int res = n/(nr*r);
    return res;

}
int permutation(int n, int nr){
    // permutation formaula is = n!/(n-r)!
    int res = n/(nr);
    return res;

}
void primeNumber(int big, int small){
    int i, j,s, count= 0;
    printf("Prime numbers: ");
   for(i=small; i<=big; i++){
        s=0;
      for (j=2; j<i; j++)
            if (i% j == 0)
                s=1;
        if (s==0){
            printf("%d ",i);
            count++;}
   }
    printf("\nThere is %d prime number between %d and %d\n",count,big,small);

}
