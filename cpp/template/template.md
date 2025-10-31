### 参数化的类型的变量  
建议全部当成自定义类进行处理：  
1. 使用引用传参
2. 在`member initialization list`中完成初始化, 如:  
A(T & t): _t(t) { ... }  

### template\<int len\>
template中不一定是类型, 也可以是常量表达式  
