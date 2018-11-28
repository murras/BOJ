import sys
pNum = sys.argv[1]
pNameArg = sys.argv[2:]
pName = ""

for i in range(len(pNameArg)):
    pName += str(pNameArg[i])
    pName += " "


fileName = "BOJ 백준 " + str(pNum) + "번 " + pName + "C++.md"

content = "## [BOJ " + str(pNum) + "번 " + pName + \
    "문제](https://www.acmicpc.net/problem/" + pNum + ")\n\n\n\n"
content += "백준 " + str(pNum) + "번 : " + pName + " C++\n"
content += "> " + pNum + ".cpp\n\n"
content += "```cpp\n"

with open(pNum+".cpp", "r", encoding='UTF-8') as f:
    lines = f.readlines()
    for line in lines:
        content += line
content += "\n```"


with open(fileName, "w") as f:
    f.write(str(content))
