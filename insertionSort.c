/**
 * Insertion Sort (ordenação por inserção)
 *
 * O algoritmo divide, de forma lógica, o vetor em duas partes:
 *     - vetor ordenado
 *     - vetor desordenado
 * Inicialmente o vetor ordenado é composto por v[0] e o vetor desordenado é
 * composto de v[1] até v[n - 1].
 * Todos os elementos do vetor desordenado serão percorridos um a um e inseridos
 * no vetor ordenado na sua posição correspondente.
 *
 * @author Eder Soares <edersoares@me.com>
 * @param int n número de elementos do vetor a ser ordenado
 * @param int v ponteiro para o vetor de inteiros a ser ordenado
 * @return int ponteiro para o vetor ordenado
 */
int * insertionSort(int n, int v[]) {

    int a, c, i, j;

    // Percorre todo o vetor desordenado v[1] até v[n - 1]
    for (c = 1; c < n; c++) {

        // i será o primeiro elemento do vetor desordenado
        i = c;

        // j será o último elemento do vetor ordenado
        j = c - 1;

        // Enquanto não chegar ao início do vetor ordenado e o valor do elemento
        // da direita (elemento do vetor desordenado) for menor que o da valor
        // do elemento da esquerda (elemento do vetor ordenado) irá efetuar a
        // troca das posições no vetor
        while (j >= 0 && v[i] < v[j]) {

            // Faz a troca de posição
            a = v[j];
            v[j] = v[i];
            v[i] = a;

            // Percore o vetor ordenado de traz pra frente
            i--;
            j--;
        }
    }

    return (int *) v;
}
