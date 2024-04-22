# program to measure length of input string
def stringLength(value):
    return len(value)

def main():
    Name = input("Enter name: ")
    print(Name)
    print("Length of name : ",stringLength(Name))

if __name__ == "__main__":
    main()