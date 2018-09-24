#include<iostream>
#include<conio.h>
using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
	
}alumno[3];

int main()
{
	for(int i=0;i<3;i++)
	{
		fflush(stdin);
		cout<<"nombre: ";
		cin.getline(alumno[i].nombre,20,'\n');
		cout<<"edad: ";
		cin>>alumno[i].edad;
		cout<<"promedio: ";
		cin>>alumno[i].promedio;
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		if(alumno[i].promedio>alumno[i+1].promedio)
		{
			cout<<"el alumno :"<<alumno[i].nombre<<" con un promedio de: "<<alumno[i].promedio<<" es el alumno con mayor promedio"<<endl;
			break;
		}else{
			cout<<"el alumno: "<<alumno[i+1].nombre<<" con un promedio de: "<<alumno[i].promedio<<" es el alumno con mayor promedio"<<endl;
			break;
		}
	}
	
	getch();
	return 0;
	
}
