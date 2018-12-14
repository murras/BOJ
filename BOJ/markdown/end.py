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
        os.system("mv "+filename + " done")

num = int(sys.argv[1])
print(num)

if num < 5000:
    os.system("mv " + sys.argv[1] + ".cpp ../push")
elif num < 10000:
    os.system("mv " + sys.argv[1] + ".cpp ../push/5000~9999/")
else:
    os.system("mv " + sys.argv[1] + ".cpp ../push/10000~19999/")
