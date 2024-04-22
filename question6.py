# program to check number is positive negative or zero

def CheckNum(no):
    if(no == 0):
        print(" Number is 0 ")
        return
    if(no < 0):
        print(" Negative Number")
    else:
        print(" Positive Number")

def main():
    print(" Enter Number: ")
    Value = int(input())

    CheckNum(Value)

if __name__== "__main__":
    main()