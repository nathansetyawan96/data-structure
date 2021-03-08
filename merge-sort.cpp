#include <iostream>
#include <vector>

void merge(vector<int> nums, int left, int middle, int right) {

}

void mergeSort(vector<int> nums) {
    int left = 0;
    int right = nums.size() - 1;
    int middle = left + ((right-left)/2);

    if(left >= right) return;
    mergeSort(nums, left, middle);
    mergeSort(nums, middle+1, right);
    merge(nums, left, middle, right);

    printList(nums);
}

void printList(vector<int> nums) {
	for (auto num : nums)
		cout << nums << " ";

	cout << endl;
}

int main()
{
    vector<int> nums={4,3,2,5,6,1};

    mergeSort(nums);

    return 0;
}
