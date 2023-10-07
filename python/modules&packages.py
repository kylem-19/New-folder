import re
# Your code goes here
find_members = []
for members in dir(re):
    if "find" in members:
        find_members.append(members)
print(sorted(find_members))