int main(){
  int t; cin>>t;
  while (t--)
  {
     string og;
     string copy;
     cin>>og;
     cin>>copy;
     int j=0;
     int l=0;
     int r=0;
     int lc=0;
     int rc=0;
     char a = og[0];
     for(int i=0;i<copy.size();i++){
      if(copy[i]==og[j]){        
        j++;
      }
     }
     int k=0;
     int f=0;
     for(int i=0;i<copy.size();i++){
     if(copy[i]==a){
      a=og[i];
      k++;
     }
     }
    
  }
  
} 