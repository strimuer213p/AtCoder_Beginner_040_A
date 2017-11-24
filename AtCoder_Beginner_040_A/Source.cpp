/*
問題文
n 個のブロックが一列に並んでいます。前から数えて x 個目のブロックだけが青色で、残りはすべて赤色です。
高橋君は、隣り合うブロックを交換する操作を何度か行って、青いブロックが列の端 (前から 1 番目かもしくは n 番目) に来るようにしようとしています。
最小で何回の操作が必要かを求めてください。
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