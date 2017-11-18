#include <stdio.h>
#include <string.h>

void selection_sort (int vetor[],int max) { //Função para ordenar o vetor
  int i, j, min, aux, k;

  for (i = 0; i < (max - 1); i++) {
    min = i;
    for (j = i+1; j < max; j++) {
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
k=max-1;
  while(k!=0){
    printf("%d\n", vetor[k]);
    k--;
  }
}

int nao_primo(int n){ //Função para identificar primos

int i,R=0,c=0, primo;

    for(i=1; i<=n; i++){
        R=n%i;
        if(R==0)
            c++;
        else
            R=0;
    }
    if(c==2){
        primo = 1;
        return (primo);// Número Primo
    }
    else{
        primo = 0;
        return (primo);// Não Primo
    }
}

int main(){

int w=1, n, vet[20000], j, i=1, primo;

    while(w){
        scanf("%d", &n);
        if(n==-1)
            w=0;
        else{
            if(nao_primo(n) == 0){
                vet[i]=n;
                i++;
            }
        }
    }
    selection_sort(vet, i);
return 0;
}







