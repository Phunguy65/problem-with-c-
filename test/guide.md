# Hướng dẫn sử dụng trình sinh testcases:
* Về cơ bản trình sinh testcases dựa trên nguyên mẫu Folder <code>Problem-maker-main</code> của anh <code><strong>Nguyễn Nhật Minh</strong></code> trong đó thay đổi file <code>creator.py</code> thành <code>creator.cpp</code> để đồng bộ trình sinh testcases
* Có gì mới trong chương trình sinh testcases?
    * Đồng bộ chương trình sinh testcase không cần qua trung gian môi trường Python
    * Tự động nén các file *.in *.out thành testcases.zip
    * Xuất file solution.cpp, solution.md, testcases.zip vào folder solution
## 1. Chuẩn bị:
* Sau đây là hướng dẫn cài môi trường để chạy C/C++ trong Visual Studio Code, nếu bạn đã biết hoặc đã cài vui lòng bỏ qua
* <mark>Cần đảm bảo cài đặt cả 2 cái dưới nếu không chương trình báo lỗi</mark>
* Cài đặt MSYS2:
    * Windows của bạn cần cài đặt <code>MSYS2</code> để tiến hành biên dịch, debug cho ngôn ngữ c++ trong vscode. Nếu chưa hãy tải về tại đây [MSYS2](https://github.com/msys2/msys2-installer/releases/download/2022-06-03/msys2-x86_64-20220603.exe)
    * Sau khi cài đặt hãy chạy MYS2, một cửa sổ mở ra hãy copy và paste vào trong cửa sổ lệnh <code>pacman -S --needed base-devel mingw-w64-x86_64-toolchain</code>
    * Ấn <code>Enter</code> và nhập chữ <code>Y</code> để cài đặt
    * Sau khi hoàn tất cài đặt nhấn phím <code>Windows</code> gõ <code>Edit environment variables for your account</code>
    * Cửa sổ hiện ra nhấp <code>Path</code> trong vùng <code>User variables</code> và chọn <code>Edit</code>
    * Chọn <code>New</code> và paste vào ô dòng sau <code>C:\msys64\mingw64\bin</code>

* Cài đặt Extensions C/C++ trong Visual Studio Code:
    * Mở mục Extensions, tìm C/C++, sau đó tiến hành cài đặt C/C++ của <code>Microsoft</code>
* <code>Sau khi đã hoàn thành cài đặt thành công cả hai hãy lên [đây](https://code.visualstudio.com/docs/cpp/config-mingw#_run-helloworldcpp) để biết cách chạy file c++ trong VScode</code>
## 2. Chạy chương trình sinh testcases:
### a. Thư mục <code>.vscode</code>:
* Là Folder chứa cấu hình để chạy chương trình sinh testcases trong Vscode
### b. File <code>rndlib.h</code>:
* Là thư viện hỗ trợ sinh số ngẫu nhiên
### c. File <code>generator.cpp</code>:
* Là nơi bạn gõ chương trình sinh số ngẫu nhiên tuỳ theo yêu cầu đề bài của bạn
    * Ví dụ: Cần một bộ test là một dãy n số bất kì ($1\leq n \leq 100000$) $x_i$ ($1\leq x_i \leq 1000000$)
```
#include "rndlib.h"
using namespace std;
int main(){
    srand(time(NULL));
    int n = Random::integer(1,100000);
    cout<<n<<endl;
    for(int i = 0; i< n; i++){
        int x = Random::integer(1,100000);
        cout<<x<<endl;
    }
}
```
* <code>Lưu ý:</code> File này phải đảm bảo có lệnh <code>cout</code> ra biến, nếu không File *.in sẽ rỗng
### d. File <code>solution.cpp</code>
* Là nơi bạn viết lời giải cho đề bài
### e. File <code>creator.cpp</code>
* Là nơi bạn chạy chương trình sinh testcases
## 3. Kết quả:
* Kết quả sẽ được lưu vào Folder <code>solution</code>
## 4. Một số lưu ý quan trọng:
* <code><strong>Không thay đổi tên file</code></strong> nào trong thư mục để tránh sinh ra lỗi
* Khuyến nghị chạy file bằng cách nhấn tổ hợp phím <code>Ctrl+F5</code>
