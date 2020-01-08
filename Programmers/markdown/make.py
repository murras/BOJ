import sys
if len(sys.argv) < 1 :
    print("Usage : python make.py 문제이름")
# pNum = sys.argv[1]
pNameArg = sys.argv[1:]
pName = ""

for i in range(len(pNameArg)):
    pName += str(pNameArg[i])
    pName += " "

pName = pName[:-1]

fileName = "프로그래머스 " + pName + " C++.md"

content = "## [프로그래머스 " + pName + " 문제](LINK)\n\n\n\n"
content += "프로그래머스 " + pName + " C++\n"
content += "> " + pName + ".cpp\n\n"
content += "```cpp\n"

with open(pName+".cpp", "r", encoding='UTF-8') as f:
    lines = f.readlines()
    for line in lines:
        content += line
content += "\n```"


with open(fileName, "w") as f:
    f.write(str(content))
