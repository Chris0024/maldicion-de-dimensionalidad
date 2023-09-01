#include<iostream>
#include<ctime>
#include<cmath>
#include<fstream>
using namespace std;
const int d = 1000;
struct point {
	double x[d];
	point() {
		

		for (int i=0;i<d;i++) {
			x[i] =  0.1 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX) / 0.9);

			//cout << x[i] << endl;
		}
	}
	
	void print() {
		for (int i = 0; i < d; i++) {
			cout << x[i] << endl;
		}
	}
};
double dist_euclidiana(point a,point b) {
	double res = 0.0;
	double dif = 0.0;
	for (int i = 0; i < d; i++) {
		dif = a.x[i] - b.x[i];
		res += pow(dif, 2);
	}
	//return res;
	return sqrt(res);
}

int main() {
	
	srand(time(0));
	const int N = 100;
	point points[N];
	/*
	point A;
	point B;
	cout <<"distancia " << dist_euclidiana(A, B) << endl;
	*/
	ofstream archivo("distancias.txt");
	if(archivo.is_open()){
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				//cout <<i+1 << "   "<<j+1<<"  " << dist_euclidiana(points[i], points[j]) << endl;
				if(i!=j)

					archivo << dist_euclidiana(points[i], points[j]) << endl;
			}
		}
		archivo.close();
		cout << "guardados" << endl;
	}
	return 0;

}