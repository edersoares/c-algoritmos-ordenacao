/**
 * Selection Sort (método de seleção)
 *
 * @author Eder Soares <edersoares@me.com>
 * @param int n número de elementos do vetor a ser ordenado
 * @param int v ponteiro para o vetor de inteiros a ser ordenado
 * @return int ponteiro para o vetor ordenado
 */
int * selectionSort(int n, int v[]) {

    int a, i, j, t;

    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (v[i] > v[j]) {
                a = v[i];
                v[i] = v[j];
                v[j] = a;
            }
        }
    }

    return (int *) v;
}
