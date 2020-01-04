# cmocka_example
C Unit Test에서 mock 을 사용할 수 있게 해주는 라이브러리 cmocka 설치부터 샘플 실행까지
* [공식 페이지](https://cmocka.org/)
* 라이센스(license) 정보
    - Apache License 2.0
    - 상용에 써도 상관없고 (대표적으로 아파치 서버, 톰캣 등등), 수정도 자유. 
    - 공개 의무 없음. 
    - 단, Apache 2.0 라이센스를 포함해야하고 그 라이센스가 아파치 재단에 의한것임을 명시해야함.

## cmocka 설치
### 다운로드
* 다운 받을 디렉터리 : ~/Downloads
* 다운로드 : git clone
```bash
$ cd ~/Downloads
$ git clone https://git.cryptomilk.org/projects/cmocka.git
```

* build 디렉터리 생성 : cmake-build
```bash
$ cd cmocka
$ mkdir cmake-build 
```

* 빌드 및 라이브러리 설치
```bash
$ cd cmake-build
$ cmake ../../cmocka
$ sudo make install
```