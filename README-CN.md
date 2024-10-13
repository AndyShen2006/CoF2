# CoF2 Compiler

由于Cobalt项目的开发速度过慢，为了说明还有人在进行开发，所以开始了这个项目：CoF2。这个名字有两种意思：一种意思是氟化钴(II)，意思是这是Cobalt项目的一个衍生物。另一种意思，F代表Functional，也就是函数式。所以这门语言是一门纯函数式，无副作用（除IO）外的类Lisp语言。这个项目并不想做一个编译器，因为如果是做一个编译器需要走从AST到CFM到IRT的流程，而这个项目只生成AST，然后就直接使用AST进行模拟。

本项目当能够使用后将不再开发。

# 语言规范

# S-Expression

我们将形为`(<function-name> <exp1> <exp2> ...)`的式子叫做S-Expression。

# 安装

```bash
xmake build
sudo xmake install
```

# 技术栈

构建系统：XMake v2.7.9
词法分析器：Lex(GNU Flex 2.6.4)
语法分析器：Yacc(GNU Bison 3.8.2)
编译器：GNU GCC 13.1.1

# 其他信息

协议：GNU General Public License Version 3

