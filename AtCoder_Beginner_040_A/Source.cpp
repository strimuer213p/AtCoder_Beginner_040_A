/*
��蕶
n �̃u���b�N�����ɕ���ł��܂��B�O���琔���� x �ڂ̃u���b�N�������F�ŁA�c��͂��ׂĐԐF�ł��B
�����N�́A�ׂ荇���u���b�N���������鑀������x���s���āA���u���b�N����̒[ (�O���� 1 �Ԗڂ��������� n �Ԗ�) �ɗ���悤�ɂ��悤�Ƃ��Ă��܂��B
�ŏ��ŉ���̑��삪�K�v�������߂Ă��������B
*/

#include<iostream>

int main() {
	int num, target;
	std::cin >> num >> target;

	if (target <= num / 2) {
		std::cout << target - 1 << std::endl;
	}
	else {
		std::cout << num - target << std::endl;
	}

	return 0;
}