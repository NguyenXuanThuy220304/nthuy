#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class giaovien{
	private:
	    char hoten[30];
	    int tuoi;
	    char bangcap[15], chuyenNganh[30];
	    float bacluong;
	public:

	void nhap(){
		cout<<"nhap ho ten: ";
		fflush(stdin);
		cin.getline(hoten,30);
		cout<<"nhap tuoi: ";
		cin>>this->tuoi;
		cout<<"nhap bang cap: ";
		cin>>this->bangcap;
		cout<<"nhap chuyen nganh: ";
		cin>>this->chuyenNganh;
		cout<<"nhap bac luong: ";
		cin>>this->bacluong;
	}
	void xuat(){
		cout<<"ho va ten: "<<hoten<<endl
		<<"tuoi: "<<tuoi<<endl
		<<"bang cap: "<<bangcap<<endl
		<<"chuyen nganh: "<<this->chuyenNganh<<endl
		<<"bac luong: "<<this->bacluong<<endl
		<<"luong co ban: "<<this->luongcoban()<<endl;
	}
		float luongcoban(){
		return this->bacluong * 610;
	}
	string setchuyenNganh(){
		return chuyenNganh;
	}
};	
   void danhsachGVluongnhohon2000(giaovien a[],int n){
		cout<<"\n danh sach giao vien co luong nho hon 2000"<<endl;
		for(int i=0;i<n;i++)
		{
			if(a[i].luongcoban() < 2000)
			{
				cout<<"\n giao vien thu: "<<i+1<<endl;
				a[i].xuat();
			}
		}
	}
	void nhapdanhsach(giaovien a[], int &n){
		cout<<"\n nhap danh sach"<<n<<"GV\n";
		for(int i=0;i<n;i++)
		{
			cout<<"[+]nhap thong tin nguoi thu: "<<i+1<<endl;
			a[i].nhap();
		}
	}
	void xuatdanhsach(giaovien a[], int &n){
		cout<<"\n xuat danh sach"<<n<<"GV\n";
		for(int i=0;i<n;i++)
		{
			cout<<"[+]xuat thong tin nguoi thu: "<<i+1<<endl;
			a[i].xuat();
		}
	}
//	void sapxepGVtheochuyennganh(giaovien a[],int n){
//    cout << "\n danh sach cac GV duoc sap xep theo chuyen nganh"<<endl;
//    for(int i=0;i<n;i++){
//    	for(int j=i+1;j<n;j++){
//    		if(strcmp(a[i].setchuyenNganh(),a[j].setchuyenNganh())<0){
//    			giaovien temp = a[i];
//    			a[i]=a[j];
//    			a[j]=temp;
//			}
//		}
//		a[i].xuat();
//	}
//	}
int main(){
	int n;
	cout<<"nhap so luong giao vien: ";cin>>n;
	giaovien a[n];
	nhapdanhsach(a,n);
	xuatdanhsach(a,n);
	danhsachGVluongnhohon2000(a,n);
//	sapxepGVtheochuyennganh(a,n);
	return 0;
}