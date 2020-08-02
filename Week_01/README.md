算法   第一周  学习笔记

1. 数组 array
各项操作时间复杂度：
prepend O(1)
append  O(1)
lookup  O(1)
insert  O(N)
delete  O(N)

2. 链表 linklist
各项操作时间复杂度：
prepend O(1)
append  O(1)
lookup  O(N)
insert  O(1)
delete  O(1)

3. 跳表
只能用于元素有序的情况，插入、删除、搜索都是O(logN),
空间复杂度 O(N)
热门项目：Redis,LevelDB

4. 栈 Stack
后进先出,时间复杂度：查询为O(n), 添加、删除为O(1)

5. 队列 Queue
先进先出,时间复杂度：查询为O(n), 添加、删除为O(1)

6. 双端队列 Deque (Double-End Queue)
两端都可以插入与删除，时间复杂度：插入与删除O(1),查询为O(n)。

7. 优先队列 Priority Queue
插入O(1),取出为O(logN),按元素的优先进行
底层具体实现的数据结构较为多样和复杂： heap ,bst ,treap




本周练习的总结与反思：
1. vscode : 新工具，基本能编译
2. 关于LeetCode题目的练习，还只练习了2-3遍，下周将进行剩余遍数的练习。