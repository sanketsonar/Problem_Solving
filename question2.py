# Program which contain ChkNum() which accept one parameter as a number if the number is even then it should display even/odd number on console check odd even number

def CheckNum(no):
    if(no<0):
        print("Enter valid number")
        return
    if(no==0):
        print( no, " is Neutral ") 
        return   
    if((no%2) == 0):
        print( no, " is even no ")
    else:
        print( no, " is odd no ")

def main():
    print(" Enter a number ")
    No = int(input())

    CheckNum(No)

if __name__ == "__main__":
    main()
