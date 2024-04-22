# program accept one number and display square pattern of that size
#   *   *   *  
#   *   *   *
#   *   *   *
#


def SqPattern(no):
    
    for i in range(no):
        for j in range(no):
            print(" * ", end = " ")
        print(" ")
          
def main():
    print("Enter size of Square pattern: ")
    Size = int(input())
    SqPattern(Size)

if __name__ == "__main__":
    main()