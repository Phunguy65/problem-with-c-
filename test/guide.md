# Hướng dẫn sử dụng trình sinh testcases:
Về cơ bản trình sinh testcases dựa trên nguyên mẫu Folder <code>Problem-maker-main</code> của anh <strong> Nguyễn Nhật Minh</strong> trong đó thay đổi file <code>creator.py</code> thành <code>creator.cpp</code> để đồng bộ trình sinh testcases
## 1. Chuẩn bị:
* Windows của bạn cần cài đặt <code>MYS2</code> để tiến hành biên dịch, debug cho ngôn ngữ c++ trong vscode. Nếu chưa hãy tải về tại đây [MYS2](https://github.com/msys2/msys2-installer/releases/download/2022-06-03/msys2-x86_64-20220603.exe)
* Sau khi cài đặt hãy chạy MYS2, một cửa sổ mở ra hãy <code>copy</code> và paste vào trong cửa sổ lệnh <code>pacman -S --needed base-devel mingw-w64-x86_64-toolchain</code>
* Ấn <code>Enter</code> và nhập chữ <code>Y</code> để cài đặt
## 2. Chạy chương trình sinh testcases:
### a. File <code>generator.cpp</code>:
* Là nơi bạn gõ chương trình sinh số ngẫu nhiên tuỳ theo yêu cầu đề bài của bạn
    * Ví dụ: Cần một bộ test là một dãy n số bất kì ($1\leq n \leq 100000$) $x_i$ ($1\leq x_i \leq1000000$)
```
#include "rndlib.h"
using namespace std;
int main(){
    int n = Random::integer(1,100000);
    cout<<n<<endl;
    for(int i = 0; i< n; i++){
        int x = Random::integer(1,100000);
        cout<<x<<endl;
    }
}
```
### b. File <code>solution.cpp</code>
* Là nơi bạn viết lời giải cho đề bài
### c. File <code>creator.cpp</code>
* Là nơi bạn chạy chương trình sinh testcases
## 3. Một số lưu ý quan trọng:
* <code><strong>Không thay đổi tên file</code></strong> nào trong thư mục để tránh sinh ra lỗi
* Khuyến nghị chạy file bằng cách nhấn tổ hợp phím <code>Ctrl+F5</code>

