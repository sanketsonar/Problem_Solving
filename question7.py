# check if number is divisible by 5

def CheckNum(no):
    if(no <= 0):
        print(" Enter valid number")
        return

    if((no%5) == 0):
        print(no," is Divisible by 5")
    else:
        print(no," is not Divisible by 5")
       

def main():
    print(" Enter Number: ")
    Value = int(input())

    CheckNum(Value)

if __name__ == "__main__":
    main()
