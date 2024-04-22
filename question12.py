# program to give factorial

def Factorial(no):
    fact = 1
    for i in range(no):
        fact = fact + (fact*i)
    return fact

def main():
    print("Enter Number for Factorial: ")
    No = int(input())

    Res = Factorial(No)
    print("Factorial of ", No, " is :", Res)

if __name__ == "__main__":
    main()