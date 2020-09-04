# calculting factorial using recursion
def Fact(n):
    return (n * Fact(n-1) if (n > 1) else 1.0)

#main
num = int(input("n = "))
print(Fact(num))