# Program which contain Add() which accept two number from number return Addition

def Addition(No1, No2):
    Ans = No1 + No2
    return Ans

def main():
    print(" Enter Two numbers for addition: ")
    Value1 = int(input())
    Value2 = int(input())

    print(" Addition of", Value1, " and ", Value2, " is :", Addition(Value1,Value2))

if __name__ == "__main__":
    main()