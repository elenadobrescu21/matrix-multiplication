#include<iostream>
#include<fstream>
using namespace std;
ifstream f("mat.in");
ofstream g("mat.out");
int main (){
	//col1= lin2
	// rez [lin1][col2]
	int lin1,col1,lin2,col2,i,j,l,mat1[10][10],mat2[10][10],matrez[10][10],s;
	f>>lin1>>col1>>lin2>>col2;
	if (col1!=lin2){
		cout<<"EROARE\n";
		return 0;
	}
	for (i=0;i<lin1;i++){
		for (j=0;j<col1;j++)
			f>>mat1[i][j];
	}

	for (i=0;i<lin2;i++){
		for (j=0;j<col2;j++)
			f>>mat2[i][j];
	}

	for (i=0;i<lin1;i++){
		for (j=0;j<col2;j++){
			s=0;
			for (l=0;l<col1;l++)
				s+=mat1[i][l]*mat2[l][j];
			matrez[i][j]=s;
		}
	}
	for (i=0;i<lin1;i++){
		for (j=0;j<col2;j++)
			g<<matrez[i][j]<<' ';
		g<<'\n';
	}
	g<<"mergee\n";
	return 0;
}
