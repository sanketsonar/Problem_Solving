# program accept number from user and print that much number of *

def printStar(No):
    for i in range(No):
        print(" * ", end = " ")


def main():
    No = int(input(" Enter number of star: "))
    printStar(No)

if __name__=="__main__":
    main()