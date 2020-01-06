# cmocka_example
C Unit Test에서 mock 을 사용할 수 있게 해주는 라이브러리 cmocka 설치부터 샘플 실행까지
* [공식 페이지](https://cmocka.org/)
* 라이센스(license) 정보
    - Apache License 2.0
    - 상용에 써도 상관없고 (대표적으로 아파치 서버, 톰캣 등등), 수정도 자유. 
    - 공개 의무 없음. 
    - 단, Apache 2.0 라이센스를 포함해야하고 그 라이센스가 아파치 재단에 의한것임을 명시해야함.

## cmocka 설치
* macOS : `brew install cmocka`
* Ubuntu : `sudo apt-get install -y libcmocka0`

## CMake
* cmocka 헤더파일이 위치한 include 경로 추가 및 실행파일(cmocka_example.out)과 cmocka 링크
```cmake
include_directories(/usr/local/include)
add_executable(cmocka_example.out src/main.c)
target_link_libraries(cmocka_example.out -L/usr/local/lib cmocka)
```

### Mock : Linux만 가능(macOS / Windows 불가능)
* mock 으로 사용할 함수에 대한 wrap 선언
    - 원본 함수 : char *get_user_name(void)
    - mock 함수 : char *__wrap_get_user_name(void)
* 예시 : `target_link_libraries(cmocka_example.out -Wl,--wrap=get_user_name)`
* <b>주의</b> : ld(링커)에 --wrap 옵션은 Linux에만 있으며 macOS에 대체할 옵션이 없다. 따라서 macOS에서는 mock을 만들 수 없다.