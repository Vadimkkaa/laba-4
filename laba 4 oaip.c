#include<stdio.h>
int main() {
	int i, j, n, a[100], b[100], kol = 0, sum = 0;
	printf("VVedite kol-vo elementov massiva a and b\n");
	scanf_s("%d", &n);
	printf("VVedite elementy massiva a\n");
	for (i = 1; i <= n; i++) {

		scanf_s("%d", &a[i]);
	}
	printf("VVedite elementy massiva b\n");
	for (j = 1; j <= n; j++) {

		scanf_s("%d", &b[j]);
	}
	printf("Indexy iz massiva a and b\n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if ((a[i] * b[j]) > 10) {
				printf("%d %d\n", i, j);
				kol = kol + 1;
				sum = sum + a[i] * b[j];
			}
		}
	}
	if ((sum == 0) && (kol == 0)){
		printf("Takih par ne nashlos");
		return 0;
}
	printf("\nKolichestvo takih par:%d\n",kol);
	printf("\nSuma proizvedeniy udovletvoryuchich usloviu:%d\n",sum);
	return 0;
}
//���� ��� ������������� ������� a1,�,an � b1,�,bn. ������� �� ������ ��� ���� ��������, ��� ������� a[i]* b[i] > 10. ���������� ����� ��� � ����� ���� ������������.