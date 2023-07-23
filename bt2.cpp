#include<iostream>
using namespace std;
class phanso{
	public:
		int tuso;
		int mauso;
		void nhap(){
			cout<<"Nhap tu so: ";cin>>tuso;
			cout<<"Nhap mau so: ";cin>>mauso;
			while(mauso == 0){
				cout<<"khong hop le hay nhap lai: ";
				cin>>mauso;
			}
		}
		void xuat(){
			cout<<"ket qua: "<<tuso<<"/"<<mauso<<endl;
		}
};
int main(){
	phanso a;
	a.nhap();
	a.xuat();
	return 0;
}