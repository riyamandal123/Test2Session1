#include<stdio.h>
typedef struct fraction
{
int num,den;
}frac;//euclits algorithm
int input_n(){
    int n;
    printf("Enter the number of numbers to be added\n");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a,int b){
    int gcd,i;
    for( i=1;i<=b;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }return gcd;
}
frac input_fraction(){
    frac c;
    printf("Enter the numerator and denominator of the fraction\n");
    scanf("%d %d",&c.num,&c.den);
    return c;
}
void input_n_fractions(int n,frac f[n]){
    for(int i=0;i<n;i++){
        f[i]=input_fraction();
    }
}
frac add_fraction(frac f1,frac f2){
    frac f3;
    f3.num=(f1.num*f2.den)+(f1.den*f2.num);
    f3.den=f1.den*f2.den;
    return f3;
}
frac add_n_fractions(int n,frac f[n]){
    frac temp1={0};
    temp1.num=0;
    temp1.den=1;
    for(int i=0;i<n;i++){
        temp1=add_fraction(temp1,f[i]);
    }
    return temp1;
}
void output(int n,frac f[n],frac sum){
    printf("The sum of ");
    for(int i=0;i<n-1;i++){
        printf("%d/%d + ",f[i].num,f[i].den);
    }
    printf(" %d/%d",f[n-1].num,f[n-1].den);
    printf(" is %d/%d",sum.num,sum.den);
}
int main()
{
    int n,gcd;
    frac  sum,result;
    n=input_n();
    frac f[n];
    input_n_fractions(n,f);
    result=add_n_fractions(n,f);
    gcd=find_gcd(result.num,result.den);
    sum.num=result.num/gcd;
    sum.den=result.den/gcd;
    output(n,f,sum);
    return 0;
  }