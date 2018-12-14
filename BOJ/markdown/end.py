import os
import sys
myName = "end.py"
myNameLength = len(myName)
absPath = os.path.abspath(myName)
parentDir = (absPath[:-myNameLength])
parentDirList = os.listdir(parentDir)

for filename in parentDirList:
    if filename.endswith("html"):
        print("remove file : " + filename)
        os.remove(filename)
    if filename.endswith("md"):
        print("move file " + filename)
        os.system("mv \""+ filename + "\" done")