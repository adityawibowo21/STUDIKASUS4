#include <iostream>
using namespace std;

class Operator{
  friend ostream& operator <<(ostream&, Operator&);
  friend istream& operator << (istream&, Operator&);

public:
  int iteratif_fibonaci(int x);
  int rekursif_fibonaci(int x);

private :
  int fibonaciA, fibonaciB, fibonaci, x;
};

int Operator :: iteratif_fibonaci(int x){
  fibonaciA = 1;
  fibonaciB = 1;
  cout<< fibonaciA<<" "<<fibonaciB<<" ";
    for (int i=3; i<=x; i++){
      fibonaci = fibonaciA + fibonaciB;
      fibonaciA = fibonaciB;
      fibonaciB = fibonaci;
      cout << fibonaci << " ";
    }
    return fibonaci;
};

int Operator:: rekursif_fibonaci(int x){
  if(x == 0){
    return 0;
  } if (x==1){
    return 1;
  }else{
    return rekursif_fibonaci(x-1)+rekursif_fibonaci(x-2);
  }
  cout << rekursif_fibonaci(x) << " ";
};

  int main(){
    int a,b;
    Operator run;
    cout<<"\n=====================================\n";
    cout<<"\t\tBilangan Fibonaci ";
    cout<<"\n=====================================\n";
    cout<<"\nMasukkan batas bilangan fibonaci : ";
    cin>>b;
    cout<<"Iteratif : "<<run.iteratif_fibonaci(b)<<" "<<endl;
    cout<<"Rekursif : ";
    for(a=1; a<=b; a++){
      cout<<run.rekursif_fibonaci(a)<<" ";
    }
    cout<<"\n=====================================\n";
    return 0; 
  }
