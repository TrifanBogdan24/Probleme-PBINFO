// #2700 - RadixSort
// solution under construction
#include <iostream> //  cin
#include <fstream>
#include <queue> //  queue
#include <cmath> // log10

using namespace std;

ifstream f("radixsort.in");
ofstream g("radixsort.out");


int countDigits(unsigned int n) {
	return (int) (1 + log10 ((double) n));
}

int getMaxValue(const  vector<int> &v) {
	int result = v[0];
 
	for (int i = 1; i < v.size(); ++i) {
		result =  max( result, v[i] );
	}
 
	return result;
}

void radixSort( vector<int> &v) {
	// la pasul k Q[i] ca contine toate numerele care au cifra 
	// de pe pozita k egala cu i
	 queue<int> Q[10];
 
	// obtine numarul de pasi (este dat de numarul cu cele mai multe cifre)
	int steps = countDigits ( getMaxValue(v) );
 
	// la fiecare pas ne va interesa un anumit rang (cifra) care
	// corespunde unei puteri a lui 10 
	int power = 1;
 
	for (int k = 1; k <= steps; ++k) {
		// fiecare element din v va fi distribuit intr-o coada cu un anumit indice i
		// corespunzator cifrei de pe pozitia k
		for ( vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
			int i = (*it / power) % 10; // preproceseaza indexul i
			Q[i].push(*it); // adauga elementul in coada cu numarul i
		} 
 
		// pregateste pasul urmator
		power *= 10; // trec la urmatorul rang
 
		// renunt la vechea ordine din v
		// reconstruiesc v cu ordinea curenta din cozi
		int n; // numarul curent de elemente din v 
		n = 0; // simulez golirea vectorului
		for (int i = 0; i <= 9; ++i) {
			// cat timp coada curent are elemente, muta-le in v
			while (!Q[i].empty()) {
				v[n++] = Q[i].front(); // salveaza elemenul in v
				Q[i].pop(); // sterge elementul din Q[i]
			}
		}
	}
}

int main() {
	int n; // numarul de elemente din vector
	int x; // variabila temporara
	vector<int> v; // vectorul care va fi sortat
 
	// citire
	f >> n;
	for (int i = 0; i < n; ++i) {
		// citeste inca un element
		f >> x;
 
		// adauga-l in vector
		v.push_back(x);
	}
 
	// sorteaza 
	radixSort(v);
 
	// afiseaza vectorul sortat
	for (int i = 0; i < n; ++i) {
		g << v[i] << ' ';
	}
	g << "\n";
 
    f.close();
    g.close();
	return 0;
}

