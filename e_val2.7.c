#include<stdio.h>
#define ll long long

ll result[1000] = {0};
ll fact(int n) {
   if (n >= 0) {
      result[0] = 1;
      for (int i = 1; i <= n; ++i) {
         result[i] = i * result[i - 1];
      }
      return result[n];
   }
}
int main()
{
    double e = 1;
    for(int i = 1 ; i<26 ; i++)
    {
        int t = fact(i);
        e += 1.0/((double)t);
        printf("S_%d = %lf \n",i,e)l;
    }   
    return 0;
}
