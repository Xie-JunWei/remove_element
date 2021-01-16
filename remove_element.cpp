#include"iostream"
#include<unordered_map>
using namespace std;

int remove_element(vector<int>& nums, int target)
{
	int index = 0;
	for (int i=0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{
			continue;
		}
		else
		{
			nums[index++] = nums[i];
		}
	}
	return index;
}

int main()
{
	vector<int> a = { 3,4,6,3,25,3,2,5,6,4,3,2,5,7,4 };
	cout << remove_element(a, 4);
}