#!/usr/bin/python3


def writeToFile():
    with open("TextFile.md", "w+") as f:
        f.write("hello world")

if __name__ == "__main__":
    writeToFile()

