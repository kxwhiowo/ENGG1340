#include <iostream>
using namespace std;
int main(){
   int n = 1, i = 1, h, j, sum1=0;
   while (i<=20){
    cout<<n<<endl;
    n+=1;
    i+=1;
   }
   for ( h = 10; h >=0; h--)
   {
    cout<<h<<endl;
   }
   for ( j=1; j<=20; j++)
   {
    /* code */
    if (j % 2 ==1)
    sum1 += j;
   }
   cout<<sum1<<endl;
   return 0;

}