#include<stdio.h>
//704. ���ֲ���
//��
//����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��дһ���������� nums �е� target����� target ���ڷ����±꣬���򷵻� - 1��
//
//������дһ������ O(log n) ʱ�临�Ӷȵ��㷨��
//
//
//ʾ�� 1:
//
//����: nums = [-1, 0, 3, 5, 9, 12], target = 9
//��� : 4
//���� : 9 ������ nums �в����±�Ϊ 4
//ʾ�� 2 :
//
//	���� : nums = [-1, 0, 3, 5, 9, 12], target = 2
//	��� : -1
//	���� : 2 ������ nums ����˷��� - 1
//
//
//	��ʾ��
//
//	����Լ��� nums �е�����Ԫ���ǲ��ظ��ġ�
//	n ����[1, 10000]֮�䡣
//	nums ��ÿ��Ԫ�ض�����[-9999, 9999]֮�䡣
int binarySearch(int* nums, int target, int left, int right) {
	if (left > right)
	{
		return -1;
	}
	int mid = (left + right) / 2;
	if (nums[mid] == target) {
		return mid;
	}
	if (nums[mid] < target)
	{
		return binarySearch(nums, target, mid + 1, right);
	}
	else {
		return binarySearch(nums, target, left, mid - 1);
	}
}
int search(int* nums, int numsSize, int target) {
	return binarySearch(nums, target, 0, numsSize - 1);
}


void main() {

}