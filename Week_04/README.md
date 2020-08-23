# 学习笔记
# 第4周
## 深度优先搜索：递归、栈
## 广度优先搜索：队列
## 贪心算法：要求必须是子问题最优解能推出问题的最优解的情况
## 二分查找

## 深度优先搜索模板：

'''
map<int, int> visited;
void dfs(Node* root) {
	//terminator
	if(!root) return;

	if(visited.count(root->val)) {
		//already visited
		return;
	}
	visited[root->val] = i;
	//process current node here

	for(int i = 0; i < root->children.size(); i++) {
		dfs(root->children[i]);
	}
	return;
}

'''

## 广度优先搜索模板：

'''
void bfs(Node* root) {
	map<int, int> visited;
	if(!root) return;
	queue<Node*> queueNode;
	queueNode.push(root);

	while(!queueNode.empty()) {
	    Node* node = queueNode.top();
	    queueNode.pop();
	    if(visited.count(node->val)) continue;
	    visited[node->val] = 1;

	    for(int i = 0; i < node->children.size(); i++) {
	    	queueNode.push(node->children[i]);
	    }
    }
    return;
}

'''

## 二分查找模板：

'''

int binarySearch(const vector<int>& nums, int target) {
	int left = 0, right = (int)nums.size() - 1;
	while(left <= right) {
	    int mid = left + (right - left) / 2;
	    if(nums[mid] == target) return mid;
	    else if(nums[mid] < target) left = mid +1;
	    else right = mid - 1;
    }
    return -1;
}

'''

## 使用二分查找，寻找一个半有序数组 [4, 5, 6, 7, 0, 1, 2] 中间无序的地方
## 假设这是一个升序排列的数组，那么这个半有序的数组可以看做是升序数组旋转后的结果，也就是要找到这个半有序数组中的最小值。

'''

int find_min(vector<int>& nums) {
	int left = 0, right = nums.size() - 1, mid = 0;
	if(right == -1) return -1;
	while(left < right) {
	    mid = left +(right - left) / 2;
	    if(nums[mid] > nums[right]) left = mid + 1;
	    else right = mid ；
	}
	return left;
} 

'''