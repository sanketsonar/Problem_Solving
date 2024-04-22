# take user input and print inverse right angle triangle pattern
# * * * *
# * * *
# * *
# *

def PrintPattern(no):
    for i in range (no):
        for j in range (no):
            print(" * ", end = " ")
        no = no - 1
        print(" ")

def main():
    Size = int(input(" Enter size of a pattern: "))

    PrintPattern(Size)

if __name__ == "__main__":
    main()