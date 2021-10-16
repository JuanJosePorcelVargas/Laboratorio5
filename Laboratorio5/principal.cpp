#include<iostream>
#include<list>
#include<vector>
#include <ctime> 

using namespace std;

class Persona {

public:
	Persona(int ci, int altura, int peso) {
		this->ci = ci;
		this->Altura = altura;
		this->Peso = peso;
	};
	int ci;
	int Altura;
	int Peso;
};

int main() {

	vector<Persona*> vPersona; 
	list<Persona*> lPersona; 
	unsigned t0 = clock(); 

	for (long long  idx = 1; idx <=10000; idx++) { 

		Persona* p = new Persona(rand() % (100000000 - 1 + 1) + 1, rand() % (100 - 1 + 1) + 1, rand() % (100 - 1 + 1) + 1);
		vPersona.push_back(p);
		lPersona.push_back(p);
	}

	for (int i = 0; i < vPersona.size(); i++) {
		cout << "Persona " << i << " su dni es: " << vPersona[i]->ci << " altura es : " << vPersona[i]->Altura << " su peso es : " << vPersona[i]->Peso << endl;
		
	
	}
	unsigned t1 = clock();
	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "se tardo: " << time << " en llenar el vector" << endl;

	unsigned t2 = clock(); 

	for (int i = 0; i < lPersona.size(); i++) { 
		cout << "persona " << i << " su dni es: " << vPersona[i]->ci << " su altura es: " << vPersona[i]->Altura << " su peso es: "<< vPersona[i]->Peso<<endl;
	
	
	}
	unsigned t3 = clock();
	double time2 = (double(t3 - t2) / CLOCKS_PER_SEC);
	cout << "se tardo: " << time << " en llenar la lista" << endl;


	system("pause");
	return 0;


	for (auto ivp = vPersona.begin(); ivp != vPersona.end(); ++ivp)
	{
		
		
		cout << (*ivp);
	}

};