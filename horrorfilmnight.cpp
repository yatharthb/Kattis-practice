#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    long emmaCount,marcoCount;
    
    cin >> emmaCount ;
    if(emmaCount ==0){
        cin>> marcoCount;
        if(marcoCount>0)
          {
              cout <<  1 << endl;
              return 0;
          }
         else
          {
              cout <<  0 << endl;
              return 0;
          }
    }
    
    
    
    long emmaList[emmaCount];
    
    for (long i=0;i<emmaCount;i++){
        cin >>emmaList[i];
    }
    
long n = sizeof(emmaList)/sizeof(emmaList[0]); 
  
   sort(emmaList, emmaList+n); 

    cin >>marcoCount  ;
    if(marcoCount==0)
          {
              cout <<  1 << endl;
              return 0;
          }
    long marcoList[marcoCount];
    for (long i=0;i<marcoCount;i++){
        cin >> marcoList[i];
    }
   n = sizeof(marcoList)/sizeof(marcoList[0]); 
  
    sort(marcoList, marcoList+n); 
    long movieCount=0;
    bool IsMovie = true;
    long i,j,prev=0;
    j=0;
    i=0;
   while(IsMovie)
   {

       if(emmaList[i]  == marcoList[j] )
            {
                movieCount = movieCount+1;
              i=i+1;
              j=j+1;
              prev=0;
            
                if(i==emmaCount )
                   {
                        if ((j<marcoCount) )
                        {
                             movieCount = movieCount+1;
                             
                        }
                        IsMovie=false;
                   }
                 if(j==marcoCount )
                   {
                        if ((i<emmaCount))
                        {
                             movieCount = movieCount+1;
                            
                        }
                         IsMovie=false;
                   }
                   
               
                
            }
        else if(emmaList[i]< marcoList[j] )
            {
              if(prev!=1)
              {
               prev=1;
               movieCount = movieCount+1;
              }
              while(emmaList[i]< marcoList[j])
              {
               i=i+1;
              
                 if(i==emmaCount )
               {
                    if ((j<marcoCount) && prev!=2)
                    {
                         movieCount = movieCount+1;
                         
                    }
                    IsMovie=false;
               }
              }
            }
            
             else  
            {
                if(prev!=2)
                {
                    prev=2;
                    movieCount = movieCount+1;
                }
                while( marcoList[j]<emmaList[i])
                {
               j=j+1;
               
                 if(j==marcoCount )
               {
                    if ((i<emmaCount) && prev!=1)
                    {
                         movieCount = movieCount+1;
                        
                    }
                     IsMovie=false;
               }
                }
            }
              

                
    }
           
    
  cout <<  movieCount << endl;
   return 0;
}