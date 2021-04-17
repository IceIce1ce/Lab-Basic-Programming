// ID: 18127070
// Name: Tran Dai Chi
// Ex04: tinh so kwh dien su dung
#include<stdio.h>
int main()

{
	int sodienhientai, sodienthangtruoc, consumingKWh;
	printf("Nhap sodienthangtruoc: ");
	scanf("%d", &sodienthangtruoc);
	printf("Nhap sodienhientai: ");
	scanf("%d", &sodienhientai);
	consumingKWh = sodienhientai - sodienthangtruoc;
	printf("consume= %d\n", consumingKWh);
	return 0;
}

