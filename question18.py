# program to find digits in a number 

def Digit(no):
    count = 0
    i = 1
    while (no > 0):
        no = int(no / 10)
        count = count + 1
        i = i + 1
    return count

def main():
    print("Enter a number  :")
    no = int(input())
    Result = Digit(no)
    print("Number of digits in ",no," are :", Result)

if __name__=="__main__":
    main()