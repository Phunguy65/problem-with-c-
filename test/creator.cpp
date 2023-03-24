#include <bits/stdc++.h>
using namespace std;
// Tên chương trình giải
const string solution = "solution";
// Tên chương trình sinh test
const string generator = "generator";
// Số lượng sinh test
const int NTEST = 20;
// Hàm chạy chương trình sinh test
void generatorInput(const string &iTest, const string generator){
    cout<<"[INFO] Generating Testcase Input!"<<endl;
    string cmd = generator + ".exe >> testcases/" + iTest + ".in";
    system(cmd.c_str());
    cout<<"[INFO] Complete!"<<endl;
}
// Hàm chạy chương trình trả kết quả
void generatorOutput(const string &iTest, const string solution){
    cout<<"[INFO] Generating Testcase Output!"<<endl;
    string cmd = solution + ".exe <testcases/" + iTest + ".in >> testcases/" + iTest +".out";
    system(cmd.c_str());
    cout<<"[INFO] Complete!"<<endl;
}
void ziptestcase(){
    cout<<"[INFO] Compressing testcases!"<<endl;
    system("zip -r testcases.zip testcases");
    cout<<"[INFO] Complete!"<<endl;
}
void removetestcases(){
    cout<<"[INFO] Removing testcases folder!"<<endl;
    system("rm testcases");
     cout<<"[INFO] Complete!"<<endl;
}
int main()
{
    srand(time(NULL));
    system("mkdir testcases");
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
       cout<<"[INFO] Creating test "<<iTest <<"!"<<endl;
       generatorInput(to_string(iTest), generator);
       generatorOutput(to_string(iTest), solution);
       cout<<"[INFO] Test "<<iTest<<" is created!"<<endl;
    }
    ziptestcase();
    removetestcases();
    return 0;
}
