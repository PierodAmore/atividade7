#include <iostream> 
using namespace std;
int main(){
	float fMassa, fAltura, fImc;
	string sMsg1 = "Resultado: ", sMsg2;

	system("cls");
	cout << "Calculo do IMC\n" << endl; 
	cout<<"Informe o peso (kg): ";
	cin >> fMassa;
	cout << "Informe a altura (m): "; 
	cin >> fAltura;

	fImc = fMassa / (fAltura * fAltura);

	if(fImc < 16)
		sMsg2= "Magreza severa";
	else if(fImc < 17)
		sMsg2 = "Magreza moderada";
	else if(fImc < 18.5)
		sMsg2 = "Magreza leve";
	else if(fImc < 25)
		sMsg2 = "Peso normal";
	else if(fImc < 30)
		sMsg2 = "Sobrepeso";
	else if(fImc < 35)
		sMsg2 = "Obesidade classe I";
	else if(fImc < 40)
		sMsg2 = "Obesidade classe II";
	else
		sMsg2 = "Obesidade classe III";

	cout << sMsg1 << sMsg2 << " - IMC = " << fImc;
	system("pause");
}
