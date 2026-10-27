#include <iostream>
using namespace std;

int main(){
  cout << "Введите число:" ;
  cin >> n;

  if (n<0){
   cout <<"Ошибка" << endl;
   return 1;
  }

  long long result = 1;

  for(int i=1;i<=n;++i){
    result *=1;
    
  }

  cout<<"Factorial" << n << "="<< result <<endl;
  return 0;
}


