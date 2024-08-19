def insert_substring(string,sub_string,pos):
    return string[:pos] + sub_string + string[pos:]

string = "Hello world, this is a test string"
sub_string="sahil"
pos=int(input("Enter the position at which you want to add the word : "))
result=insert_substring(string,sub_string,pos)
print("Result:",result)