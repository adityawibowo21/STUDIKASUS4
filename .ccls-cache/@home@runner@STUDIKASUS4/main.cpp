#include <iostream>
using namespace std;
  
int fibonaci (int x){
  if (x == 0 || x == 1){
    return x;
  }else{
    return (fibonaci(x-1) + fibonaci (x-2));
  }

  int main(){
    int x, a,b=0;
    cout<<"Input batas bilangan fibonaci : ";
    cin>>x;
    cout<<"\n================================\n";
    cout<<"\tHasil Bilangan Fibonaci "
    cout<<"\n================================\n";
    for(a=1; a<=x; a++){
      cout<<fibonaci(b)<<" ";
      b++;
    }
    return 0;
  }
}