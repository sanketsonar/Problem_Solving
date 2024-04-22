# program to find addition of factors of a given number


def FactAdd(no): 
    sum = 0
    for i in range(1,no): 
        if((no % i)==0):
            sum = sum + i
    return sum


def main():
    print("Enter a number :")
    No = int(input())
    Res = FactAdd(No)
    print("sum of its factor is", Res)

if __name__ == "__main__":
    main()