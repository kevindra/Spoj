#include <iostream>

using namespace std;

int main() {
  int t;
  cin>>t;
  
  while(t--)  {
    int n,a,d,ans=0;
    cin>>n>>a>>d;

    ans = n * ( 2*a + (n-1)*d ) / 2;
    cout<<ans<<endl;
  }

  return 0;
}
