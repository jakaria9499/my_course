{
    "C_Cpp.default.cppStandard": "c++20",
    "C_Cpp.default.cStandard": "c11",
    "terminal.integrated.defaultProfile.windows": "Git Bash",
    "code-runner.runInTerminal": true,
    "code-runner.saveAllFilesBeforeRun": true,
    "code-runner.terminalRoot": "/",
    "code-runner.executorMapByGlob": {
    
        "pom.xml": "cd $dir && mvn clean package"
    },
    "code-runner.executorMap": {
        "javascript": "node",
        "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
        "zig": "zig run",
        "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "php": "php",
        "python": "python -u",
        "perl": "perl",
        "perl6": "perl6",
        "ruby": "ruby",
        "go": "go run",
        "lua": "lua",
        "groovy": "groovy",
        "powershell": "powershell -ExecutionPolicy ByPass -File",
        "bat": "cmd /c",
        "shellscript": "bash",
        "fsharp": "fsi",
        "csharp": "scriptcs",
        "vbscript": "cscript //Nologo",
        "typescript": "ts-node",
        "coffeescript": "coffee",
        "scala": "scala",
        "swift": "swift",
        "julia": "julia",
        "crystal": "crystal",
        "ocaml": "ocaml",
        "r": "Rscript",
        "applescript": "osascript",
        "clojure": "lein exec",
        "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
        "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
        "racket": "racket",
        "scheme": "csi -script",
        "ahk": "autohotkey",
        "autoit": "autoit3",
        "dart": "dart",
        "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
        "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
        "haskell": "runghc",
        "nim": "nim compile --verbosity:0 --hints:off --run",
        "lisp": "sbcl --script",
        "kit": "kitc --run",
        "v": "v run",
        "sass": "sass --style expanded",
        "scss": "scss --style expanded",
        "less": "cd $dir && lessc $fileName $fileNameWithoutExt.css",
        "FortranFreeForm": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran-modern": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran_fixed-form": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "sml": "cd $dir && sml $fileName",
        "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt.exe && $dir$fileNameWithoutExt.exe",
        "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt.exe && $dir$fileNameWithoutExt.exe",
    },
    "terminal.integrated.enableMultiLinePasteWarning": false,
    "security.workspace.trust.untrustedFiles": "open",
    "git.autofetch": true,
    "git.confirmSync": false,

    
}







{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	// "Print to console": {
	// 	"prefix": "log",
	// 	"body": [
	// 		"console.log('$1');",
	// 		"$2"
	// 	],
	// 	"description": "Log output to console"
	// }
	"1": {
		"prefix": "node",
		"body": [
		  "class Node",
		  "{",
		  "    public:",
		  "        int val;",
		  "        Node* next;",
		  "    Node(int val)",
		  "    {",
		  "        this->val = val;",
		  "        this->next = NULL;",
		  "    }",
		  "};"
		],
		"description": ""
	  },
	  "2": {
		"prefix": "cpp",
		"body": [
		  "#include<bits/stdc++.h>",
		  "using namespace std;",
		  "",
		  "int main()",
		  "{",
		  "    $0",
		  "",
		  "    return 0;",
		  "}",
		  ""
		],
		"description": ""
	  },
	  "3": {
		"prefix": "dnode",
		"body": [
		  "class Node",
		  "{",
		  "    public:",
		  "        int val;",
		  "        Node* next;",
		  "        Node* prev;",
		  "    Node(int val)",
		  "    {",
		  "        this->val = val;",
		  "        this->next = NULL;",
		  "        this->prev = NULL;",
		  "    }",
		  "};"
		],
		"description": ""
	  },
	  "4": {
		"prefix": "bnode",
		"body": [
		  "class Node ",
		  "{",
		  "    public:",
		  "        int val;",
		  "        Node* left;",
		  "        Node * right;",
		  "    Node(int val)",
		  "    {",
		  "        this->val = val;",
		  "        this->left = NULL;",
		  "        this->right = NULL;",
		  "    }",
		  "};"
		],
		"description": ""
	  }
	
}









{
	// Place your snippets for c here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	// "Print to console": {
	// 	"prefix": "log",
	// 	"body": [
	// 		"console.log('$1');",
	// 		"$2"
	// 	],
	// 	"description": "Log output to console"
	// }
}"": {
	"prefix": "aa",
	"body": [
	  "#include <stdio.h>",
	  "int main()",
	  "{",
	  "    $0",
	  "    return 0;",
	  "}"
	],
	"description": ""
  }