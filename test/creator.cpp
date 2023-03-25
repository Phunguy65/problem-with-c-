#include <bits/stdc++.h>
using namespace std;
// Tên chương trình giải
const string solution = "solution";
// Tên chương trình sinh test
const string generator = "generator";
// Số lượng sinh test
const int NTEST = 6;
// Hàm chạy chương trình sinh test
void generatorInput(const string &iTest, const string generator){
    cout<<"[INFO] Generating Testcase Input!"<<endl;
    system("g++ -o generator.exe generator.cpp"); 
    string cmd = generator + ".exe > " + iTest + ".in";
    system(cmd.c_str());
    cout<<"[INFO] Complete!"<<endl;
}
// Hàm chạy chương trình trả kết quả
void generatorOutput(const string &iTest, const string solution){
    cout<<"[INFO] Generating Testcase Output!"<<endl;
    system("g++ -o solution.exe solution.cpp");
    string cmd = solution + ".exe <" + iTest + ".in > " + iTest +".out";
    system(cmd.c_str());
    cout<<"[INFO] Complete!"<<endl;
}
void Complete(){
    cout<<"[INFO] Compressing testcases!"<<endl;
    system("mkdir solution");
    system("tar -a -c -f solution/testcases.zip *.in *.out");
    system("copy solution.cpp solution");
    system("copy solution.md solution");
    cout<<"[INFO] Removing testcases folder!"<<endl;
    system("del *.in *.out solution.exe generator.exe");
    cout<<"[INFO] Complete!"<<endl;
}
int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
       cout<<"[INFO] Creating test "<<iTest <<"!"<<endl;
       generatorInput(to_string(iTest), generator);
       generatorOutput(to_string(iTest), solution);
       cout<<"[INFO] Test "<<iTest<<" is created!"<<endl;
    }
    Complete();
    return 0;
}
