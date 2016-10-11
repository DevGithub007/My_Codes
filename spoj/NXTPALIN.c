#include<stdio.h>
#include<math.h>
int reverse(int n)
{
int rev = 0;
while(n)
{
rev = rev * 10 + n% 10;
n/=10;
}
return rev;
}
 
int digits_count(int n)
{
int digits = 1;
if(n)
digits = (int)log10(n) + 1;
return digits;
}
int main()
{
int t, n = 0, h, m, l, no_of_digits, temp, p, answer;
// freopen("in.txt", "r", stdin);
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
 
if(n != reverse(n))
{
h = m = l = 0;
no_of_digits = digits_count(n);
temp = no_of_digits/2;
p = (int)pow(10, temp);
if(no_of_digits%2)
{
if(temp)
{
l = n % p;
n /= p;
}
m = n % 10;
n/=10;
if(temp)
{
h = n % p;
}
 
if(reverse(h)<=l)
m++;
 
if(m == 10)
{
h++;
m = 0;
}
answer = h*p*10 + m*p + reverse(h);
}
else
{
l = n % p;
n/=p;
h = n % p;
if(reverse(h)<=l)
h++;
answer = h*p + reverse(h);
}
 
}
else
answer = n;
printf("%d\n",answer);
}
return 0;
}
