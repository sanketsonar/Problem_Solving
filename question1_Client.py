import question1_module as m


def main():
    print("Enter first number: ")
    No1 = int(input())
    print("Enter second number: ")
    No2 = int(input())

    print("Addition is :", m.Addition(No1,No2))
    print("Substraction is :", m.Substraction(No1,No2))
    print("Multiplication is :", m.Multiplication(No1,No2))
    print("Division is :", m.Division(No1,No2))




if __name__ == "__main__":
    main()