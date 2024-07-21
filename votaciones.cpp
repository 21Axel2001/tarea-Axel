#include<iostream>
using namespace std;
int main()
{
	int candidatos[13]={0};
	int voto;
	for(int i=1;i<20;i++)
	{
		cout<<"Numero de candidato\t?" ; cin>>voto;
		if(voto>=1 && voto <=12)
		{
		candidatos[voto]+=1;
		}
	}
	
	return 0;
}

