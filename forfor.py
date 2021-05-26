#本案例是用python写的九九乘法表
import sys

for i in range(1,10):
        for j in range(1,i+1):
                sys.stdout.write(str(j)+" * "+str(i)+" = "+str(i*j)+"\t")
        sys.stdout.write("\n")