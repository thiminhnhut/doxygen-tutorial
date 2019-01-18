# Doxygen tutorial

## Nội dung thực hiện

### Giới thiệu

* Hướng dẫn bên dưới được thực hành trên Doxygen `1.8.15`.

* Tài liệu tham khảo chính thức: <http://www.doxygen.nl/index.html>

* Doxygen là công cụ tiêu chuẩn cho phép tạo liệu cho source code. Hỗ trợ các ngôn ngữ sau: `C, C++, C#, Objective-C, PHP, Java, Python, IDL, Fortran, VHDL, Tcl, D`.

* Doxygen giúp chúng ta thực hiện các việc sau: mục [Generate documentation from source code](http://www.doxygen.nl/index.html)

### Cài đặt Doxygen

* Cài đặt Doxygen trên Windows: mục [Sources and Binaries (A binary distribution for Windows)](http://www.doxygen.nl/download.html)

* Tài liệu hướng dẫn: mục [Download Manual](http://www.doxygen.nl/download.html).

### Sử dụng Doxygen

* Kiểm tra ngôn ngữ lập trình có được Doxygen hỗ trợ không (`C, C++, C#, Objective-C, PHP, Java, Python, IDL, Fortran, VHDL, Tcl, D`).

* Tạo file cofiguration cho Doxygen:

  ```bash
  doxygen -g <config-file>
  ```

  nếu bỏ qua `<config-file>` thì file [Doxyfile](https://github.com/thiminhnhut/doxygen-tutorial/blob/master/config-default/Doxyfile) được tạo ra mặc định.

* Running Doxygen:

  ```bash
  doxygen <config-file>
  ```

  với `<config-file>` là file config tạo ở bước trên.

  * Chú ý các cặp `key:value` sau:
  
    ```bash
    OUTPUT_DIRECTORY = Nơi chứa document
    HTML_OUTPUT      = Tên của folder của html document
    GENERATE_HTML    = YES | NO

    RTF_OUTPUT       = Tên của folder của rft document
    GENERATE_RTF     = YES | NO

    LATEX_OUTPUT     = Tên của folder của latex document
    GENERATE_LATEX   = YES | NO

    XML_OUTPUT       = Tên của folder của xml document
    GENERATE_XML     = YES | NO

    MAN_OUTPUT       = Tên của folder của man document
    GENERATE_MAN     = YES | NO

    DOCBOOK_OUTPUT   = Tên của folder của docbook document
    GENERATE_DOCBOOK = YES | NO
    ```