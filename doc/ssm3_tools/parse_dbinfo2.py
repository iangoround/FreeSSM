import struct
p = r'C:\Dev\SSM3 05-2015 v1.45.59.9\Cfap\DBinfo2'
b = open(p, 'rb').read()
print('size', len(b), 'records', len(b) // 0x24)
for i in range(0, min(len(b), 0x24 * 130), 0x24):
    r = b[i:i+0x24]
    name = r[:24].split(b'\0')[0]
    vals = struct.unpack('<III', r[24:36])
    if name:
        print('%3d %-26s %8d %8d %8d' % (i // 0x24, name.decode('ascii', 'replace'), vals[0], vals[1], vals[2]))
