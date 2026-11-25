import os, struct, glob
d = r'C:\Users\ianph\AppData\Local\Temp\opencode\dumps'
targets = {0x05FA:'ACTSTEERCHK(1530)', 0x0211:'WHEEL_CHECKMODE2(529)', 0x0203:'WHEEL_CHECKMODE(515)',
           0x0215:'WHEEL_CHECKMODE3(533)', 0x03DD:'WHEEL_CHECKMODE_TITLE(989)', 0x0202:'WHEEL_CHECK1(516)'}
for f in sorted(glob.glob(os.path.join(d,'*.bin'))):
    b = open(f,'rb').read()
    hits=[]
    for val,name in targets.items():
        pat = struct.pack('<H',val)
        start=0
        while True:
            i=b.find(pat,start)
            if i<0: break
            hits.append((i,name))
            start=i+1
    if hits:
        print(os.path.basename(f), 'size',len(b))
        for i,name in hits[:20]:
            lo=max(0,i-16); hi=min(len(b),i+32)
            print('  @%04X %s ctx=%s' % (i,name,b[lo:hi].hex(' ')))
