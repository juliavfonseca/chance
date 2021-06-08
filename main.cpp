#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void MaxMin (int aux[] , int *max, int *min, int len )
{
  *min = * max = aux[0];
  int i;
  for (int i = 0; i < len; i++) {
    if (aux[i] > *max){
      *max = aux[i];
      }else if (aux[i] < *min) {
        *min = aux[i];
        }
    }
}

int main(){
  int quantidade;
  int num[quantidade];
  int max , min ;

  cout << "Digite a quantidade de numeros que irá digitar : " << endl;
  cin >> quantidade;
  for(int i=0 ; i < quantidade ; i++){
    cout << endl << "Digite o numero : " << endl;
    cin >> num[i];
  }
  MaxMin( num , &max , &min , quantidade );
  cout << "------------------------------- "<<endl;
  cout << "Voce digitou " << quantidade << " numeros : " << endl;
  for (int i = 0; i < quantidade; i++){
    cout  << num [i] << endl;
    }
    cout <<endl <<"Max: " << max << endl;
    cout <<"Min: " << min << endl;
    cout <<"Endereco Max : " << &max << endl;
    cout <<"Endereco Min : " << &min << endl;

    return 0;

}