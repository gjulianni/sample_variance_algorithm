#include <stdio.h>
#include <math.h>

int main() {

    int dataNums[] = {5, 7, 3, 7, 10};
    int length = sizeof(dataNums) / sizeof(dataNums[0]); // Pegar o tamanho de elementos no array, neste caso 5

    float result = 0; // Variável para acumular o resultado da soma de todos os elementos do array

    for(int i = 0; i < length; i++) { // Somando todos elementos da parte de cima da divisão
        result = result + dataNums[i];

    }

    float finalResult = result / length; // Dividindo o resultado da soma pelo tamanho de elementos no array
    float numsSubtracted[length]; // Array com um tamanho fixo length para armazenar a substração da média de cada valor do array inicial pelo resultado da divisão acima

    double numPowed; // Variável para ser aplicada a propriedade pow para elevar todos elementos da operação anterior ao quadrado
    float numsPowedArray[length]; // Array com um tamanho fixo length para armazenar os valores elevados ao quadrado

    for(int i = 0; i < length; i++) { // Subtraindo os valores individualmente pelo resultado da divisão result / length e guardando no array numsSubtracted

    float media = dataNums[i] - finalResult;
    numsSubtracted[i] = media;

    }

    for(int i = 0; i < length; i++) { // For para elevar cada elemento guardado no array numsSubstracted ao quadrado, e guarda cada elemento no array numsPowedArray

    numPowed = pow(numsSubtracted[i], 2.0);
    numsPowedArray[i] = numPowed;
    }

    float totalSum = 0; // Variável para acumular o resultado da soma de todos elementos do array numsSubtracted elevados ao quadrado

    for(int i = 0; i < length; i++) {
    totalSum = totalSum + numsPowedArray[i];
    }

    double operation = totalSum / (length - 1); // Operação para dividir a soma total dos elementos elevados ao quadrado pelo tamanho do array original - 1
    double sqrtOperation = sqrt(operation); // Operação para tirar a raíz quadrada da divisão dos elementos pelo tamanho - 1

    printf("%lf\n", sqrtOperation);
    return 0;
}
