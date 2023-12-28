#include <stdio.h>
#include <math.h>
#include <string.h>

// ctruc tsinh
struct ThiSinh{
	char hoten[50];
	float diem;
	char truong[50];
} typedef TS;

// ham nhap ttin 1 tsinh
TS nhap_ttin(){
	TS ts;
	printf("\nHo ten thi sinh: ");
	scanf("%s", &ts.hoten);
	
	printf("Diem: ");
	scanf("%f", &ts.diem);
	
	printf("Truong: ");
	scanf("%s", &ts.truong);
	
	return ts;
}

// ham in ttin 1 tsinh
void in_ttin(TS ts){
	printf("Ho ten: %s\tDiem: %.2f\tTruong: %s", ts.hoten, ts.diem, ts.truong);
}

// nhap ttin n tsinh
void nhap_nhieu_tsinh(TS tss[], int n){
	for (int i=0; i<n; i++){
		printf("\nNhap thong tin thi sinh thu %d: ", i+1);
		tss[i] = nhap_ttin();
	}
}

// in ttin n tsinh
void in_nhieu_tsinh(TS tss[], int n){
	for (int i=0; i<n; i++){
		in_ttin(tss[i]);
		printf("\n");
	}
}

// tinh tong diem cua truong
float tong_diem(TS tss[], int n, char truong[]){
	float T=0;
	int d=0;
	
	for (int i=0; i<n; i++){
		if (strcmp(tss[i].truong, truong)==0){
			d++;
			T+= tss[i].diem;
		}
	}
	if (d==0)
		return 0;
	
	return T;
}

// sap xep diem giam dan
void swap(TS *a, TS *b){
	TS t = *a;
	*a = *b;
	*b = t;
}
void sap_xep(TS a[], int n){
	
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (a[i].diem < a[j].diem){
				swap(&a[i], &a[j]);
			}
		}
	}
}

int main(){
	
	int n;
	printf("\nNhap so thi sinh: ");
	scanf("%d", &n);
	TS tss[n];
	
	nhap_nhieu_tsinh(tss,n);
	in_nhieu_tsinh(tss,n);
	
	return 0;
}
