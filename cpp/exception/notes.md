### exception抛出后, 后续语句不会被执行  
1. 而是直接跳出当前程序, 来到catch, 并执行catch之后的语句  
2. 但C++保证所有跳过的调用上下文中的局部对象的destructor会被调用, 因此资源应该

### 异常体系  
头文件`#include<exception>`  
自定义一个异常的类, 并继承exception.  