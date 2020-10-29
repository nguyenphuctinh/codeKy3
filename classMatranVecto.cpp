#include<bits/stdc++.h>
using namespace std;
class matran;
class vecto
{
	private:
		int *a,n;
	public:
		void ghiTep()
		{
			ofstream file;
			file.open("document.txt", ios::out);
			file<<n<<" ";
			for(int i=0; i<n; i++)
				file<<a[i]<<" ";
		}
		void docTep()
		{
			ifstream file;
			file.open("document.txt", ios::in);
			file>>n;
			a=new int[n];
			for(int i=0; i<n; i++)
				file>>a[i];
		}
		void nhapbp()
		{
			cin>>n;
			a=new int[n];
			for(int i=0; i<n; i++)
				cin>>a[i];	
		}
		void xemmh()
		{
			for(int i=0; i<n; i++)
				cout<<a[i]<<" ";
		}
		friend int operator * (vecto, vecto);
		friend matran operator * (vecto, matran);
};
class matran
{
	private:
		int **b,m,n;
	public:
		void nhapbp()
		{
			cin>>n>>m;
			b=new int*[n];
			for(int i=0; i<n; i++)
			{
				b[i]=new int[m];
				for(int j=0; j<m; j++)
					cin>>b[i][j];	
			}	
		}	
		void xemmh()
		{
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++)
					cout<<b[i][j]<<" ";
				cout<<endl;
			}	
		}
		void ghiTep()
		{
			ofstream file;
			file.open("document.txt", ios::out);
			file<<n<<" "<<m<<" "<<endl;
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++)
					file<<b[i][j]<<" ";
				file<<endl;
			}	
		}
		void docTep()
		{
			ifstream file;
			file.open("document.txt", ios::in);
			file>>n>>m;
			b=new int*[n];
			for(int i=0; i<n; i++)
			{
				b[i]=new int[m];
				for(int j=0; j<m; j++)
					file>>b[i][j];
			}
		}
		friend matran operator * (vecto, matran);
};
int operator * (vecto x, vecto y)
{
	int  z=0;
	for(int i=0; i<x.n; i++)
		z+=x.a[i]*y.a[i];
	return z;
}
matran operator * (vecto x, matran y)
{
	matran z;
	z.b=new int *[y.n];
	for(int i=0; i<y.n; i++)
	{
		z.b[i]=new int[y.m];
		for(int j=0; j<y.m; j++)
			z.b[i][j]=y.b[i][j]*x.a[j];
	}
	z.n=y.n;
	z.m=y.m;
	return z;
}
int main()
{
	vecto vt1,vt2,vt3;
	vt1.nhapbp();
//	vt2.nhapbp();
//	cout<<vt1*vt2;
//	vt.ghiTep();
//	vt.docTep();	
//	vt.xemmh();
	matran mt1,mt2;
	mt1.nhapbp();
	mt2=vt1*mt1;
//	mt.ghiTep();
//	mt.docTep();
	mt2.xemmh();
}
