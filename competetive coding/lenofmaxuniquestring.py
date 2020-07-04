#we have to find the length of the longest unique substring in a string.


#youtube->4
#coding->6

def lengthofuniquesubstring(string):
  seen={}    # For containing unique char pos

  start=0    #  for updataing pos when multiple ocuurance of char found

  max_length=0


  for i in range(len(string)):
    if string[i] in seen:
      start=max(start,seen[string[i]]+1)
    
    seen[string[i]]=i
    max_length=max(max_length,i-start+1)

  return max_length









t=int(input())
for i in range(t):

  string=input()

  print(lengthofuniquesubstring(string))




