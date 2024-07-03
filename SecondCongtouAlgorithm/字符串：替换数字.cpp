#include "Cong.h"

int main()
{
	string s;
	getline(cin, s);
	int cnt = 0;
	char number[] = { 'n', 'u', 'm', 'b', 'e', 'r' };
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
		{
			cnt++;
		}
	}
	s.resize(s.size() + 5 * cnt);
	int k = s.size() - 1;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
		{
			k -= 6;
			for (int j = 0; j < 6; j++)
			{
				s[k + j] = number[j];
			}
		}
		else
		{
			s[k--] = s[i];
		}
	}
	cout << s << endl;
	return 0;
}