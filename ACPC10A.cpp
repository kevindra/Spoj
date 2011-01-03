#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  
  while( cin>>a && cin>>b && cin>>c && (a||b||c) ) {
    int ap,gp;
    if(a==0) {
      ap = b-a;
      cout<<"AP "<<c+ap<<endl;
      continue;
    }
    
    if( b-a == c-b ) {
      cout<<"AP "<<c+b-a<<endl;
    }
    else  {
      cout<<"GP "<<c*b/a<<endl;
    }
  }
  return 0;
}
