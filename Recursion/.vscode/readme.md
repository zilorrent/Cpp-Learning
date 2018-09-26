# Cpp Build and Run 
- [Cpp Build and Run](#cpp-build-and-run)
  - [**Run Build Tasks**](#run-build-tasks)
  - [**Build Solution**](#build-solution)
  - [**Settings**](#settings)

## **Run Build Tasks**
**Save as** *tasks.json*
```json
{
    "version": "2.0.0",
    "tasks": [{
        "label": "Cpp Build",
        "type": "shell",
        "command": "g++ -g main.cpp -o program",
        "group": {
            "kind": "build",
            "isDefault": true,
        }
    }]
}
```

## **Build Solution**

**Save as** *launch.json*
```json
{
    "version": "0.2.0",
    "configurations": [{
            "name": "(Windows) Cpp Launch",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "program.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true
        },
    ]
}
```

## **Settings**

**Save as** *settings.json*
```json
{
    "files.associations": {
        "typeinfo": "cpp",
        "*.tcc": "cpp",
        "cctype": "cpp",
        "clocale": "cpp",
        "cmath": "cpp",
        "cstdint": "cpp",
        "cstdio": "cpp",
        "cstdlib": "cpp",
        "cwchar": "cpp",
        "cwctype": "cpp",
        "exception": "cpp",
        "initializer_list": "cpp",
        "iosfwd": "cpp",
        "iostream": "cpp",
        "istream": "cpp",
        "limits": "cpp",
        "new": "cpp",
        "ostream": "cpp",
        "stdexcept": "cpp",
        "streambuf": "cpp",
        "string_view": "cpp",
        "system_error": "cpp",
        "type_traits": "cpp"
    },
    "C_Cpp.intelliSenseEngineFallback": "Disabled"
}
```