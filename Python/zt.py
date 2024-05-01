l = [{'make':'samsung' , 'model':'2', 'year':'2020'},
     {'make':'oppo' , 'model':'1', 'year':'2030'},
     {'make':'nokia' , 'model':'5', 'year':'2050'}]
l.sort(key = lambda x : x['make'])
print(l)