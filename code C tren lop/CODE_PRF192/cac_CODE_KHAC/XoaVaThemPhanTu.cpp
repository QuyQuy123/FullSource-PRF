#include<stdio.h>
void ThemPhanTu(int a[], int &n, int val, int pos){
   
    // Neu pos <= 0 => Them vao dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Them vao cuoi
    else if(pos > n){
        pos = n;
    }
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    // Chen val tai pos
    a[pos] = val;
    // Tang so luong phan tu sau khi chen.
    ++n;
    for (int i=0;i<n;i++)
    printf("%d",a[i]);
}
 
void XoaPhanTu(int a[], int &n, int pos){
    // Mang rong, khong the xoa.
    if(n <= 0){
        return;
    }
    // Neu pos <= 0 => Xoa dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Xoa cuoi
    else if(pos >= n){
        pos = n-1;
    }
    // Dich chuyen mang
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    // Giam so luong phan tu sau khi xoa.
    --n;
    for (int i=0;i<n;i++)
    printf("%d",a[i]);
}
 int main()
 {
 	int n,pos,val;
 	scanf("%d",&n);
 	int a[n];
 	for (int i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 	scanf("%d%d",&pos,&val);
 //ThemPhanTu(a,n,val,pos);
 printf("\n");
 XoaPhanTu(a,n,pos);
 	}
