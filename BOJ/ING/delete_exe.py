import os
myName="delete_exe.py"
myNameLength= len(myName)
absPath = os.path.abspath(myName)
parentDir = (absPath[:-myNameLength])
parentDirList = os.listdir(parentDir)

for filename in parentDirList:
    if filename.endswith("exe") :
        os.remove(filename)