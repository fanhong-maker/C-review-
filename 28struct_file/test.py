#在python中定义a = 10 表示开辟了一个内存空间给10，之后的b = 10，表示将b又指向了10这个内存空间
#并未开辟新的内存空间
#与c语言中不一样，在C中则是为a和b分别开辟内存空间
a = 10
b = 10
c = a
print(id(a))
print(id(b))
print(id(c))