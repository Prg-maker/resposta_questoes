#include <bits/stdc++.h>
#include <time.h>
#include <unistd.h>

using namespace std;

// time = 0.000127
int f1(){
  int n = 5, sum = 0;
  
  for(int i = 0; i < n; i++){
    int num;
    cin >> num;

    sum+= num;
    
  }
  return sum;

}
// time = 0.000121 seconds
// explicação da f2: 

int f2(){
  int n = 5, sum = 0;

  for(int i = 0; i < n; i++){
    int num;
    cin >>num;
    sum = max(sum , num);
  }
  int r = (sum*(sum+1))/2;

  return r;

}

int main(){

  double time_spent = 0.0;

  clock_t begin = clock();
  cout << f1()<< endl;
  //faz algumas coisas aqui
  sleep(3);

  clock_t end = clock();
 
    // calcula o tempo decorrido encontrando a diferença (end - begin) e
    // dividindo a diferença por CLOCKS_PER_SEC para converter em segundos
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

  printf("The elapsed time is %f seconds", time_spent);
}