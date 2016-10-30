/**
 * Bubble Sort (método da bolha)
 *
 * @author Eder Soares <edersoares@me.com>
 * @param int n número de elementos do vetor a ser ordenado
 * @param int v ponteiro para o vetor de inteiros a ser ordenado
 * @return int ponteiro para o vetor ordenado
 */
int * bubbleSort(int n, int v[]) {

    int a, i, j, t;

    do {

        t = 0;
        i = 0;
        j = 1;

        while (j < n) {

            if (v[i] > v[j]) {
                a = v[i];
                v[i] = v[j];
                v[j] = a;
                t = 1;
            }

            i++;
            j++;
        }

    } while (t);

    return (int *) v;
}
