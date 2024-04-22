# print pattern by accepting number
# 1
# 1   2
# 1   2   3
# 1   2   3   4

def pattern(no):
    i = 1
    while(i<=no):
        for j in range(1,i+1):
            print(j, end =" ")
        print(" ")
        i = i + 1
       
def main():
    print("Enter number: ", end = "\t")
    No = int(input())
    pattern(No)

if __name__=="__main__":
    main()
