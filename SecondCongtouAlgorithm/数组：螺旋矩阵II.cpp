#include "Cong.h"

class Solution {
public:
	std::vector<std::vector<int>> generateMatrix(int n) {
		vector<vector<int>> result(n, vector<int>(n));
		//循环不变量：每次留末尾一个下层处理
		int k = 1;
		for (int cnt = 0; cnt < n / 2; cnt++)
		{
			//上
			for (int j = cnt; j < n - cnt - 1; j++)
			{
				result[cnt][j] = k++;
			}
			//右
			for (int i = cnt; i < n - cnt - 1; i++)
			{
				result[i][n - cnt - 1] = k++;
			}
			//下
			for (int j = n - cnt - 1; j > cnt; j--)
			{
				result[n - cnt - 1][j] = k++;
			}
			//左
			for (int i = n - cnt - 1; i > cnt; i--)
			{
				result[i][cnt] = k++;
			}
		}
		if (n % 2 == 1) result[n / 2][n / 2] = k;
		return result;
	}
};