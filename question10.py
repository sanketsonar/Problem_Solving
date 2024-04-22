# enter sum of digits in given number

def DigiSum(no):
    sum = 0
    i = 0
    while(no > 0):
        i = no % 10
        sum = sum + i
        no = int(no/10)
    return sum

def main():
    print("Enter number: ", end = "\t")
    No = int(input())
       
    Result =  DigiSum(No)
    print("Sum of digit is: ", Result)

if __name__ =="__main__":
    main()

