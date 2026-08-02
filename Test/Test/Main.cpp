////#include<iostream>
////
////int main()
////{
////	int speed = 11;
////	std::string level;
////
////	/*if (speed > 10)
////	{
////		level = "Master";
////	}
////	else
////	{
////		level = "Beginer";
////	}*/
////
////	level = speed > 5 ? speed > 10 ? "Top" : "Master" : "Beginer";
////
////	std::cout << level << std::endl;
////	std::cin.get();
////}
//
//
//#include<iostream>
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Age;
//public:
//	Entity(const std::string& name)
//		:m_Name(name),m_Age(-1)
//	{
//
//	}
//	Entity(const int age)
//		:m_Name("Unknown"), m_Age(age)
//	{
//
//	}
//};
//int main()
//{
//	Entity a = std::string("qinjinyan");
//	Entity b = 22;
//
//	std::cin.get();
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	std::vector<int> v;
//	cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
//
//	for (int i = 0; i < 5; ++i) {
//		v.push_back(i);
//		cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
//	}
//
//	std::cin.get();
//}

//#include <iostream>
//#include <vector>   // 1. 必须引入 vector 头文件
//#include <numeric>  // 用于后面方便计算总分 (std::accumulate)
//
//using namespace std;
//
//int main() {
//    // ==========================================
//    // 步骤 A: 创建 vector 并初始化
//    // ==========================================
//    // 创建一个用来存放 double 类型成绩的动态数组
//    vector<double> scores = { 85.5, 92.0, 78.0, 95.5 };
//
//    cout << "--- 1. 初始成绩列表 ---" << endl;
//    // 使用范围 for 循环打印所有成绩
//    for (double s : scores) {
//        cout << s << " 分  ";
//    }
//    cout << "\n当前学生人数: " << scores.size() << " 人\n\n";
//
//    // ==========================================
//    // 步骤 B: 动态添加新元素 (push_back)
//    // ==========================================
//    cout << "--- 2. 添加新学生成绩 ---" << endl;
//    scores.push_back(88.0); // 补考生成绩
//    scores.push_back(60.0); // 转学生成绩
//    cout << "添加后，最新学生人数为: " << scores.size() << " 人\n\n";
//
//    // ==========================================
//    // 步骤 C: 读取与修改指定位置的元素
//    // ==========================================
//    cout << "--- 3. 查看与修改成绩 ---" << endl;
//    // 用 [下标] 或 .at() 访问第1个学生(下标0)
//    cout << "第一个学生的原始成绩是: " << scores[0] << endl;
//
//    // 修改第3个学生(下标2)的成绩（加分纠错）
//    scores[2] = 82.5;
//    cout << "修改后，第三个学生的成绩变为: " << scores.at(2) << endl << endl;
//
//    // ==========================================
//    // 步骤 D: 统计计算（遍历 vector）
//    // ==========================================
//    cout << "--- 4. 成绩统计分析 ---" << endl;
//    double sum = 0.0;
//    double maxScore = scores[0]; // 假设第一个最高
//
//    for (size_t i = 0; i < scores.size(); ++i) {
//        sum += scores[i]; // 累加求和
//
//        // 寻找最高分
//        if (scores[i] > maxScore) {
//            maxScore = scores[i];
//        }
//    }
//
//    double average = sum / scores.size();
//
//    cout << "全班总分: " << sum << " 分" << endl;
//    cout << "全班平均分: " << average << " 分" << endl;
//    cout << "全班最高分: " << maxScore << " 分" << endl << endl;
//
//    // ==========================================
//    // 步骤 E: 删除最后一个元素 (pop_back) 与 清空
//    // ==========================================
//    cout << "--- 5. 删除与清空操作 ---" << endl;
//    // 误录入了最后一个学生，删除末尾成绩
//    scores.pop_back();
//    cout << "删除最后一个成绩后，剩余人数: " << scores.size() << " 人" << endl;
//
//    // 清空整个成绩单
//    scores.clear();
//    if (scores.empty()) {
//        cout << "成绩单已成功清空！" << endl;
//    }
//
//    return 0;
//}

