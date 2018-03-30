This is a simple demonstration of forward declaration in C++.

In C++, every function needs to be defined before it is used. The compiler interprets the code line by line. If for some reason, we have to define the function after it is called (this makes more sense when multiple files are involved), the compiler will throw an error. C++ provides a way around it by allowing us it declare function without defining. In the declaration, we only provide the function template. This includes the return type, function name and type of parameters of the function. We are telling the compiler that the function exsits in the code and it's definition will be found later. Of course, it is our duty to provide a definition.

Forward declaration has powerful implications when a project involves multiple source and header files.
