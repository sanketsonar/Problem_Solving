# print pattern by accepting number
# 1   1   1
# 2   2   2
# 3   3   3

def pattern(no):
    for i in range(1,no+1):
        for j in range(1,no+1):
            print(j, end = " ")
        print(" ")

def main():
    print("Enter number: ")
    No = int(input())
    pattern(No)

if __name__ == "__main__":
    main()