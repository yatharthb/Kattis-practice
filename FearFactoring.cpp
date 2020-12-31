#include<bits/stdc++.h> 
#include <iostream>
using namespace std; 
   
unsigned long long int divSum(unsigned long long int n) 
{ 
    if(n == 1) 
      return 1; 
  
  
    unsigned long long int result = 0; 
   
    
    for ( unsigned long long int i = 2; i <= sqrtl(n); i++) 
    { 
        
        if (n % i == 0) 
        { 
           
            if (i == (n / i)) 
                result += i; 
            else
                result += (i + n/i); 
        } 
    } 
   
  
    return (result + n + 1); 
} 
   
 
int main() 
{ 
    
    unsigned long long int n, m,i, sum;
     cin>>n>>m; 
    for (i = n; i <=m; i++){
       sum += divSum(i);
    }
   
    cout << sum;
    return 0; 
} 
close
