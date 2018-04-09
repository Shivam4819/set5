#include <iostream>
#include <string>
#include "StringOperation.h"
using namespace std;



void StringOperation::accept(){
    cout<<"enter the string";
    
    getline(cin,str);
}
void StringOperation::display(){
   cout<<"string is ->";
    cout<<str<<endl;
   
    cout<<endl;
}

void StringOperation::substring(){
    //condition is that b can be twice and c must be only 1 time in a string 
    int val;
    n=str.length();
    val=1+(n*2)+(n*((n*n)-1)/2);
    cout<<"total number of sub string are- "<<val;
}

void StringOperation::consecutivechar(){
    //maximum consecutive character in string
    int count1=1;
    
    j=1;
    n=str.length();
    for(i=0;i<n;i++){
        if(str[i]==str[i+1]){
            count1++;
            
        }
        else{
            res=str[i];
            count1=1;
      }  
    }
    cout<<res;
}

void StringOperation::samechar(){
    //string whose starting and ending variables are same
   n=str.length();
    count=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(str[i]==str[j]){
                count++;
            }
         }
    }
    cout<<"count==>"<<count;
   
}

