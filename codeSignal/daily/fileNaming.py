def fileNaming(names):
    fd = set()
    for i in range(len(names)):
        tmp_name = names[i]
        if names[i] in fd:
            ct = 1
            while names[i]+"("+str(ct)+")" in fd:
                ct+=1
            tmp_name = names[i]+"("+str(ct)+")"
        fd.add(tmp_name)
        names[i] = tmp_name
    return names
            

