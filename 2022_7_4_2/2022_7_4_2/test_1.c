//#define _CRT_SECURE_NO_WARNINGS 1
///*��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�
//
//*/
//
//#include <stdio.h>
//
//void move_arr(int arr[], int sz);
//
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		scanf("%d", &arr[i]);
//	}
//	move_arr(arr, sz);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void move_arr(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right) {
//		//�����ż��
//		while (left < right && arr[left] % 2 == 1) {
//			left++;//����������
//		}
//		//�ұ�������
//		while (left < right && arr[right] % 2 == 0) {
//			right--;//ż��������
//		}
//		//������ż��
//		if (left < right) {
//			int t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//		}
//	}
//}
//
//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int j = sz - 1;
//	for (i = 0; i < sz; i++) {
//		//�����ż��
//		if (arr[i] % 2 == 0) {
//			//�ұ�������
//			while (arr[j] % 2 == 0 && i < j) {
//				j--;
//			}
//			//������ż��
//			int t = arr[i];
//			arr[i] = arr[j];
//			arr[j] = t;
//		}
//	}
//
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//


