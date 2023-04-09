- chatgptに教えてもらいながらつくりました。
- visual studio 2022 から windowsとwsl2の両方でデバッグする想定。

この例では、add_subdirectoryコマンドを使って、myappフォルダ、mylib1フォルダ、mylib2フォルダに配置されたCMakeLists.txtファイルをインクルードしています。これにより、myapp、mylib1、mylib2のビルドが行われます。




``` objectivec
project_root/
├── CMakeLists.txt
├── myapp/
│   ├── CMakeLists.txt
│   └── main.cpp
├── mylib1/
│   ├── CMakeLists.txt
│   ├── include/
│   │   └── lib1.h
│   └── lib1.cpp
└── mylib2/
    ├── CMakeLists.txt
    ├── include/
    │   └── lib2.h
    └── lib2.cpp
``` 