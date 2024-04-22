#check if the given number is prime or not

def checkPrime(no):
    prime = 0
    for i in range(2,no):
        if((no % i) == 0):
            prime = prime + i
    return prime
            
        
    
def main():
    print("Enter a number: ")
    No = int(input())
    if(No == 0 or No == 1):
        print(No, " Is not a Prime Number")
        return
    
    prime = checkPrime(No)

    if(prime > 0):
        print(No, " Is not a Prime Number")
    else:
        print(No, " Is a Prime Number")
        

if __name__ == "__main__":
    main()